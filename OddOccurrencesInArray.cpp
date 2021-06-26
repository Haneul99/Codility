#include <algorithm>

int solution(vector<int> &A) {
    int len = A.size();
    sort(A.begin(), A.end());

    for(int i = 0; i<len; i+=2){
        if(A[i]==A[i+1]) continue;
        else return A[i];
    }
}