// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int *p_B;
    p_B=(int*)calloc(N,sizeof(int));
    int offset=0;
    int max=0;
    for(int i=0;i<M;i++){
        if(A[i] <= N && 1<= A[i]){

            if(p_B[A[i]-1]<offset){
                p_B[A[i]-1]=offset;
            }

            p_B[A[i]-1]+=1;
            max= max>p_B[A[i]-1]? max:p_B[A[i]-1];
        }
        if(A[i] == (N+1)){
            offset=max;
        }
    }

    for(int i=0;i<N;i++){
        p_B[i]= p_B[i]>offset ? p_B[i]:offset;
    }
    result.C = p_B;
    result.L = N;
    return result;
}
