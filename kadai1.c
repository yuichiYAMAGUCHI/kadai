#include <stdio.h>
int main()
{
    int max,i;                        /*数列の個数maxと数列の番号iを宣言*/
    int a[10];                         /*max個の配列aを宣言 */

    /*数列の個数を入力*/
    printf("Input total number :");         /*数列の個数を変数maxに代入 */
    scanf("%d", &max);

    /*数列の値を入力*/
    for(i=1; i<=max; i++){               /* i=1からi=maxまで合計max個の数列の値をa[i]に格納 */
        printf("Input %dth number :", i);
        scanf("%d", &a[i]);
    }

    /*逆順を出力*/
    printf("Reversed order :");
    for(i=max; i>0; i--){              /* i=maxからi=0まで合計max個の数列の値を出力*/
        printf("%d ",a[i]);
    }
    return 0;
}
