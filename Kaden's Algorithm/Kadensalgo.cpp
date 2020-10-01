#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
#define l long int
#define ll long long int
#define imax INT_MAX
#define imin INT_MIN
#define lmax LLONG_MAX
#define pb push_back
#define ld long double
#define pii pair<l,l> 
#define pll pair<ll,ll>
#define v vector
#define loop(a,b)      for(int i=a;i<=b;i++)
#define vl vector<l>
#define vll vector<ll>
#define vvl vector<vector<l>>
#define vvll vector<vector<ll>>
#define vv(a) vector<vector<a>> 
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sum_vec(a) accumulate(all(a),0)
#define trans_lower(s) transform(all(s),s.begin(),::tolower)
#define trans_upper(s) transform(all(s),s.begin(),::toupper)
#define f first
#define se second
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;


int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int maxsum=v[0],tempsum=v[0];
    int left=0,right=0;
    for(int i=1;i<n;i++)
    {
        tempsum=max(v[i],tempsum+v[i]);
        
        if(maxsum<tempsum)
        {  
            if(v[i]>tempsum+v[i])
            {
                left=i;
            }
            else{
                right=i;
            }
            maxsum=tempsum;
        }
    }
    cout<<maxsum<<" "<<left<<" "<<right<<endl;
   }
   
}
