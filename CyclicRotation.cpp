#include <algorithm>

 
vector<int> solution(vector<int> &A, int K) {
    vector<int> v;

    int len = A.size();
    if(len == 0) return v;//edge case
    if(len < K){
        K = K % len;
    }//K > len 인 경우
    for(int i = len - K; i < len; i++){
        v.push_back(A[i]);
    }
    for(int i = 0; i < len - K; i++){
        v.push_back(A[i]);
    }
    return v;
}