#include <stdio.h>
void main()
{
	int i, data[100], n=0;
	
	printf("“ü—Í‚·‚é”š‚ÌŒÂ”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢B\n");
	scanf("%d",&n);
	for ( i=0 ; i<n ; i++ )
	{
		printf("%d‚Â–Ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢",i+1);
		scanf("%d",&data[i]);
	}
	for(i=0; i<n; i++){
		printf("%d ",data[i]);
	}
}
