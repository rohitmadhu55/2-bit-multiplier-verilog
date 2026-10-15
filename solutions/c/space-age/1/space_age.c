#include "space_age.h"
static const double orbital_periods[]={0.2408467,0.61519726,1.0,1.8808158,11.862615,29.447498,84.016846,164.79132};
double planet_age;
float age(planet_t planet, int64_t seconds){
    if(planet<MERCURY || planet >NEPTUNE){
        return -1;
    }else{
    double earth_years= (double) seconds /31557600;
    planet_age = earth_years/orbital_periods[planet]; 
    
    }return (float)planet_age;
}
