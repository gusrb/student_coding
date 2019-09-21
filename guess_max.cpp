#include <iostream> 
using namespace std;    
#define Max 100000000
int fibScore[Max] = { 0 }; 

int fib(unsigned int n) {
	if (n == 0 || n == 1 || n == 2)
		return 1; 
	if (n == 3)
		return 2;
	return fib(n - 1) + fib(n - 3)+fib(n-4);
}

int main()
{
	int a;
	cin >> a; 
	cout << fib(a);
		
} 

