#include <stdio.h>
void main()
{
 int i,z=0;
  for(i=0;i<=100;i++){
  	if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%10>=5){
  	z=z+i;
  	//printf("%d\n",i);
  	}
  }
  printf("%d",z);
}
   