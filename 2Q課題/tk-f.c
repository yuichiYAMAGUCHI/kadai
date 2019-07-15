#include <stdio.h>
void main()
{
	int i, sum=0;
	while(sum<10){
		switch(sum){
		case 0:
			sum++;
			break;
		case 1:
			sum++;
		case 2:
			sum+=2;
			break;	
		case 3:
			sum+=3;
			break;
		default:
			sum+=7;
			break;
		}
	}
	printf("%d",sum);
}