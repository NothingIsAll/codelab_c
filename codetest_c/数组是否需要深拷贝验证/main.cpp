#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

struct testA
{
    char info[1024]={};
    /* data */
};

class testB{
public:
    testA A; 
    char info[1024]={};
};

int main(){
    char* str = "dajiaohao , woshi nimi";
    char* strb = "jintianshi 4yue 7hao xingqier";
    testA AA;
    testB BB;
    sprintf(AA.info,"%s",str);
    sprintf(BB.info,"%s",strb);
    BB.A = AA;
    testA CC = AA;
    testB DD = BB;
    printf("testACC=%s\n",CC.info);
    printf("testBDD=%s\n",DD.info);
    printf("testBDD.A=%s\n",DD.A.info); 
    
    /* data */
}
