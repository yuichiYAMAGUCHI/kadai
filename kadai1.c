#include <stdio.h>
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