#include <stdio.h>
void main()
{
	int a,b,c,i,x=0;
	
	printf("’²¸‚Ì‘ÎÛ‚Æ‚È‚é®”c‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&c);
	printf("’²¸‚Ì‰ºŒÀa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&a);
	printf("’²¸‚ÌãŒÀb‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&b);

	for(i=a; i<=b; i++){
		if(c%i!=0){
		x=x+1;
		}
	}
	printf("%d",x);
}