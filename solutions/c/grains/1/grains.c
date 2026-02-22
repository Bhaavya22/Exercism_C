#include "grains.h"
#include "math.h"
uint64_t square(uint8_t index){
    if ((index<1)||(index>64)){
        return 0;
    }
    else{
        uint64_t grain = pow(2,(index-1));
        return grain;
    }
}

uint64_t total(void){
    uint64_t sum = 0;
    uint64_t grains = 1;
    for(uint8_t i = 1; i<=64; i++){
        sum += grains;
        grains *=2;
    }
    return(sum);
}