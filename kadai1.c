#include <stdio.h>
void main()
{
	int a,b,c,i,x;
	
	printf("整数aを入力してください。");
	scanf("%d",&a);
	printf("整数bを1入力してください。");
	scanf("%d",&b);
	printf("整数cを入力してください。");
	scanf("%d",&c);

	for(i=a; i<=b; i++){
		if(c%i==0){
		x=x+1;
		}
	}
	printf("%d",x);
}