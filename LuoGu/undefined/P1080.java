import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Arrays;
import java.util.Scanner;

// Person包括国王和大臣
class Person implements Comparable<Person> {
    // 每个人左右手的两个数
    Integer leftNum;
    Integer rightNum;
    // 左右手两个数的乘积
    BigDecimal mul;

    public Person() {
    }

    public Person(Integer leftNum, Integer rightNum) {
        this.leftNum = leftNum;
        this.rightNum = rightNum;
        mul = new BigDecimal(leftNum).multiply(new BigDecimal(rightNum));
    }

    // 重写compareTo方法
    @Override
    public int compareTo(Person e) {
        return this.mul.compareTo(e.mul);
    }

    // 重写toString方法, 测试使用
    @Override
    public String toString() {
        return "leftNum -> " + leftNum + ", rightNum -> " + rightNum + ", mul -> " + mul;
    }
}

public class P1080 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        n++; // 加上国王
        Person[] numList = new Person[n];
        int leftNum, rightNum;
        // Person数组记录所有人的数据
        for (int i = 0; i < n; i++) {
            leftNum = sc.nextInt();
            rightNum = sc.nextInt();
            numList[i] = new Person(leftNum, rightNum);
        }
        // 已经重写compareTo方法, 可以直接排序
        Arrays.sort(numList, 1, n);
        BigDecimal temp; // 用于暂时记录每个大臣的金币数
        BigDecimal res = new BigDecimal(0); // 获奖赏最多的大臣所获得的金币数
        for (int i = 1; i < n; i++) {
            temp = new BigDecimal(1);
            for (int j = 0; j < i; j++) {
                // i前所有人左手数字的乘积
                temp = temp.multiply(new BigDecimal(numList[j].leftNum));
            }
            // i前所有人左手数字的乘积除以i右手的数字
            temp = temp.divide(new BigDecimal(numList[i].rightNum), 0, RoundingMode.DOWN);
            // 如果temp大于res则更新res
            if (temp.compareTo(res) == 1) {
                res = temp;
            }
        }
        System.out.println(res);
        sc.close();
    }
}