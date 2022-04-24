// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *p_B=(int*)calloc(N+1,4);
    int count=0;
    for(int i=0;i<N;i++){
        if(A[i]>N){
                return 0;
            }
            
        if(*(p_B+A[i])==0 ){
            *(p_B+A[i])=1;
            count++;
            
        }
        if(count==N){
            return 1;
        }
    }
    return 0;
}
