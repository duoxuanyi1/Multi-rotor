#include "stdio.h"

int option_print(a)
{
	int c;
	if(a>50)
		c = a*a/2;
	else
		c=a;
	return c;
}
void test_option()
{
	int i;
	for(i=0;i<100;i++)
	{
		if(option_print(i)!=i*i/2)
			printf("error!!!");
	}

}
int main()
{
	test_option();//²âÊÔ²»Í¨¹ý
	printf("%d",option_print(3));
	return 0;
} 