#include <stdio.h>
void main()
{
	int a,b,c,i,x=0;
	
	printf("調査の対象となる整数cを入力してください。");
	scanf("%d",&c);
	printf("調査の下限aを入力してください。");
	scanf("%d",&a);
	printf("調査の上限bを入力してください。");
	scanf("%d",&b);

	for(i=a; i<=b; i++){
		if(c%i==0){
		x=x+1;
		}
	}
	printf("%d",x);
}