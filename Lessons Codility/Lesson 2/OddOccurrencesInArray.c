int solution(int A[], int N) {
    int ret = 0;
    
    for (int i = 0; i < N; ++i) {
        ret = ret ^ A[i];
    }
    
    return ret;
}
