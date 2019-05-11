#include <iostream> 
using namespace std;

void make_t(int idx, int n) {

	if (idx == n)
		return;

	for (int i = 0; i < idx; i++)
		cout << "*"; 
	cout << endl;

	make_t(idx + 1, n);

	for (int i = 0; i < idx; i++)
		cout << "*"; 
	cout << endl;
} 

int main()
{
	int n; 
	scanf_s("%d", &n);
	make_t(1,n);
}