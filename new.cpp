#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/n;
}

