#include <iostream>     
#include <vector> 
#include <string.h> 
using namespace std;

#define MAXN 1000
#define MAXP 300 
int gcd(int a, int b) {
	while (b > 0) {
		int m = a % b;
		a = b;
		b = m;
	}
	return a;
}
int main()
{
	int a, b; 
	cin >> a >> b; 
	cout<<gcd(a, b);


}
