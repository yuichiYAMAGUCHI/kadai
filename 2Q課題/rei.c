#include <stdio.h>
void main()
{
	int s=0,i,data[100],n=0,j;
	printf("��������͂��Ă��������B");
	scanf("%d",&n);
	printf("1�܂���0����͂��Ă��������B");
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
		for(i=0;i<n;i++){
		printf("%d",data[i]);
	}
}