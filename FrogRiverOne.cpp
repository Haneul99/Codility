#include <algorithm>

int solution(int X, vector<int> &A) {
    int len = A.size();
    vector<int> visit(X);
    int cnt = 0;

    for(int i=0;i<len;i++){
        if(visit[A[i]-1]==0) cnt++;       
        visit[A[i]-1]=1;
        if(cnt==X) return i;
    }
    return -1;
}