#include<iostream>
using namespace std;

int cutRodbudp(int price[], int n) 
{ 
int tab[n+1]; 
tab[0] = 0; 

for (int i = 1; i<=n; i++) 
{ 
	int max_val = -1; 
	for (int j = 0; j < i; j++) 
		max_val = max(max_val, price[j] + tab[i-j-1]); 
tab[i] = max_val; 
} 

return tab[n]; 
} 

int main() 
{ 
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
	cout<<cutRodbudp(arr,8)<<endl;
	return 0; 
} 
