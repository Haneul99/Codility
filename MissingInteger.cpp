#include <algorithm>
#include <stdio.h>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());

    int len = A.size();

    int bf = 0; //어차피 0보다 커야하니까
    for(int i=0; i<len; i++){
        if(A[i]<0) continue;
        if(A[i]>0){
            if(A[i]==bf) continue;
            if(A[i]-bf!=1){
                return bf+1;
            }
            else{
                bf = A[i];
            }
        }
    }
    return bf+1;
}