#include <stdio.h>
void main(){
	int n,m,data[100],b,i;
	printf("put number as you like \n");
	scanf("%d",&n);
	printf("put number of digits \n");
	scanf("%d",&m);  //進数入力
	int a = n;
	for(i=0; i<100; i++){
		b = a % m;
	 	a = a / m;
	 	data[i] = b;
		//printf("%d",counter);
		if(a == 0) break;
	}
	for(int j=i;0<=j;j--){
		printf("%d",data[j]);
	}
}
