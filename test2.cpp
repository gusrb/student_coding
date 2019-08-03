#include <iostream>
#include <string> 
#include <stdlib.h>
using namespace std; 

int main()
{
	int n, length,a[20]; 
	long long int sum=1;

	for (int i = 0; i < 10; i++)
	{ 
		cin >> a[i]; 
		if (a[i] == 0)
			break; 
		sum = sum * a[i];
	}  
	string str = to_string(sum);
	length = str.length();
	cout << str[length - 2]; 

}