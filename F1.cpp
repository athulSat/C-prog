/*#include<bits/stdc++.h>
using namespace std;
int count_frequency(int n,int arr[])
{
    map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        m1[arr[i]]++;
    }
    for(auto i:m1)
    {
        cout<<i.first<<" ->"<<i.second<<endl;
    }
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
    count_frequency(n,arr);

}*/
#include <stdio.h>

int main() {
   int i=0;
   printf("%d %d %d %d",i,++i,++i,--i);

    return 0;
}
