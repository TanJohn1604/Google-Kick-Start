#include <stdlib.h>
#include<stdio.h>
#include<string.h>

void xuly(char a[],int len);

int main(){
int nosample;
char **p_result;
scanf("%d",&nosample);
p_result=(char**)malloc(nosample*1);



for (int i = 0; i < nosample; i++)
  {
    /* code */
    int n;
    scanf("%d",&n);
    p_result[i]=(char*)malloc(n*1);
    scanf("%s",*(p_result+i));
    
    xuly(*(p_result+i),n);
  }



    for(int i=0; i<nosample;i++){
        printf("Case #%d: %s\n",i+1,*(p_result+i));
    }

    
    return 0;
}

void xuly(char a[],int len){
char *p;
int i=0;
while(i<len){
    while(p= strstr (a,"01")){//22011
        strncpy (p,"2",1);    //22211
        i++;
        strcpy ((p+1),(p+2));
        
    }
    while(p= strstr (a,"12")){
        strncpy (p,"3",1);
        i++;
        strcpy ((p+1),(p+2));

    }
    while(p= strstr (a,"23")){
        strncpy (p,"4",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"34")){
        strncpy (p,"5",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"45")){
        strncpy (p,"6",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"56")){
        strncpy (p,"7",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"67")){
        strncpy (p,"8",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"78")){
        strncpy (p,"9",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"89")){
        strncpy (p,"0",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    while(p= strstr (a,"90")){
        strncpy (p,"1",1);
        i++;
        strcpy ((p+1),(p+2));
    }
    i++;
}
}