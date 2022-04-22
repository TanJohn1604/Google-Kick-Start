// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int result=0;
    int flag=0;
    flag= (Y-X)%D ? 1:0;
    Y=(Y-X)/D;
    Y= Y+flag;
    return Y;
}
