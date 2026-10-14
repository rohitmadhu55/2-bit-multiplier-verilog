#include "darts.h"
int score(  coordinate_t position){
    int score;
    double squared_double=0;
    squared_double = position.x*position.x + position.y*position.y;
    if(squared_double >=0 && squared_double<=1 ){
        score= 10;
    }else if (squared_double >1 && squared_double <=25){
        score = 5;
    }else if(squared_double>25 && squared_double <=100){
        score=1;
    }else{
        score=0;
    }return score;
}