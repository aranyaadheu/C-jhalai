#include <stdio.h>

int main() {
    int mat[2][2] = {{10, 2}, {45, 1}};
    int max = mat[0][0], min = mat[0][0];

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            if(mat[i][j] > max) max = mat[i][j];
            if(mat[i][j] < min) min = mat[i][j];
        }
    }
    printf("Max: %d, Min: %d", max, min);
    return 0;
}