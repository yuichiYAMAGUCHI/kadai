#include <stdio.h>
void main()
{
	int a,b,c,i,x;
	
	printf("®”a‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&a);
	printf("®”b‚ğ1“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&b);
	printf("®”c‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&c);

	for(i=a; i<=b; i++){
		if(c%i==0){
		x=x+1;
		}
	}
	printf("%d",x);
}