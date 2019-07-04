#include <stdio.h>
void main()
{
	int i, a, data[5], sum, max,min;
	double average;
	printf("5つの整数を入力してください。\n");
	for ( i=0 ; i<5 ; i++ )
	{
		printf("%dつ目を入力してください",i+1);
		scanf("%d",&data[i]);
	}
	printf("入力された数%d,%d,%d,%d,%d\n", data[0], data[1], data[2], data[3],
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
	printf("平均値%f\n最大値%d\n最小値%d\n",average,max,min);
}