#include <stdio.h>
void main()
{
	int i, a, data[5], n;

	printf("5‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	for ( i=0 ; i<5 ; i++ )
	{
		printf("%d‚Â–Ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢",i+1);
		scanf("%d",&data[i]);
	}
	for(i=0;i<5;i++){
		if(data[i]%7==0)
			n=n+1;
		}
	}
	printf("7‚Ì”{”‚ÌŒÂ”‚Í%dŒÂ‚Å‚·B\n",n);
}