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
	for(j=0;j<n;j++){
		s=2*s+data[j];
		//printf("%d\n",s);
	}
	printf("%2d",s);
}