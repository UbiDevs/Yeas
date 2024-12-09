#include "array.h"

int max(int left, int right){
    return (left > right) ? left : right;
}

int min(int left, int right){
    return (left < right) ? left : right;
}

int min_index(int* massive, int size){
    int minIndex = 0;
    for (int i = 1; i < size; i++){
        if (massive[i] < massive[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}

int max_index(int* massive, int size){
    int maxIndex = 0;
    for (int i = 1; i < size; i++){
        if (massive[i] > massive[maxIndex]){
            maxIndex = i;
        }
    }
    return maxIndex;
}