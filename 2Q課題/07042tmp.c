#include <stdio.h>
void main()
{
	int a,b,c,x,s=0;

	printf("調査の下限aを入力してください。");
	scanf("%d",&a);
	printf("調査の上限bを入力してください。");
	scanf("%d",&b);
	
	// # step2 素数でない数の個数を求める
	for(x=a; x<=b; x++){
		int i=0;
		//printf("x=%d   ",x);
		for(c=1; c<=x; c++){
			if(x%c==0){
			i=i+1;
			}
		}
		//printf("i=%d   ",i);
		// # step3 素数の個数を求める
		if (i==2){  //xは素数
			s=s+1;
		}
	}
	printf("%d",s);
}

