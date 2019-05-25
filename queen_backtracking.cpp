#include <iostream>  
#include <stdlib.h>
using namespace std;   
int N; 
int col[15]; 
int count;  

bool promising(int i)
{
	int k;

	k = 1;
	while (k < i) {
		if (col[i] == col[k] ||
			abs(col[i] - col[k]) == i - k)
			return false;
		k++;
	}
	return true;
}



void queens(int col[], int i, int n)
{ 
	
	int j;

	if (promising(i))
		if (i == n) 
		{count = count+1; 
	}
			
		else
			for (j = 1; j <= n; j++) {
				col[i + 1] = j;
				queens(col, i + 1, n);
			}
	return;
} 

int main()
{
    cin>>N;

    queens(col,0,N);
	cout<<count;
	return 0; }