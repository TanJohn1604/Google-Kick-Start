// Code written in C
// Correctness: 100 %
// Performance: 100 %
// Time Complexity: O(1)
// Space Complexity: O(1)

int solution(int A, int B, int K) {
    int remi = A % K;

    if (remi) {
        A = A + (K - remi);
    
    }
   if (A > B) {
        return 0;
    }

    return ((B - A) / K) + 1;
    
}