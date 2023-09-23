#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[1000];
    gets(s);
    int cntA, cntE, cntI, cntO, cntU;

    while (n--)
    {
        gets(s);
        cntA = cntE = cntI = cntO = cntU = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if(s[i] == 'a'){
                cntA++;
            }
            if(s[i] == 'e'){
                cntE++;
            }
            if(s[i] == 'i'){
                cntI++;
            }
            if(s[i] == 'o'){
                cntO++;
            }
            if(s[i] == 'u'){
                cntU++;
            }
        }
        printf("a:%d\n", cntA);
        printf("e:%d\n", cntE);
        printf("i:%d\n", cntI);
        printf("o:%d\n", cntO);
        printf("u:%d\n\n", cntU);
        
        
    }
}