#include <stdio.h>
int main()
{
    int a[33];  /*  32だとメモリ領域不足エラーになることを試そう*/
                /* 理由が10行目にあることを理解しよう */
    a[0]=2;
    a[1]=-1;
    int n;
    for(n=0; n<=30; n++){
        a[n+2] = -a[n+1]+a[n]+2;
        printf("a[%d]=%d\n", n,a[n]);
    }
    return 0;


//課題２編集






}
