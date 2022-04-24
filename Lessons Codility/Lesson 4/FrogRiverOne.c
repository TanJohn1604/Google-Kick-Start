// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)

    int* p_B=(int*) calloc(X+1,4);
    int count=0;
    for(int i=0;i<N;i++){
        if( *(p_B+A[i])==0 ){
            *(p_B+A[i])=1;
            count++;
        }
        if(count == X){
            return i;
        }
    }
    return -1;
}
