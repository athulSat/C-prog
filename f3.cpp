#include<bits/stdc++.h>
using namespace std;
int count_frequency(int n,int arr[])
{
    int sume(0),sumo(0);
    map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        m1[arr[i]]++;
    }
    for(auto i:m1)
    {
        cout<<i.first<<" ->"<<i.second<<endl;
         if((i.second)%2!=0)
        {
            sume=(i.first)*(i.second);
        }
        else
        {
            sumo=(i.first)*(i.second);
        }
    }
    return (sume-sumo);
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
