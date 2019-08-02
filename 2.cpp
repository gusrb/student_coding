#include <iostream>   
using namespace std;
int sum = 0, n , g ,d; 

int di(int k)
{ 
	if (k != 0) { 
		
		n = n / k; 
		d += n % k; 
		sum += n;
	} 
	if (d >= k)
	{
		sum += d / k; 
		d += n % k;
	}

	if (n < k)
		return sum;
	else
		di(k);

}

int main()
{
	int  k;
	cin >> g >> k;    
	n = g;
	cout << di(k)+g;

	return 0;
}