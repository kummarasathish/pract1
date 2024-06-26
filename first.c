#include<stdio.h>

int add(int,int);

int main()
{

	int a=20;
	int b=50;

	int c=add(a,b);

	printf("the C value is:%d",c);

}
int add(int x,int y)
{

	return x+y;
}
