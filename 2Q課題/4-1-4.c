#include <stdio.h>
int main()
{
	int a[100],s=0;
	a[0]=2;
	a[1]=-1;
	for(int n=0; n<=32; n++){
		a[n+2] = -a[n+1]+a[n]+2;
		if(0<a[n]){
			int i=0;
			for(int c=1; c<=a[n]; c++){
				if(a[n]%c==0)i=i+1;
			}
			if(i==2){
				s=s+1;
				printf("%d\n",a[n]);
			}
		}
	}
	printf("%d",s);
}