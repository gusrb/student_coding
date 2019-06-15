#include <stdio.h> 
using namespace std; 
int main() { 
int N,A[100],sum,temp; 
float avg;
scanf("%d",&N);
sum=0;
for(int i=0; i<N; i++) 
{ 
   scanf("%d",&A[i]);
    sum+=A[i];
} 
	avg=float(sum/N);
	if(N%2 == 0) 
	{ 
	 printf("%0.2f\n",avg); 
	 printf("%d",A[(N/2)+1]);
	} 
	if(N%2 == 1) 
	{ 
	 printf("%0.2f\n",avg); 
	 printf("%d",A[N/2]);
	}
}