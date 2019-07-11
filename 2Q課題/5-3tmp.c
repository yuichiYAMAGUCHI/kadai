#include <stdio.h>
void main(){
	int n,m,data[100],b;
	printf("put number as you like¥n");
	scanf("%d",&n);
	printf("put number of digits¥n");
	scanf("%d",&m);  //進数入力
	int a = n;
	int counter =0;
	for(int i=0; i<100; i++){
		counter += 1;
		b = a % m;
	  a = a / m;
	  data[i] = b;
	  if(a == 0) break;
	}
	for(int i=counter; i<0; i--){
	  printf("%d¥n",data[i]);
	}
}
