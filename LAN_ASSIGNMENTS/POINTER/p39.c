#include<stdio.h>
int main()
{
	void *p;  
	int  **ptr;  
	int a = 129;
	p = &a;  
	ptr = &p;
	printf(" p = %c   p = %u  &p = %u\n", *p, p, &p);
}
