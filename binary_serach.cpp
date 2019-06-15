#include <iostream> 
using namespace std; 
int main() { 
	int N, A[100], num,a,b; 
	a = 0;
	cin >> N; 
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	} 
	cin >> num; 
	for (int i = 0; i < N; i++) {
		if (num == A[i])
		{
			a++;
			b = i;
		}
	} 
	if (a == 1)
		cout << b + 1;
	else
		cout << "not found";
}