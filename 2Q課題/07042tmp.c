#include <stdio.h>
void main()
{
	int a,b,c,x,s=0;

	printf("�����̉���a����͂��Ă��������B");
	scanf("%d",&a);
	printf("�����̏��b����͂��Ă��������B");
	scanf("%d",&b);
	
	// # step2 �f���łȂ����̌������߂�
	for(x=a; x<=b; x++){
		int i=0;
		//printf("x=%d   ",x);
		for(c=1; c<=x; c++){
			if(x%c==0){
			i=i+1;
			}
		}
		//printf("i=%d   ",i);
		// # step3 �f���̌������߂�
		if (i==2){  //x�͑f��
			s=s+1;
		}
	}
	printf("%d",s);
}

