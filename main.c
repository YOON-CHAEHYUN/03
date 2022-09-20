#include <stdio.h>

int main(void)
{
	char abc;
	
	printf("input a alphabet: ");
	scanf("%c", &abc);
	
	printf("The next character of %c (%d) is %c (%d)\n", abc, abc, abc+1, abc+1);
	return 0;
}
