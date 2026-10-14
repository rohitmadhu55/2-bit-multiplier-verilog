#include "grains.h"
uint64_t square(uint8_t index){
    if(index ==0){
        return 0;
    }else{
    int i ; uint64_t result;
    i=result=1;
    for(i=2;i<=index;i++){
        result = result * 2;
    };return result;
};
}
uint64_t total(void){
    int i; uint64_t sum;
    i=1;sum=1;
    for(i=2;i<=64;i++){
        sum= sum + square(i); 
    };return sum;
}