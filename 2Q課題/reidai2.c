#include <stdio.h>
void main()
{
	int i, a, data[5], sum, max,min;
	double average;
	printf("5�̐�������͂��Ă��������B\n");
	for ( i=0 ; i<5 ; i++ )
	{
		printf("%d�ڂ���͂��Ă�������",i+1);
		scanf("%d",&data[i]);
	}
	printf("���͂��ꂽ��%d,%d,%d,%d,%d\n", data[0], data[1], data[2], data[3],
data[4]);
	sum=0,max=data[0],min=data[0];
	for ( i=0 ; i<5 ; i++ ){
		sum = sum + data[i];
		average = sum / 5.0;
			if(max<data[i]){
				max=data[i];
			}
			if(data[i]<min){
				min=data[i];
			}	
	}
	printf("���ϒl%f\n�ő�l%d\n�ŏ��l%d\n",average,max,min);
}