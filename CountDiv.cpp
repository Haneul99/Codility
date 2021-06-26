#include <algorithm>


int solution(int A, int B, int K) {
    int modB = B/K;
    int modA = (A-1)/K;
    int ans = modB-modA;
    if(A==0) return modB + 1;
    return ans;
}