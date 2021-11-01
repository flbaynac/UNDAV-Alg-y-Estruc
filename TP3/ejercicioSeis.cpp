#include "ejercicioSeis.hpp"

void unirArray(int *arr1, int *arr2, int *newArr, int size1, int size2){
    if(size1 > 0 && size2 > 0){
        for(int i = 0; i < size1 + size2; i++){
            if (i < size1)
                newArr[i] = arr1[i];
            else
                newArr[i] = arr2[i - size1];
        }
        int posUsed = 40;
        for (int i = 0; i < posUsed; ++i){
            int duplicates = 0;
            int j = i + 1;
            for ( ; j < posUsed; ++j){
                if ( newArr[i] == newArr[j] ){
                    ++duplicates;
                    break;
                }
            }
            for (int k = j + 1; k < posUsed; ++k){
                if (newArr[i] != newArr[k]){
                    newArr[j] = newArr[k];
                    ++j;
                }
                else
                    ++duplicates;
            }
            posUsed -= duplicates;
        }
        for (int i = posUsed; i < 40; ++i)
            newArr[i] = 0;
    }
}