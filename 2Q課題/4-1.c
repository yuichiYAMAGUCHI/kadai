#include <stdio.h>
void main()
{
	int i, a, data[5], n=0;

	printf("5つの整数を入力してください。\n");
	for ( i=0 ; i<5 ; i++ )
	{
		printf("%dつ目を入力してください",i+1);
		scanf("%d",&data[i]);
	}
	for(i=0;i<5;i++){
		if(data[i]%7==0)
			n=n+1;
		}
	printf("7の倍数の個数は%d個です。\n",n);
}
