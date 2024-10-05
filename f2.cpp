#include<bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
    if (N <= 1) {
        return false;
    }

   
    if (N <= 3) {
        return true;
    }

    
    if (N % 2 == 0 || N % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= N; i += 6) {

        
        if (N % i == 0 || N % (i + 2) == 0) {
            return false;
        }
    }

    
    return true;
}
int count_frequency(int n,int arr[])
{
    int sum=0;
    map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        m1[arr[i]]++;
    }
    for(auto i:m1)
    {
        cout<<i.first<<" ->"<<i.second<<endl;
        if (isPrime(i.second)==false)
        {
            sum=i.first;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< count_frequency(n,arr);

}
