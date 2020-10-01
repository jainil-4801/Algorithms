#include<iostream>
using namespace std;

int cutRodtbdp(int price[], int n,int tab[]) 
{   int max_val=-1;
 if(tab[n]==-1)
 {
     if(n<=0)
     max_val=0;
     else
     {
     for (int i = 0; i < n; i++) 
		max_val = max(max_val, price[i] + cutRodtbdp(price,n-i-1,tab)); 
     }

   tab[n]=max_val;
 }
return tab[n]; 
} 

int main() 
{ 
	int arr[] = {1, 2, 3, 4, 14, 11, 11,10 }; 
    int n=8;
    int tab[n+1]={-1,-1,-1,-1,-1,-1,-1,-1,-1}; 
	cout<<cutRodtbdp(arr,n,tab)<<endl;
	return 0; 
} 
