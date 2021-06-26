#include <algorithm>
#include <math.h>

int getMin(int x, int y){
    return x<y?x:y;
}

int solution(vector<int> &A) {
    int len = A.size();
    int sum_front = 0, sum_back=0;
    int min = 999999;
    for(int i = 0; i < len-1; i++){
        sum_front+=A[i];
    }
    
    sum_back = A[len-1];
    min = getMin(min, abs(sum_front-sum_back));
    //반드시 하나는 포함되어야 함.

    for(int i = len-2; i>0; i--){
        sum_front-=A[i];
        sum_back+=A[i];
        min = getMin(min, abs(sum_front-sum_back));
    }
    return min;
}