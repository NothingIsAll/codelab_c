
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

#define DLOG(fmt,arg...) printf(fmt,##arg) 

struct MicInfo{
public:
    int cardnum = 0;
    int devicenum = 0;
    char model[64]={};    //mic型号
    char uuid[64]={};     //滚码
    char info[1024]={};   //麦克风信息
    int nr_rates;		/* number of rate table entries */
    int rate_table[24];	/* rate table */
    int channels = 0;		/* # channels */
    bool isempty();
    void clear();
};
bool MicInfo::isempty() {
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
    return true;//(card_num == 0 && nr_rates == 0 && channels == 0);
}

void MicInfo::clear() {
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
    cardnum = 0;
    nr_rates = 0;
    channels = 0;
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
    memset(model,0,64);
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
    memset(uuid,0,64);
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
    memset(info,0,1024);
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
    memset(rate_table,0,24* sizeof(int));
    DLOG("linenum=%d,fun=%s\n",__LINE__,__FUNCTION__);
}

class User{
    private:
    MicInfo info;

};
int main(){
    MicInfo A;
    A.isempty();
    A.clear();
    return 0;
}