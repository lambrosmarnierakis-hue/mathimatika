#include <stdio.h>
int main ()
{
	printf("Typos\tByte\n");
	printf("char\t%zu\n",sizeof(char));
	printf("int\t%zu\n",sizeof(int));
	printf("float\t%zu\n",sizeof(float));
	printf("double\t%zu\n",sizeof(double));
	return 0;
}
