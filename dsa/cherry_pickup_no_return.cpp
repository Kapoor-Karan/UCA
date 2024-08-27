#include <bits/stdc++.h>
using namespace std;

int solve(int arr[10][10],int visit[10][10],int sum,int i, int j){
    int sum1 = 0, sum2 = 0;
    if(!visit){
        if(visit[i+1][j]==1){
            sum1 = 1 + (arr,visit,sum,i+1,j);
        }else{
            sum1 = (arr,visit,sum,i+1,j);
        }
        if(visit[i][j+1]==1){
            sum2 = 1 + (arr,visit,sum,i,j+1);
        }else{
            sum2 = (arr,visit,sum,i,j+1);
        }
    }
    if(sum1 == 0 && sum2 == 0){
        return -1;
    }
    return max(sum1, sum2);
}

int main(){
    int mat[10][10];
    int visit[10][10];
    solve(mat,visit,0,0,0);
}