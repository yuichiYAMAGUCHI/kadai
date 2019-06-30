#include <stdio.h>
int main()
{
    int a[35];  /*  35より小さいとメモリ領域不足エラーになることを試そう*/
                /* 100とかでも問題ない。理由が11行目にあることを理解しよう */
    a[0]=2;
    a[1]=-1;
    int n;
    int sum=0;  /* ４の倍数の合計を格納する変数 */
    for(n=0; n<=32; n++){
        a[n+2] = -a[n+1]+a[n]+2;
        printf("a[%d]=%d\n", n,a[n]);
        if(n%4==0){  /*  「nが4の倍数」=「nを4で割った余りが0」  */
          sum = sum + a[n];
          printf("sum%d=%d\n",n,sum);
        }
      }
    return 0;
}
