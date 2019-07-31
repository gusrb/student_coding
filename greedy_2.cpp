#include<iostream>  
#include<algorithm>
using namespace std; 
bool desc(int a, int b) {
	return a > b;
}

int main()
{ 
	int N,a,b,c,d,e,f,g,h,i,j; 
	cin >> N; 


		a = N / 50000;
		b = (N%50000) / 10000;
		c = (N % 50000 %10000) / 5000;
		d = (N % 50000 % 10000 % 5000) / 1000;
		e = (N % 50000 % 10000 % 5000 % 1000) / 500; 
		f = (N % 50000 % 10000 % 5000 % 1000 % 500) / 100;
		g = (N % 50000 % 10000 % 5000 % 1000 % 500%100) / 50;
		h = (N % 50000 % 10000 % 5000 % 1000 % 500 % 100%50) / 10;
		i = (N % 50000 % 10000 % 5000 % 1000 % 500 % 100 % 50%10) / 5;
		j = (N % 50000 % 10000 % 5000 % 1000 % 500 % 100 % 50%10 % 5) / 1;    

		if (a != 0)
		{
			cout << 50000 << " : " << a << endl;
		}
		if (b != 0)
		{
			cout << 10000 << " : " << b << endl;
		}
		if (c != 0)
		{
			cout << 5000 << " : " << c << endl;
		}
		if (d != 0)
		{
			cout << 1000 << " : " << d << endl;
		}
		if (e != 0)
		{
			cout << 500 << " : " << e << endl;
		}
		if (f != 0)
		{
			cout << 100 << " : " << f << endl;
		}
		if (g != 0)
		{
			cout << 50 << " : " << g << endl;
		}
		if (h != 0)
		{
			cout << 10 << " : " << h << endl;
		}
		if (i != 0)
		{
			cout << 5 << " : " << i << endl;
		}
		if (j != 0)
		{
			cout << 1 << " : " << j << endl;
		}
	
	


	return 0;

} 