#include <algorithm>


int solution(vector<int> &A) {
    int len = A.size();
    int west = 0, east = 0;
    for(int i=0; i<len; i++){
        if(A[i]==0) east++;
        if(A[i]==1) west++;
    }

    int pair=0;
    for(int i=0; i<len; i++){
        if(A[i]==0){
            pair+=west;
        }
        if(A[i]==1){
            west--;
        }
        if(pair>1000000000) return -1;
    }
    if(pair>1000000000) pair = -1;
    return pair;
}