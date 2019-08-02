#include <iostream>
#include <string> 
#include <stdlib.h>
using namespace std;
int factorial(int n)
{
	if (n == 1)
		return 1;

	return n * factorial(n - 1);
}

int main()
{
	int n, length, back;
	long long int sum = 0; 

	cin >> n;
	sum = factorial(n); 
	string str = to_string(sum);
	length = str.length(); 
	for (int i = length-1; i > 0; i--)
	{
		if (str[i] != '0')
		{ 
			int a = str[i];
			//printf("%c", str[i]);
			cout << str[i];
		} 

	}




	return 0;
}