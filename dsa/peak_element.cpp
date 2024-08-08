#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int l=0,h=n-1,ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans=mid;
            break;
        }else if(arr[mid]<arr[mid+1]){
            l=mid+1;
        }else if(arr[mid]<arr[mid-1]){
            h=mid-1;
        }
    }
    cout<<ans<<endl;
}