#include <stdio.h>
void main()
{
	int i, a, data[5], n;

	printf("5�̐�������͂��Ă��������B\n");
	for ( i=0 ; i<5 ; i++ )
	{
		printf("%d�ڂ���͂��Ă�������",i+1);
		scanf("%d",&data[i]);
	}
	for(i=0;i<5;i++){
		if(data[i]%7==0)
			n=n+1;
		}
	}
	printf("7�̔{���̌���%d�ł��B\n",n);
}