#include <stdio.h>
#include "my_mat.h"

int main() {
    char choice = 'e';
    while (choice!='D'){
        scanf("%c", &choice);
        if (choice == 'A') {
            inputNum();
        }
        if (choice == 'B') {
            isPath();
        }
        if (choice == 'C') {
            theShorterPath();
        }
    }
    return 0;
}