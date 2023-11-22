#include<iostream>
using namespace std;

int main()
{
     int n;
    cout<<"Enter pair_size : ";
    cin>>n;
    pair<int,int>p[n];
        
    for(int i=0;i<n;i++)
    {
        cout<<"Enter first value : ";
        cin>>p[i].first;
        
        cout<<"Enter second value : ";
        cin>>p[i].second;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<"First value : "<<p[i].first<<" , Second value : "<<p[i].second<<endl;
    }
    return 0;
}
