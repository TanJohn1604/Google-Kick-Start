// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)

    int sum1=0;
    int sum2=0;
    int min;

    for(int i=0;i<N;i++){
        sum2+=A[i];
    }

    sum1+=A[0];
    sum2-=A[0];
    min= abs(sum2-sum1);

    for(int i=2;i<N;i++){
        sum1+=A[i-1];
        sum2-=A[i-1];
       min= min> abs(sum2-sum1)?abs(sum2-sum1):min ;
    }

    return min;


}
