#include "luhn.h"
#include <string.h>

bool luhn(const char *num){
    int i, j, len, j_len, sum;
    char number[100];

    len = strlen(num);

    if(len <= 1){
        return false;
    }

    i = len;
    j = 0;
    sum = 0;

    for(i = len - 1; i >= 0; i--){
        if(num[i] == ' '){
            continue;
        }else if(num[i] >= '0' && num[i] <= '9'){
            number[j] = num[i];
            j++;
        }else{
            return false;
        }
    }

    number[j] = '\0';

    j_len = strlen(number);

    if(j_len <= 1){
        return false;
    }

    for(j = 0; j <= j_len - 1; j++){
        int digit = number[j] - '0';

        if(j % 2 != 0){
            if(digit < 5){
                sum = sum + (2 * digit);
            }else if(digit >= 5){
                sum = sum + ((2 * digit) - 9);
            }
        }else{
            sum = sum + digit;
        }
    }

    if(sum % 10 == 0){
        return true;
    }else{
        return false;
    }
}