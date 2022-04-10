#include<stdlib.h>
#include <stdio.h>

int RedCombi(char s);
int BlueCombi(char s);
int YellowCombi(char s);
int check(char a[],int len);

int main(){
int nosample;
int *p_result;
scanf("%d",&nosample);
p_result=(int*)malloc(nosample*4);
for (int i = 0; i < nosample; i++)
  {
    /* code */
    int n;
    char p[100001];
    scanf("%d%s",&n,p);
    *(p_result+i)=check(p,n);
  }
for (int i = 0; i < nosample; i++)
  {
    printf("Case #%d: %d\n",i+1,*(p_result+i));
  }

    // int n=5;
    // char a[]="ROAOR";
    // printf("%d",check(a,n));
return 0;

}

int RedCombi(char s){
    if (s=='R' ||s=='O'||s=='P'||s=='A' )
    {
        return 1;
    }
    return 0;
}
int BlueCombi(char s){
    if (s=='B' ||s=='G'||s=='P'||s=='A' )
    {
        return 1;
    }
    return 0;
}
int YellowCombi(char s){

    if (s=='Y' ||s=='O'||s=='G'||s=='A' )
    {
        return 1;
    }
    return 0;
}
int check(char a[],int len){
    char *tempa=a;
    int red=0;
    int yellow=0;
    int blue=0;
    //red
    for (int i=0;i<len;i++){
        //red
        // if(RedCombi(*(tempa+i)) && (RedCombi(*(tempa+i+1)))   ){
        //     if(red==0){
        //         red=1;
        //     }
        //     red=red;
        // }
        if(RedCombi(*(tempa+i)) && (RedCombi(*(tempa+i+1))==0) ){
            red++;
        }
        //blue
        // if(BlueCombi(*(tempa+i)) && (BlueCombi(*(tempa+i+1)))   ){
        //     if(blue==0){
        //         blue=1;
        //     }
        //     blue=blue;
        // }
        if(BlueCombi(*(tempa+i)) && (BlueCombi(*(tempa+i+1))==0) ){
            blue++;
        }
        //yellow
        // if(YellowCombi(*(tempa+i)) && (YellowCombi(*(tempa+i+1)))   ){
        //     if(yellow==0){
        //         yellow=1;
        //     }
        //     yellow=yellow;
        // }
        if(YellowCombi(*(tempa+i)) && (YellowCombi(*(tempa+i+1))==0) ){
            yellow++;
        }

    }
    // if(red==0){
    //     red=1;
    // }
    // if(blue==0){
    //     blue=1;
    // }
    // if(yellow==0){
    //     yellow=1;
    // }
    return red+yellow+blue;
}