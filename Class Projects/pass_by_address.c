#include <stdio.h>

void square(int *);

int main()
{
	int num = 0;
	
	printf("[*] Enter an integer to square > ");
	scanf("%d", &num);
	square(&num);
	printf("\n[+] %d\n", num);
	return 0;
}

void square(int *x)
{
	*x = *x * *x;
	return;
}
