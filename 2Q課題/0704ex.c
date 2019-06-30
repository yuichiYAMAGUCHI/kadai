#include <stdio.h>
void main()
{
	int c,i,x=0;
	
	printf("®”c‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&c);

	for(i=1; i<=c; i++){
		if(c%i==0){
		x=x+1;
		}
	}
	printf("%d",x);
}