#include <stdio.h>
<<<<<<< HEAD
void main()
{
	int a,b,c,i,x;
	
	printf("����a����͂��Ă��������B");
	scanf("%d",&a);
	printf("����b��1���͂��Ă��������B");
	scanf("%d",&b);
	printf("����c����͂��Ă��������B");
	scanf("%d",&c);

	for(i=a; i<=b; i++){
		if(c%i==0){
		x=x+1;
		}
	}
	printf("%d",x);
}
=======
int main()
{
    int max,i;                        /*数列の個数maxと数列の番号iを宣言*/
    /*数列の個数を入力*/
    printf("Input total number :");         /*数列の個数を変数maxに代入 */
    scanf("%d", &max);
    
     /*max個の配列aを宣言 */
    int a[max];

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
>>>>>>> 53108c85fa1b155ceb9b00555fcf0ab620864d08
