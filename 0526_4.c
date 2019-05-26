#include <stdio.h>
int main()
{
  int data[10] = {-3, -10, 0, 7, 2, 7, -9, 6, -9, 4};
  int i, sqrt=0, abs=0;
  for(i=0; i<10; i++){
    if(data[i] * data[i] > sqrt){         //trur:15‚Ì”{”
      sqrt = data[i] * data[i];
      abs = data[i];
    }
  }
  printf("Maximum absolute value is %d\n",abs);
}
