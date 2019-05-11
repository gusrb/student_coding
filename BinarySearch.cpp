#include <iostream>  
#include <algorithm>
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
int max(int A[],int N) 
{
	int max;
	max = A[0];
	for (int i = 1; i < N; i++)
		if (A[i] > max)
			max = A[i]; 
	return max;
} 

int min(int A[], int N)
{
	int min;
	min = A[0];
	for (int i = 1; i < N; i++)
		if (A[i] < min)
			min = A[i];
	return min;
}

int main()
{
	int N, A[50],X,m,n; 

	cin >> N; 
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}  
	sort(A[0], A[50]);   



	while (X == -1) { 
		cin >> X;  
		m =  max(A[50], N); 
		n = min(A[50], N);
		BinarySearch(A[50], X, m, n);
	} 
	

}
