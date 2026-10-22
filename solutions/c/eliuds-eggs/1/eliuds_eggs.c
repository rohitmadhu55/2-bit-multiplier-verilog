#include "eliuds_eggs.h"
int egg_count(int decimal){
    int count = 0;
    while(decimal != 0){
        if(decimal % 2 ==1){
            count = count +1 ;
            decimal = decimal / 2;
        }else{
            decimal = decimal /2;
        }
    }return count;
}