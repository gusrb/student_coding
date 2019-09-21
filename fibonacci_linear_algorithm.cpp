#include <iostream> 
using namespace std;    
#define Max 100000000
int fibScore[Max] = { 0 }; 

int fib(unsigned int n) {
	int i;
	fibScore[0] = 0;
	fibScore[1] = 1;
	for (i = 2; i <= n; i++) {
		fibScore[i] = fibScore[i - 1] +
			fibScore[i - 2];
	}
	return fibScore[n];
}


int main()
{
	int a;
	cin >> a; 
	cout << fib(a);
		
} 

