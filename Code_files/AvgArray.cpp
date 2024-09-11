#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    float avg;
    float total=0;
    for (auto x:arr){
        total=total+x;
        cout<<x<<endl;
    }
    avg=total/n;
    cout<<"Average is "<<avg<<endl;


    return 0;
}