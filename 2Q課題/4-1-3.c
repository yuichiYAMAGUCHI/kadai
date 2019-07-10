#include <stdio.h>
int main()
{
	int a[100];
	a[0]=2;
	a[1]=-1;
	for(int n=0; n<=30; n++){
		a[n+2] = -a[n+1]+a[n]+2;
		printf("a[%d]=%d\n",n,a[n]);
		if(5000<=a[n]){
			break;
		}
	}
}