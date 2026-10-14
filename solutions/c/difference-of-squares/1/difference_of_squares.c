#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number){
    unsigned int i,sum;
    i=1,sum=0;
    for(i=1;i<=number;i++){
        sum= sum+(i*i);
    };return sum;
}
unsigned int square_of_sum(unsigned int number){
    unsigned int i,sum,result;
    i=1,sum=result=0;
    for(i=1;i<=number;i++){
        sum= sum+i;
    };result = sum*sum;
    return result;
}
unsigned int difference_of_squares(unsigned int number){
    unsigned int difference;
    difference=0;
    difference = square_of_sum(number) - sum_of_squares(number);
    return difference;
}