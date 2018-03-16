#include <stdio.h>
#include<math.h>
int main(void) 
{
	float num;
	int x;
	printf("\n enter num to round off:");
	scanf("%f",&num);
	x=(int)(num+0.5);
	printf("\n%d",x);
	return 0;
}
