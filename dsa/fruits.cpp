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
	int i=0,j=0,ans=0;
	unordered_map<int,int> umap;
	while(j<arr.size()){
		umap[arr[j]]++;
		while(umap.size()>2){
			umap[arr[i]]--;
			if(umap[arr[i]]<=0){
				umap.erase(arr[i]);
			}
			i++;
		}
		if(j-i+1>ans){
			ans=j-i+1;
		}
		j++;
	}
	cout<<ans<<endl;
}
				

