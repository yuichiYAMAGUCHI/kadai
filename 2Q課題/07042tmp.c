#include <stdio.h>
void main()
{
	int z,a,b,c,i=0,x,s;

	printf("�����̉���a����͂��Ă��������B");
	scanf("%d",&a);
	printf("�����̏��b����͂��Ă��������B");
	scanf("%d",&b);

	// # step2 �f���łȂ����̌������߂�
	for(x=a; x<=b; x++){
		for(c=a; c<=b; c++){
			if(x%c==0){
			i=i+1;
			}
	}

	// # step3 �f���̌������߂�
	if (i>2){  #���͑f���łȂ�
	}
	else{   #���͑f��
			s=s+1;
	}
	printf("%d",s);
}
