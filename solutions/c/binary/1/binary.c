#include "binary.h"
#include <string.h>
int convert(const char *input){
    int bit,result;
    result =0;
    char ch;
    if(*input == '\0'){
        return -1;
    }
    else{ 
        while(*input != '\0'){
            if(*input != '0' && *input != '1'){
        return -1;
    }
                ch= *input;
                bit = ch - '0';
                input++;
                result = result *2 + bit;
            }
        
    } return result;
}