#include<iostream>  
#include<algorithm>
using namespace std; 
bool desc(int a, int b) {
	return a > b;
}

int main()
{ 
	int N, array[100], sub[10] = { 0 };
	cin >> N; 
	for (int i = 0; i < 9; i++)
	{
		cin >> array[i]; 
	} 

	for (int i = 0; i < 9; i++)
	{
		if (array[i] == 1)
		{
			for (int j = 0; j < 9; j++)
			{
				if (array[i + j] == 1)
				{
					sub[0] = j - i;
					
				} 
				for (int k = 0; k < 9; k++)
				{
					if (array[j + k] == 1)
					{
						sub[1] = k - j;  
					}
					break;
				} 
				break;
			}  
			break; 
			
		} 
		break;
	} 
	sort(sub, sub+10,desc); 
	if (array[0] == 0)
	{
		if (N - 1 == 0)
			cout << "7" << endl;
		if (N - 1 == 1)
			cout << 7 - 3;
		if (N - 1 == 2)
			cout << 7 - 3 - 1;
	}
	if (array[0] == 1)
	{
		if (N - 1 == 1)
			cout << 7;  

		if (N - 2 == 1)
			cout << 5;

	}
	return 0;

} 