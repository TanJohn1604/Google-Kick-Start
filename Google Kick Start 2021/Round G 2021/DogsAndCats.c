#include<stdlib.h>
#include <stdio.h>

int check(int n,long long c,int d,int m,char *s);

int main(){

int n;
long long c;
int d;
int m;
char t=0;
char *p_final;
char *p_s;
scanf("%d",&t);

p_final=(char*)calloc(t,1);

for(int i=0;i<t;i++){

    scanf("%d%d%lli%d",&n,&d,&c,&m);
    p_s=(char *)calloc(n,1);
    scanf("%s",p_s);
    *(p_final+i)=check(n,c,d,m,p_s);

}

for(int i=0;i<t;i++){
printf("Case #%d: %s\n",i+1,*(p_final+i)==1 ? "YES":"NO" );
    

}

return 0;
}

int check(int n,long long c,int d,int m,char *s){
    for(int i=0;i<n;i++){
        
        if (*(s+i)=='D'){
            if(d>0){
                d=d-1;
                c=c+m;
            }
            else{
                return 0;
            }
        }

        if (*(s+i)=='C'){
            if(c>0){
                c=c-1;
            }
            else{
                
                for(int j=i;j<n;j++){
                    if(*(s+j)=='D'){
                        return 0;
                    }
                }
            }
        }

    }
    return 1;
}