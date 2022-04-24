// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    char *p_B=(char *) calloc(1000000+1,1);

    for (int i=0; i<N;i++) {
    if(A[i]>0){
        *(p_B+A[i])=1;
    }
    }

    for(int i=1;i<1000000+1;i++){
        if(*(p_B+i)==0){
            return i;
        }
    }
    return N+1;
}
