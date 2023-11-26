/* #include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int num = 0;
    for (int d1 = 5; d1 < 10; d1 += 2)
    {
        num = d1;
        if (isPrime(num) && num >= a && num <= b)
        {
            cout << num << endl;
        }
    }
    if (b > 10)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            num = d1 + d1 * 10;
            if (isPrime(num) && num >= a && num <= b)
            {
                cout << num << endl;
            }
        }
    }

    if (b > 1e2)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                num = d1 * 1e2 + d2 * 10 + d1;
                if (isPrime(num) && num >= a && num <= b)
                {
                    cout << num << endl;
                }
            }
        }
    }

    if (b > 1e3)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                num = d1 * 1e3 + d2 * 1e2 + d2 * 1e1 + d1;
                if (isPrime(num) && num >= a && num <= b)
                {
                    cout << num << endl;
                }
            }
        }
    }
    if (b > 1e4)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                for (int d3 = 0; d3 < 10; d3++)
                {
                    num = d1 * 1e4 + d2 * 1e3 + d3 * 1e2 + d2 * 10 + d1;
                    if (isPrime(num) && num >= a && num <= b)
                    {
                        cout << num << endl;
                    }
                }
            }
        }
    }
    if (b > 1e5)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                for (int d3 = 0; d3 < 10; d3++)
                {
                    num = d1 * 100000 + d2 * 10000 + d3 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if (isPrime(num) && num >= a && num <= b)
                    {
                        cout << num << endl;
                    }
                }
            }
        }
    }
    if (b > 1e6)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                for (int d3 = 0; d3 < 10; d3++)
                {
                    for (int d4 = 0; d4 < 10; d4++)
                    {
                        num = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                        if (isPrime(num) && num >= a && num <= b)
                        {
                            cout << num << endl;
                        }
                    }
                }
            }
        }
    }
    if (b > 1e7)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                for (int d3 = 0; d3 < 10; d3++)
                {
                    for (int d4 = 0; d4 < 10; d4++)
                    {
                        num = d1 * 10000000 + d2 * 1000000 + d3 * 100000 + d4 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                        if (isPrime(num) && num >= a && num <= b)
                        {
                            cout << num << endl;
                        }
                    }
                }
            }
        }
    }
    if (b > 1e8)
    {
        for (int d1 = 1; d1 < 10; d1 += 2)
        {
            for (int d2 = 0; d2 < 10; d2++)
            {
                for (int d3 = 0; d3 < 10; d3++)
                {
                    for (int d4 = 0; d4 < 10; d4++)
                    {
                        for (int d5 = 0; d5 < 10; d5++)
                        {
                            num = d1 * 1e8 + d2 * 1e7 + d3 * 1e6 + d4 * 1e5 + d5 * 1e4 + d4 * 1e3 + d3 * 1e2 + d2 * 10 + d1;
                            if (isPrime(num) && num >= a && num <= b)
                            {
                                cout << num << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int l, r;
bool check1(int x)//检查位数
{
	if((1000 <= x && x <= 9999) || (100000 <= x && x <= 999999)) return 0;//不知道&&和||优先级的可以打个括号 
	return 1;
} 
bool check2(int x)//检查是否回文
{
	int a[20], flag = 1;//反正开得下，多开点
	while (x > 0)
	{
		a[flag] = x % 10;
		x /= 10;
		flag++;
	} 
	for (int i = 1; i <= flag / 2; i++)
		if(a[i] != a[flag-i]) return 0;//不符合回文 
	return 1;
} 
bool check3(int x)//检查是否为质数 
{
	if(x == 2) return 1;
	for(int i = 2; i <= sqrt(x); i++)
		if(x % i == 0) return 0;
	return 1;
}
int main()
{
	scanf("%d %d", &l, &r);
	if(l == 2) printf("2\n");//一定要注意2！！！ 
	if(l % 2 == 0) l++; 
	r = min(9999999, r);//再大的数都不可能是回文质数
	for(int i = l; i <= r; i = i + 2)//枚举每一个奇数
	{
		if(check1(i) == 0) continue;
		if(check2(i) == 0) continue;
		if(check3(i) == 0) continue;
		printf("%d\n", i);//printf会比cout快很多 
	}	
	return 0;
}