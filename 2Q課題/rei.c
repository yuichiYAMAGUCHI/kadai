#include <stdio.h>
void main()
{
	int s=0,i,data[100],n=0,j;
	printf("桁数を入力してください。");
	scanf("%d",&n);
	printf("1または0を入力してください。");
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
		for(i=0;i<n;i++){
		printf("%d",data[i]);
	}
}