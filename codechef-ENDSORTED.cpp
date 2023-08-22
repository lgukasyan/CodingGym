#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n, inp, moves = 0, posf, posl = -1;
	vector<int> v;

	cin >> n;

	posf = n - 1;

	for (int i = 0; i < n; ++i)
	{
		cin >> inp;
		if (inp == 1 && i < posf) { posf = i; }
		if (inp == n && i > posl) { posl = i; }
		v.push_back(inp);
	}

	while (v[0] != 1)
	{
		int swap = v[posf];

		if (v[posl] == v[posf - 1])
		{
			posl = posf;
		}

		v[posf] = v[posf - 1];
		v[--posf] = swap;
		moves++;
	}

	while (v[n - 1] != n )
	{
		int swap = v[posl];
		v[posl] = v[posl + 1];
		v[++posl] = swap;
		moves++;
	}

	cout << moves << '\n';
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
		solve();

	return 0;
}