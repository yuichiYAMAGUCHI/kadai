#include <stdio.h>
void main()
{
	int a,b,c,i,x=0;
	
	printf("�����̑ΏۂƂȂ鐮��c����͂��Ă��������B");
	scanf("%d",&c);
	printf("�����̉���a����͂��Ă��������B");
	scanf("%d",&a);
	printf("�����̏��b����͂��Ă��������B");
	scanf("%d",&b);

	for(i=a; i<=b; i++){
		if(c%i!=0){
		x=x+1;
		}
	}
	printf("%d",x);
}