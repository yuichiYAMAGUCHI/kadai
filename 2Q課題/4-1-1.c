#include <stdio.h>
void main()
{
	int i, data[100], n=0;
	
	printf("���͂��鐔���̌������Ă��������B\n");
	scanf("%d",&n);
	for ( i=0 ; i<n ; i++ )
	{
		printf("%d�ڂ���͂��Ă�������",i+1);
		scanf("%d",&data[i]);
	}
	for(i=0; i<n; i++){
		printf("%d ",data[i]);
	}
}
