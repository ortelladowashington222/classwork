#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int y = 10;
    int z = 20;
    printf("The sum of x and y is %d\n", x + y);
    if (z > 15) {
        printf("z is greater than 15\n");
    } else {
        printf("z is less than or equal to 15\n");
    }
    return 0;
}
