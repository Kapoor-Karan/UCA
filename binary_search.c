#include <stdio.h>
int binary_search(int arr[],int ele,int n){
	int l=0,h=n-1;
	while(l<=h){
		int mid=(l+h)/2;
		if(arr[mid]==ele){
			return 1;
		}else if(arr[mid]>ele){
			h=mid-1;
		}else{
			l=mid+1;
		}
	}
	return 0;
}
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void bubble_sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}


}	
int main(){
	int n,ele;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		arr[i]=x;
	}
	scanf("%d",&ele);
	bubble_sort(arr,n);
	if(binary_search(arr,ele,n)==1){
		printf("Present");
	}else{
		printf("Not Present");
	}
	return 0;
}
