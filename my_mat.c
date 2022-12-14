//
// Created by stavavitan on 12/5/22.
//
#include <stdio.h>
#include "my_mat.h"

#define size 10
int matrix[size][size];
void reArrange();

void inputNum(){
    int num = 0;
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &num);
            matrix[i][j]= num;
        }
    }
    reArrange();
}

void isPath(){
   int num1=0, num2=0;
    scanf("%d%d", &num1,&num2);
    if (matrix [num1][num2] != 0){
        printf("True\n");
    }
    else {
        printf("False\n");
    }
}

void theShorterPath (){
    int num1=0, num2=0;
    scanf("%d%d", &num1,&num2);
    if(matrix[num1][num2]==0||num1==num2){
    printf("-1\n");
    }
    else{
        printf("%d\n",matrix [num1][num2]);
    }
}

int minimum(int i, int j) {
    if (j==0){
        return i;
    }
    if (i==0){
        return j;
    }
    if (j>i)
    {
        return i;
    }
    else {
        return j;
    }
}

void reArrange() {
    for (int k = 0; k < size; k++)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i == j)
                {
                    matrix[i][i] = 0;
                }
                else if (i == k || j == k)
                {
                    matrix[i][j] = matrix[i][j];
                }
                else
                {
                    int x = matrix[i][k] + matrix[k][j];
                    if (matrix[i][k] == 0 || matrix[k][j] == 0){
                        x = 0;
                    }
                    matrix[i][j] = minimum(matrix[i][j], x);
                }
            }
        }
    }
}


