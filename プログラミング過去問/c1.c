#include <stdio.h>
int main(void)

{
	double a;
	printf("整数を入力してください:");
	scanf("%lf",&a);
	a=a*a*a;
	printf("a*a*a=%lf\n",a);

}