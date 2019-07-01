#include <stdio.h>
void main()
{
	int a,b,c,x,s=0;

	printf("’²¸‚Ì‰ºŒÀa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&a);
	printf("’²¸‚ÌãŒÀb‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&b);
	
	// # step2 ‘f”‚Å‚È‚¢”‚ÌŒÂ”‚ğ‹‚ß‚é
	for(x=a; x<=b; x++){
		int i=0;
		//printf("x=%d   ",x);
		for(c=1; c<=x; c++){
			if(x%c==0){
			i=i+1;
			}
		}
		//printf("i=%d   ",i);
		// # step3 ‘f”‚ÌŒÂ”‚ğ‹‚ß‚é
		if (i==2){  //x‚Í‘f”
			s=s+1;
		}
	}
	printf("%d",s);
}

