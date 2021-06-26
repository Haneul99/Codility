#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());

    int len = A.size();

    for(int i=0; i<len; i++){
        if(i+1!=A[i]) return i+1;
    }
    return len+1;//마지막 원소가 없는 edge case
}

