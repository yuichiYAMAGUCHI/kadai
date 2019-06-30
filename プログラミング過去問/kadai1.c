#include <stdio.h>
<<<<<<< HEAD
void main()
{
	int a,b,c,i,x;
	
	printf("®”a‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&a);
	printf("®”b‚ð1“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&b);
	printf("®”c‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&c);

	for(i=a; i<=b; i++){
		if(c%i==0){
		x=x+1;
		}
	}
	printf("%d",x);
}
=======
int main()
{
    int max,i;                        /*æ•°åˆ—ã®å€‹æ•°maxã¨æ•°åˆ—ã®ç•ªå·iã‚’å®£è¨€*/
    /*æ•°åˆ—ã®å€‹æ•°ã‚’å…¥åŠ›*/
    printf("Input total number :");         /*æ•°åˆ—ã®å€‹æ•°ã‚’å¤‰æ•°maxã«ä»£å…¥ */
    scanf("%d", &max);
    
     /*maxå€‹ã®é…åˆ—aã‚’å®£è¨€ */
    int a[max];

    /*æ•°åˆ—ã®å€¤ã‚’å…¥åŠ›*/
    for(i=1; i<=max; i++){               /* i=1ã‹ã‚‰i=maxã¾ã§åˆè¨ˆmaxå€‹ã®æ•°åˆ—ã®å€¤ã‚’a[i]ã«æ ¼ç´ */
        printf("Input %dth number :", i);
        scanf("%d", &a[i]);
    }

    /*é€†é †ã‚’å‡ºåŠ›*/
    printf("Reversed order :");
    for(i=max; i>0; i--){              /* i=maxã‹ã‚‰i=0ã¾ã§åˆè¨ˆmaxå€‹ã®æ•°åˆ—ã®å€¤ã‚’å‡ºåŠ›*/
        printf("%d ",a[i]);
    }
    return 0;
}
>>>>>>> 53108c85fa1b155ceb9b00555fcf0ab620864d08
