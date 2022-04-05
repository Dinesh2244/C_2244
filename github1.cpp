#include <stdio.h>
int main()
{
     char name[20];
	int a,b;
	float c,d;
	unsigned long long int e;
	unsigned short int f;
	unsigned long int g;
	signed long int h;
	double i=12345.6789;
	signed short int j=-23456;
	signed long long int k=-9223372036854775808;

    printf("Enter your full name: ");
    scanf("%s", name);
    printf("Your short name is %s.\n", name);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("The sum of two numbers=%d\n",a+b);
    printf ("Enter ASCII  value for first two letters of your name:\n");
    scanf("%f%f",&c,&d);
    printf("the division of the ASCII  value is:%f\n",c/d);
    printf("size of Unsigned long long int is %lld bytes\n",sizeof(e));
    printf("size of Unsigned short int is %hu bytes\n",sizeof(f));
    printf("size of Unsigned long int is %lu bytes\n",sizeof(g));
    printf("size of Signed long int is %ld bytes\n",sizeof(h));
    printf("Value of long double is %lf\n",i);
    printf("Value of signed short int is %i\n",j);
    printf("Value of signed long long int is %lld\n",k);
    
    return 0;
	}
