// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    long long sum=0;
    long long sum2=0;
    int rerult=0;
    for(int i=0;i<N;i++){
        sum+=A[i];
    }
    sum2=((long long)(N+1)*(N+2))/2;
    rerult=(int)sum2-sum;
    return rerult;
}
