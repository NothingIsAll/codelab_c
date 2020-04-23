#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

int mathround_up(int srcnum,int roundnum){
    int line = srcnum/roundnum;
    if(srcnum%roundnum > 0)
        line+=1;
    return line*roundnum;
}

int mathround_down(int srcnum,int roundnum){
    int line = srcnum/roundnum;
    return line*roundnum;
}

int main(){
    printf("round 1234 45 =%d\n",mathround(1234,45));
    return 0;
}