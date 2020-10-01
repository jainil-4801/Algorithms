#include<iostream>
#include<string>

using namespace std;
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
}
int cutroditr(int price[],int n)
{
int i=0,k=0,max=0; 
int num_dist_comb=power(2,n-1);
num_dist_comb/=2;
string binary[num_dist_comb+1];
int bin_str_len=n-1;
        
        while(i<2*num_dist_comb)//storing total binary strings in a string called binary
        {   
            int a=i,count=0;
            string s="";
             while(a>0)   //storing binary representation of decimal in a string called s
            {
             string st= to_string(a%2);
                s=st+s;
                a=a/2;
                count++;
            }
            for(int j=count;j<bin_str_len;j++)//zero padding
                s="0"+s;

            binary[k]=s;
             i++;  
             k++;
           if (i==num_dist_comb)//last case (1111..)
               i=2*num_dist_comb-1;
        }
      
        for(i=0;i<=num_dist_comb;i++)
        {
            int revenue=0,previouscut=0,count=0;
            string s=binary[i];
            k=1;
            for(int j=s.length()-1;j>=0;j--)
            {
                if (s.at(j)=='1')
                {
                    revenue=revenue+price[k-previouscut];
                    previouscut=k;
                }
                k++;
            }
            revenue=revenue+price[k-previouscut];
            if (revenue>max)
               max=revenue;
        }
        return max;
}

int main()
{
 int p[]={0,1,5,8,9,10,17,17,20};  // price array
cout<<"Enter the length of rod"<<endl;
      int n;
      cin>>n;
      int ans=cutroditr(p,n);
      cout<<ans<<endl;

}
