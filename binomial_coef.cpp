﻿#include <iostream> 
using namespace std;

#define MAXN 100

long binomial_coef(int n, int m) {
	int i, j;
	long bc[MAXN][MAXN];
for (i = 0; i <= n; i++) bc[i][0] = 1;
for (j = 0; j <= n; j++) bc[j][j] = 1;
for (i = 1; i <= n; i++)
for (j = 1; j < i; j++)
	bc[i][j] = bc[i - 1][j - 1] + bc[i - 1][j];
return (bc[n][m]);
}

int main()
{
	int n,k;
	cin >> n>>k;
	cout <<binomial_coef(n,k);

}

