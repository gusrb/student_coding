#include <iostream>     
#include <vector> 
#include <string.h> 
using namespace std;

#define MAXN 1000
#define MAXP 300 

int main()
{
	int n;
	long i;
	long press = 0; 
	cin >> n;
	for (i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			press++;
	}
	if (press % 2 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

}

