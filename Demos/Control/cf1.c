#include <stdio.h>

int cond(int x) {
    return x > 5;
}

int main(){
    if (cond(6)) {
        puts("True!");
    }
    return 0;
}

