#include "ft_printf.h"
#include <stdio.h>
int main()
{
	printf("\nprintf(\"[%%c]\", \'a\');\n");
	printf("[%c]\n", 'a');
	ft_printf("[%c]\n", 'a');
	printf("\n==============================\n\n");
	// u 구현
	unsigned int a = 4294967295;
	printf("\nprintf(\"[%%u]\", 4294967295);\n");
	printf("[%u]\n", a);
	ft_printf("[%u]\n", a);
	printf("\n==============================\n\n");
	// // x 구현
	printf("\nprintf(\"[%%x]\", 123);\n");
	printf("[%x]\n", 123);
	ft_printf("[%x]\n", 123);
	printf("\n==============================\n\n");
	// // X 구현
	printf("\nprintf(\"[%%X]\", 123);\n");
	printf("[%X]\n", 123);
	ft_printf("[%X]\n", 123);
	printf("\n==============================\n\n");

	// p 구현
	char *a1 = "Asd";
	printf("\nprintf(\"[%%p]\", \"Asd\");\n");
	printf("[%p]\n", a1);
	ft_printf("[%p]\n", a1);
	printf("\n==============================\n\n");
	// s 구현 && 왼쪽 정렬 && 너비
	char *a2 = NULL;
	printf("\nprintf(\"[%%s]\", NULL);\n");
	int n1 = printf("[%s]\n", a2);
	printf("n1: %d \n", n1);
	int n2 = ft_printf("[%s]\n", a2);
	printf("n2: %d \n", n2);
	printf("\n==============================\n\n");
	// s 구현  0으로 채우기
	int a3 = 1;
	printf("\nprintf(\"[%%d]\", 1)\n");
	int n3 = printf("[%d]\n", a3);
	printf("n3: %d \n", n3);
	int n4 = ft_printf("[%d]\n", a3);
	printf("n4: %d \n", n4);


	printf("\n==============================\n\n");
	int a5 = 1111111;
	printf("\nprintf(\"[%%d]\", 1111111);\n");
	int n7 = printf("[%d]\n", a5);
	printf("n7: %d \n", n7);
	int n8 = ft_printf("[%d]\n", a5);
	printf("n8: %d \n", n8);

	printf("\n==============================\n\n");
	// // s 구현  정밀도 구현
	int a6 = 1;
	printf("\nprintf(\"[%%d]\", 1)\n");
	int n9 = printf("[%d]\n", a6);
	printf("n9: %d \n", n9);
	int n10 = ft_printf("[%d]\n", a6);
	printf("n10: %d \n", n10);
	printf("\n==============================\n\n");
	// zero 플래그 구현
	int a7 = 1;
	printf("\nprintf(\"[%%d]\", 1);\n");
	int n11 = printf("[%d]\n", a7);
	printf("n11: %d \n", n11);
	int n12 = ft_printf("[%d]\n", a7);
	printf("n12: %d \n", n12);
	printf("\n==============================\n\n");
	// c 구현
	char a8 = 'A';
	printf("\nprintf(\"[%%c]\", 'A');\n");
	printf("[%c]\n", a8);
	ft_printf("[%c]\n", a8);
	printf("\n==============================\n\n");
	// 너비 구현
	printf("\nprintf(\"[%%d]\", 123);\n");
	printf("[%d]\n", 123);
	ft_printf("[%d]\n", 123);
	printf("\n==============================\n\n");
	printf("\nprintf(\"[%%d]\", 123456789);\n");
	printf("[%d]\n", 123456789);
	ft_printf("[%d]\n", 123456789);
	printf("\n==============================\n\n");
	char *a9 = "abc";
	printf("printf(\"[%%p]\", a9);\n");
	printf("[%p]\n", a9);
	ft_printf("[%p]\n", a9);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]n\", 2147483647);\n");
	printf("[%d]\n", 2147483647);
	ft_printf("[%d]\n", 2147483647);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]n\", -2147483647);\n");
	printf("[%d]\n", -2147483647);
	ft_printf("[%d]\n", -2147483647);
	printf("\n==============================\n\n");
	unsigned int a10 = 2147483648;
	printf("printf(\"[%%u]\", a10);\n");
	printf("[%u]\n", a10);
	ft_printf("[%u]\n", a10);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]\", 0);\n");
	printf("[%d]\n", 0);
	ft_printf("[%d]\n", 0);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]\", 10);\n");
	printf("[%d]\n", 10);
	ft_printf("[%d]\n", 10);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]\", -10);\n");
	printf("[%d]\n", -10);
	ft_printf("[%d]\n", -10);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]\", 10);\n");
	printf("[%d]\n", 10);
	ft_printf("[%d]\n", 10);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]\", 0);\n");
	printf("[%d]\n", 0);
	ft_printf("[%d]\n", 0);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d]\", 10);\n");
	printf("[%d]\n", 10);
	ft_printf("[%d]\n", 10);
	printf("\n==============================\n\n");
	printf("printf(\"[%%s]\", \"ab\");\n");
	printf("[%s]\n", "ab");
	ft_printf("[%s]\n", "ab");
	printf("\n==============================\n\n");
	printf("printf(\"[%%x]\", 32);\n");
	printf("[%x]\n", 32);
	ft_printf("[%x]\n", 32);
	printf("\n==============================\n\n");
	printf("printf(\"[%%d %%d]\", 32, 42);\n");
	printf("[%d %d]\n", 32, 42);
	ft_printf("[%d %d]\n", 32, 42);
	printf("\n==============================\n\n");
	printf("printf(\"[%%s]\", \"a\");\n");
	printf("[%s]\n", "a");
	ft_printf("[%s]\n", "a");
	printf("\n==============================\n\n");
	printf("printf(\"[%%s]\", \"abcdef\");\n");
	printf("[%s]\n", "abcdef");
	ft_printf("[%s]\n", "abcdef");
	printf("\n==============================\n\n");
	printf("printf(\"[%%s]\", \"abcdef\");\n");
	printf("[%s]\n", "abcdef");
	ft_printf("[%s]\n", "abcdef");
	printf("\n==============================\n\n");
	printf("printf(\"[%%s]\", \"a\");\n");
	printf("[%s]\n", "a");
	ft_printf("[%s]\n", "a");
	printf("\n==============================\n\n");
	void *p = NULL;
	printf("printf(\"[%%p]\", p);\n");
	printf("[%p]\n", p);
	ft_printf("[%p]\n", p);
	printf("\n==============================\n\n");

	//while(1);
	return 0;
}
