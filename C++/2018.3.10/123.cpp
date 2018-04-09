#include <stdio.h>

int main()

{
	int a;
	a=6;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(a)=%ld\n",sizeof(a+1));
	printf("%d",a);
	return 0;
}
