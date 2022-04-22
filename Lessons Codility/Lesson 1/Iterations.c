// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    int demo=N;

    int count=0;
    int sum=0;
    int final_sum=0;
    while( demo ){
        
        if(demo & 0x1){

           
                final_sum= final_sum>sum ? final_sum:sum;
            
            sum=0;
            count=1;

        }else{
            if(count){
                sum++;
            }

        }
      
        demo>>=1;
    }
    
    return final_sum;
}
