#include "hamming.h"
#include<string.h>
int compute(const char *lhs, const char *rhs){
    int distance=0;
    int i = 0;
    if(strlen(lhs)!=strlen(rhs)){
        return -1;
    }else{
        for(i=0;lhs[i]!='\0';i++){
            if(lhs[i]!=rhs[i]){
                distance = distance+1;
            }else{
                continue;
            }
        }
    }return distance;
}