#include <stdio.h>
#include "calculations.h"


int calculate_sum(int arr[], size_t length) {
    int sum = 0;
    int i = 0;
    for (i = 0; i < length; i++) {
        sum += arr[i];
    }

    return sum;
}


float calculate_mean(int arr[], size_t length) {
    if(length == 0) {
        // при длине равной 0, мы не можем вычислить среднее значение из-за ошибки деления на 0.  
        return 0;
    }

    // в ином случае:
    int sum = calculate_sum(arr, length);
    return (float)sum / length;
}

