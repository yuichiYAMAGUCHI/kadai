#include <stdio.h>
void main()
{
	int i,n,array[3];
	const char data[20][20]={"one","two","three","four","five","six","seven",
		"eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	const char tendigits[8][20]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
	printf("99‚Ü‚Å‚Ì”š‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢B");
	scanf("%d",&n);
	array[2]=n/100;
	array[1]=(n%100)/10;
	array[0]=n%10;
	printf("%d\n",array[1]);
	printf("%d\n",array[0]);
	if(n<=20){
		for(i=0;i<20;i++){
			printf("%c",data[n-1][i]);
		}
	}
	else{
		for(i=0;i<8;i++){
			printf("%c",tendigits[array[1]-2][i]);
		}
		for(i=0;i<20;i++){
				printf("%c",data[array[0]][i]);
		}
	}
}