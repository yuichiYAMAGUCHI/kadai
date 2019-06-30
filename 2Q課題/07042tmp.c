#include <stdio.h>
void main()
{
	int z,a,b,c,i=0,x,s;

	printf("’²¸‚Ì‰ºŒÀa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&a);
	printf("’²¸‚ÌãŒÀb‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&b);

	// # step2 ‘f”‚Å‚È‚¢”‚ÌŒÂ”‚ğ‹‚ß‚é
	for(x=a; x<=b; x++){
		for(c=a; c<=b; c++){
			if(x%c==0){
			i=i+1;
			}
	}

	// # step3 ‘f”‚ÌŒÂ”‚ğ‹‚ß‚é
	if (i>2){  #‚˜‚Í‘f”‚Å‚È‚¢
	}
	else{   #‚˜‚Í‘f”
			s=s+1;
	}
	printf("%d",s);
}
