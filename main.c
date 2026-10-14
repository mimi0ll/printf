

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	a;
	int	b;

	printf("\n--- TEST 1: CHAR ---\n");
	a = printf("[%c]\n", 'A');
	b = ft_printf("[%c]\n", 'A');
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 2: STRING ---\n");
	a = printf("[%s]\n", "Marah");
	b = ft_printf("[%s]\n", "Marah");
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 3: EMPTY STRING ---\n");
	a = printf("[%s]\n", "");
	b = ft_printf("[%s]\n", "");
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 4: NULL STRING ---\n");
	a = printf("%s", "");
	b = ft_printf("%s", "");
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 5: POINTER ---\n");
	a = printf("[%p]\n", (void *)42);
	b = ft_printf("[%p]\n", (void *)42);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 6: NULL POINTER ---\n");
	a = printf("[%p]\n", (void *)0);
	b = ft_printf("[%p]\n", (void *)0);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 7: SIGNED INT ---\n");
	a = printf("[%d]\n", -42);
	b = ft_printf("[%d]\n", -42);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 8: ZERO ---\n");
	a = printf("[%d]\n", 0);
	b = ft_printf("[%d]\n", 0);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 9: INT LIMITS ---\n");
	a = printf("[%d %d]\n", INT_MIN, INT_MAX);
	b = ft_printf("[%d %d]\n", INT_MIN, INT_MAX);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 10: %%i ---\n");
	a = printf("[%i]\n", -123);
	b = ft_printf("[%i]\n", -123);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 11: UNSIGNED ---\n");
	a = printf("[%u]\n", 42u);
	b = ft_printf("[%u]\n", 42u);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 12: UINT_MAX ---\n");
	a = printf("[%u]\n", UINT_MAX);
	b = ft_printf("[%u]\n", UINT_MAX);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 13: HEX LOWERCASE ---\n");
	a = printf("[%x]\n", 255);
	b = ft_printf("[%x]\n", 255);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 14: HEX UPPERCASE ---\n");
	a = printf("[%X]\n", 255);
	b = ft_printf("[%X]\n", 255);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 15: HEX ZERO ---\n");
	a = printf("[%x %X]\n", 0, 0);
	b = ft_printf("[%x %X]\n", 0, 0);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 16: PERCENT ---\n");
	a = printf("[%%]\n");
	b = ft_printf("[%%]\n");
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 17: MIXED ---\n");
	a = printf("%c %s %d %i %u %x %X %%\n",
			'A', "42", -42, 0, 42u, 255, 255);
	b = ft_printf("%c %s %d %i %u %x %X %%\n",
			'A', "42", -42, 0, 42u, 255, 255);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 18: MANY DIGITS ---\n");
	a = printf("[%d]\n", 123456789);
	b = ft_printf("[%d]\n", 123456789);
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 19: EMPTY FORMAT ---\n");
	a = printf("");
	b = ft_printf("");
	printf("Expected: %d | Actual: %d\n", a, b);

	printf("\n--- TEST 20: NO CONVERSION ---\n");
	a = printf("Hello Marah!\n");
	b = ft_printf("Hello Marah!\n");
	printf("Expected: %d | Actual: %d\n", a, b);

	return (0);
}
