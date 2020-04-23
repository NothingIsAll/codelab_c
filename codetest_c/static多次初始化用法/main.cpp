#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>


class A{
public:
static int a;
};



class B{
    public:
    static int b;
};

int A::a = 123; 
int B::b= 123;

void staticvariable(int a){
    static int sv = a;
    printf("sv = %d\n",sv);
}

int main(){
    staticvariable(123);
    staticvariable(456);
    staticvariable(789);
    A::a = 456;
    B::b = 456;
    printf("a-a=%d\n",A::a);
    printf("b-b=%d\n",B::b);
    /* data */
}
