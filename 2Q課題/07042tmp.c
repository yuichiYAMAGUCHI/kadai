#include <stdio.h>
void main()
{
	int z,a,b,c,i=0,x,s;

	printf("調査の下限aを入力してください。");
	scanf("%d",&a);
	printf("調査の上限bを入力してください。");
	scanf("%d",&b);

	// # step2 素数でない数の個数を求める
	for(x=a; x<=b; x++){
		for(c=a; c<=b; c++){
			if(x%c==0){
			i=i+1;
			}
	}

	// # step3 素数の個数を求める
	if (i>2){  #ｘは素数でない
	}
	else{   #ｘは素数
			s=s+1;
	}
	printf("%d",s);
}
