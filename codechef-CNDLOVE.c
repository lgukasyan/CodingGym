#include <stdio.h>

void solve()
{
	int t, n, x, sum = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n);

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &x);
			sum += x;
		}

		if (sum % 2 == 1)
		{
			printf("YES\n");
		} else {
			printf("NO\n");
		}

		sum = 0;
	}
}

int main(int argc, char const *argv[])
{
	solve();
	return 0;
}
