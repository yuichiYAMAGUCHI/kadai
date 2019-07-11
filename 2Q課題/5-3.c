#include <stdio.h>
void main()
{
	int n,m,data[100],b;
	printf("Prease put number as you like.\n");
	scanf("%d",&n);
	printf("Prease put number of digits.\n");
	scanf("%d",&m);
	int a=n;
	for(int i=0;i<n:i++){
		b=n%m;
		n=n/m;
		data[i]=b;
		if(a==0) break;
	}	
	for(int i=n;i<0;i--){
		printf(data[i]);
	}
}