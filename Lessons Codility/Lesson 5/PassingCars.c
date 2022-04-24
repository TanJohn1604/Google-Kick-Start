// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)

    int result=0;
    int count=0;
    for(int i=N-1;i>=0;i--){
        if(A[i]==1){
            count++;
        }
        if(A[i]==0){
            result+=count;
            if(result>1000000000 ){
                return -1;
            }
        }
    }
    return result;
}
