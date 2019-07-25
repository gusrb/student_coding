#include <iostream>     
#include <vector> 
#include <string.h> 
using namespace std;

int is_prime(int n) 
{
	int i = 0;
	int last = n / 2;  
	if (n <= 1)
	{
		return false;
	}
	
	for (i = 2; i <= last; i++) 
	{
		if ((n%i) == 0) 
		{
			return false;
		}
	}
	return true; 
}
vector<int> primefactors(int a) {
	vector<int> primefactors; 
	for(int i=1; i<=a; i++) 
		if (a % i == 0 && is_prime(i)) {
			primefactors.push_back(i); 
			a = a / i; 
			i = 1;
		} 
	return primefactors;
}
int main()
{
	int b;
	cin >> b; 

	if (is_prime(b)) {
		cout << b << endl;
	} 
	else {

		vector<int> p = primefactors(b);

		for (int i = 0; i < p.size(); ++i)
			cout << p[i] << " ";
	}
	return 0;
}