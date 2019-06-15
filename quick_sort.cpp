#include <iostream> 
using namespace std;   
int S[100];
void partition(int low, int high, int& pivotpoint)
{
	int i, j,temp; 
	int pivotitem;  
	temp = 0;
	pivotitem = S[low]; 
	j = low; 
	for (i = low + 1; i <= high; i++) {
		if (S[i] < pivotitem) {
			j++;
			temp = S[i]; 
			S[i] = S[j]; 
			S[j] = temp;
		}
	}
	pivotpoint = j; 
	temp = S[low];
	S[low] = S[pivotpoint]; 
	S[pivotpoint] = temp;
} 

void quicksort(int low, int high)
{
	int pivotpoint; 
	if (high > low) {
		partition(low, high, pivotpoint); 
		quicksort(low, pivotpoint - 1); 
		quicksort(pivotpoint + 1, high);
	}
} 
int main()
{
	int N; 
	cin >> N; 
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	} 
	quicksort(0, N-1);
	for (int i = 0; i < N; i++) {
		cout << S[i] << " ";
	}
}

