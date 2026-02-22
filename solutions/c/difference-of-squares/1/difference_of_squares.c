#include "difference_of_squares.h"
#include <math.h>
unsigned int sum_of_squares(unsigned int number){
    int sum1 = 0;
    for(unsigned int i=1;i<=number;i++){
        sum1 += pow(i,2);
    }
    return sum1;
}
unsigned int square_of_sum(unsigned int number){
    int sum2 = 0;
    for(unsigned int i=1;i<=number;i++){
        sum2 += i;
    }
    sum2 = pow(sum2,2);
    return sum2;
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number)-sum_of_squares(number);
}