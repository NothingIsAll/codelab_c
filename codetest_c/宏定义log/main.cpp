#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#define PRINTF_ERROR(format, ...) \
        printf("[%s %s] [ERROR] %s:%d %s() "format" errno:%d err:%s\n", \
        __DATE__, __TIME__, __FILE__, __LINE__,	__FUNCTION__, \
        ##__VA_ARGS__, errno, strerror(errno))

int main(){
    char* str1 = "=hello=";
    char* str2 = "=world=";
    PRINTF_ERROR("test::print %s %s", str1, str2);
return 0;
}