#include <stdio.h>
void main()
{
	int i, data[100], n=0;
	
	printf("入力する数字の個数を入れてください。\n");
	scanf("%d",&n);
	for ( i=0 ; i<n ; i++ )
	{
		printf("%dつ目を入力してください",i+1);
		scanf("%d",&data[i]);
	}
	for(i=0; i<n; i++){
		printf("%d ",data[i]);
	}
}
