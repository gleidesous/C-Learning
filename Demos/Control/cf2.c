#include <stdio.h>

void func(int n) {
    int i = 0;
    for (; i < n; ++i) {
        printf("i (%d) is less than n (%d).\n", i, n);
    }
    printf("The value of i is: %d\n", i);
}
int main() {
    func(10);
    return 0;
}


