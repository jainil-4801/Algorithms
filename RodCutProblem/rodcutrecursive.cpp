#include<iostream>
using namespace std;

int cutRodRecursive(int price[], int n) 
{ 
if (n <= 0) 
	return 0; 
int max_val = -1; 

for (int i = 0; i<n; i++) 
		max_val = max(max_val, price[i] + cutRodRecursive(price, n-i-1)); 

return max_val; 
} 

int main() 
{ 
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
	cout<<cutRodRecursive(arr,8)<<endl; 
	return 0; 
} 
