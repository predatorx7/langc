#include <stdio.h>

extern int is_vowel(const char *ch);

int main()
{
	char ch;
	scanf("%c", &ch);

	if (is_vowel(&ch))
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
	printf("\n");

	return 0;
}

int is_vowel(const char *c)
{
	switch (*c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		return 1;
	default:
		return 0;
	}
}
