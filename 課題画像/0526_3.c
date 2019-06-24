#include <stdio.h>
int main()
{
  int i;
  for(i=1; i<=100; i++){
    if(i%3==0 && i%5==0){         //trur:15‚Ì”{”
      printf("$\n");
    }
    else if(i%3 ==0){             //trur:3‚Ì”{”
      printf("%d!\n",i);
    }
    else if(i%5 ==0){             //trur:5‚Ì”{”
      printf("*%d\n",i);
    }
    else{
      printf("%d\n",i);
    }
 }
}
