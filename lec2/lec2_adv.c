#include <stdio.h>

int main() {
    int from = 8;
    int to = 16;
    int baesu = 7;

    int d;

    int result = -1;

    for (d = from; d <= to; d = d + 1) {
        if (d % baesu == 0) {
            result = d;
            break;
        }
    }
    
    if (result != -1) {
        printf("from %d to %d, the smallest %d basesu is %d.\n", from, to, baesu, result);
    } else {
        printf("from %d to %d, no %d basesu exists.\n", from, to, baesu);
    }

    
    return 0;
}