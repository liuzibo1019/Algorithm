// RSA_Encryption.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>

using namespace std;

//unsigned long 32位
unsigned long gcd(unsigned long a, unsigned long b){//欧几里得算法
    unsigned long rem;
    while(b != 0){
        rem = a % b;
        a = b; 
        b = rem;
    }
    return a;
}

//把十进制数a变成n进制数
void dec_to_n(unsigned long a, unsigned long n, unsigned long sto[], int &i) {
    i = 0;
    while (a != 0) {
        sto[i] = a % n;
        i++;
        a /= n;
    }
}
/*
unsigned long mocheng(unsigned long a, unsigned long b, unsigned long n) {
    unsigned long A[32];
    unsigned long B[32];
    unsigned long C[64];//存储相乘之后的结果
    int len_a, len_b;
    dec_to_n(a, n, A, len_a);//首先把a和b均转换成n进制数存储在两个数组中
    dec_to_n(b, n, B, len_b);
    for()
    int z = len_a + len_b - 1;
    unsigned long carry = 0;
    unsigned long result;
    for (int i = 0; i <= z; i++) {
        result = carry;
        for (int j = 0; j <= len_b; j++) {
            if (0 <= i - j <= len_a) {
                result = result + A[i - j] * B[j];
                C[i] = result % n;
                carry = result / n;
            }
        }
    }
    if (carry != 0) {
        z = z + 1;
        C[z] = carry;
    }

    return C[0];
}*/

//从左到右二进制算法计算模幂
unsigned long mi(unsigned long m, unsigned long n, unsigned long b) {//计算g^b mod n    
    unsigned long b_to_bin[32];
    int len = 0;
    dec_to_n(b, 2, b_to_bin, len);//把参数b转换成二进制形式，存储在b_to_bin中，长度存储在len中

    unsigned long A = 1;
    for (int j = len - 1; j >= 0; j--) {
        A = (A * A) % n;
        if (b_to_bin[j] == 1) {
            A = (A * m) % n;
        }
        //cout << A << endl;
    }
    return A;
}

bool fermat_is_prim(unsigned long m,int k){//Fermat素性检验算法，k为安全参数
    for (int i = 0; i < k; i++) {
        srand(time(0));
        unsigned long a = (rand() % (m - 2 - 2 + 1)) + 2;//选一个[2,m-2]范围内的素数
        unsigned long r = mi(a, m, m - 1);//计算a^(m-1) mod m
        if (r != 1) {
            return 0;//m为合数
        }
    }
    return 1;//n有1-1/(2^k)的概率为素数
}

unsigned long rsa_encrypt(unsigned long p, unsigned long q, unsigned long e, unsigned long m) {//RSA加密
    unsigned long long n = p * q;
    return mi(m, n, e);
}

unsigned long rsa_decrypt(unsigned long p, unsigned long q, unsigned long d, unsigned long c) {//RSA解密
    unsigned long long n = p * q;
    return mi(c, n, d);
}

int main()
{
    cout << "e or de?" << endl;
    char str[20];
    cin >> str;

    if (!strcmp(str, "e")) {
        cout << "input your p,q,e,m" << endl;
        unsigned long p, q, e, m;
        cin >> p;
        cin >> q;
        cin >> e;
        cin >> m;
        unsigned long fi = (p - 1) * (q - 1);
        /*if (fermat_is_prim(p, 5) == 0) {
            cout << "p is not a prime number" << endl;
        }
        else if (fermat_is_prim(q, 5) == 0) {
            cout << "q is not a prime number" << endl;
        }
        else if ((e <= 1) || (e >= fi)) {
            cout << "e is not between 1 and fi" << endl;
        }
        else if (gcd(e, fi) != 1) {
            cout << "e and fi is relatively prime" << endl;
        }
        else {*/
            cout << "Correct input!" << endl;
            cout << "The answer is " << rsa_encrypt(p, q, e, m) << endl;
        //}
    }

    if (!strcmp(str, "de")) {
        cout << "input your p,q,d,c" << endl;
        unsigned long p, q, d,c;
        cin >> p;
        cin >> q;
        cin >> d;
        cin >> c;
        cout << rsa_decrypt(p, q, d, c) << endl;
    }

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
