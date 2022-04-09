#include<stdlib.h>
#include <stdio.h>
#include <conio.h>

int khoangcach(char a[],char b[]);
int main()
{
  int nosample;
  int *p_result;

  scanf("%d",&nosample);
  p_result=(int*)malloc(nosample*4);
  for (int i = 0; i < nosample; i++)
  {
    /* code */
    char s[100001];
    char f[27];
    scanf("%s%s",s,f);
    *(p_result+i)=khoangcach(s,f);

  }

  for (int i = 0; i < nosample; i++)
  {
    printf("Case #%d: %d\n",i+1,*(p_result+i));

  }


return 0;
}

int khoangcach(char a[],char b[]){
  char *tempa=a;
  char *tempb=b;
  int khoangcachtong=0;

  int ketqua=100;
  int khoangcach=0;

  do
  {
    do
    {
      khoangcach=*tempa-*tempb;

      if(khoangcach<0){
        khoangcach=-khoangcach;
      }
      if(khoangcach>12){
        khoangcach=25-khoangcach+1;
      }


      if(khoangcach < ketqua){
        ketqua=khoangcach;
      }
    } while (*(++tempb));
    tempb=b;
    khoangcachtong=khoangcachtong+ketqua;
    ketqua=100;
  } while (*(++tempa));
  
  return khoangcachtong;
}