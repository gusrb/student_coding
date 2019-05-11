#include <iostream> 
using namespace std; 
int BinarySearch(int A[], int value, int low, int high) {
	int mid; 
	if (high < low) return -1; 
	mid = (low + high) / 2; 
	if (A[mid] > value)
		return BinarySearch(A, value, low, mid - 1);
	else if (A[mid] < value)
		return BinarySearch(A, value, mid + 1, high);
	else
		return mid;
} 

int main()
{
	int N, A[50],X; 

	cin >> N; 
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}  

	while (X == -1) { 
		cin >> X; 
		BinarySearch(A[50],X, A[0],)
	}
}
