#include <stdio.h>
#include <stdlib.h>

int order[5] = {104, 101, 108, 108, 111};

void solve(char* str)
{
	char* result = (char*) malloc(100 + 1);
	char* tmp = result;
	int i = 0;

	while (*str)
	{
		if (*str == order[i])
		{
			*result = *str;
			result++;
			i++;
		}

		str++;
	}

	for (int i = 0; i < 5; ++i)
	{
		if (tmp[i] != order[i])
		{
			printf("%s\n", "NO");
			return;
		}
	}

	printf("%s\n", "YES");
}

int main(int argc, char const *argv[])
{
	char s[100];
	scanf("%s", s);
	solve(s);
	return 0;
}