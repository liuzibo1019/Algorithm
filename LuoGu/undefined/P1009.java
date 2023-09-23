import java.math.BigDecimal;
import java.util.Scanner;

public class P1009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigDecimal res = new BigDecimal(0);
        BigDecimal temp = new BigDecimal(1);
        for(int i = 1; i <= n; i++){
            temp = new BigDecimal(1);
            for(int j = 1; j <= i; j++){
                temp = temp.multiply(new BigDecimal(j));
            }
            res = res.add(temp);
        }
        sc.close();
        System.out.println(res);
    }
}
