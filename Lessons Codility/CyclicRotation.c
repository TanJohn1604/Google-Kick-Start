// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    
    int *B=(int *)malloc(N*4);
    int *C=(int *)malloc(N*4);
    for (int i=0; i<N;i++){
        B[i]=(i+K%N)%N;
    }
    for(int i=0;i<N;i++){
        C[B[i]]=A[i];
    }
    result.A = C;
    result.N = N;
    return result;

}
