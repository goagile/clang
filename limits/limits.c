# include <stdio.h>
# include <limits.h>

main() {
	
	printf("CHAR:\n");
	printf("\tCHAR_BIT %d\n", CHAR_BIT);
	printf("\tUCHAR_MAX %d\n", UCHAR_MAX);
	printf("\tCHAR_MIN %d\n", CHAR_MIN);
	printf("\tCHAR_MAX %d\n", CHAR_MAX);
	
	printf("INT:\n");
	printf("\tSHRT_MIN %d\n", SHRT_MIN);
	printf("\tSHRT_MAX %d\n", SHRT_MAX);
	printf("\tINT_MIN %d\n", INT_MIN);
	printf("\tINT_MAX %d\n", INT_MAX);
	printf("\tUINT_MAX %d\n", UINT_MAX);
	printf("\tLONG_MIN %d\n", LONG_MIN);
	printf("\tLONG_MAX %d\n", LONG_MAX);

	printf("FLOAT:\n");

	return 0;
}
