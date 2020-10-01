#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int strstr(string s1,string s2)
{
//table construction
int arr[s2.length()]={0};
int i=0,j=1;
while(j<s2.length())
{
    if(s2[i]==s2[j])
    {
        arr[j]=i+1;
        i++;
        j++;

    }
    else{

        if(i==0)
        {
            arr[j]=i;
            j++;
        }
        else
        {
             while(i!=0)
        {
          i=arr[i-1];
          if(s2[i]==s2[j])
          {
              arr[j]=i+1;
              i++;
              j++;
          }
        }

        }
        
       
    }

}


 i=0;
 j=0;
int index=-1;
while(i<s1.length())
{
if(s1[i]==s2[j])
{
    i++;
    j++;
}
else{
    if(j!=0)
    {
    j=arr[j-1];
    }
    else
    {
        i++;
    }
    
   }
if(j==s2.length())
{
   index=i-j;
   break;
}

}
return index;

}
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<strstr(a,b);
}
