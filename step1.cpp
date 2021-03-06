#include <iostream>
#include "header.hpp"

using namespace std;

void step1(double *matrix, int n){ //min_value_row

    int min;
    double min_value_row[n];
    for(int i = 0; i < n; i++){
        min = matrix[i * n];
        for(int j = 0; j < n; j++){
            if(matrix[i * n + j] < min){
                min = matrix[i * n + j];
            }
            min_value_row[i] = min;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i * n + j] -= min_value_row[i];
        }
    }


}