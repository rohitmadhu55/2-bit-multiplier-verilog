#include "resistor_color_duo.h"
#include<stddef.h>
uint16_t color_code(resistor_band_t colors[]){
    int color_code_value;
    if(colors== NULL){
        return 0;
    }else{
        color_code_value = (10*colors[0])+(colors[1]); 
    }return color_code_value;
}