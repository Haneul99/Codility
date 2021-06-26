#include <algorithm>
#include <stdio.h>

int getMax(int x, int y){
    return x>y?x:y;
}

vector<int> solution(int N, vector<int> &A) {
    int len = A.size();
    vector<int> ans(N);

    int maxcounter = 0;
    int nowmax = 0;
    int maxcounterFlag=0;

    for(int i=0;i<len;i++){
        if(A[i]>N) {
            maxcounterFlag=1;
            maxcounter = nowmax;
        }
        else {
            if(maxcounterFlag){
                ans[A[i]-1] = getMax(maxcounter+1, ans[A[i]-1]+1);
            }
            else ans[A[i]-1]++;
            nowmax = getMax(nowmax, ans[A[i]-1]);
        }
    }

    for(int i=0;i<N;i++){
        if(maxcounterFlag){
            ans[i] = getMax(maxcounter, ans[i]);
        }
    }
    // maxcounter 값을 기억해놓은 후, 나중에 update
    return ans;
}