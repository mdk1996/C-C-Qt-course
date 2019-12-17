#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    char arr[1000];
    for(int i = 0; i < 1000; i++) {
        arr[i] = rand() % (122 - 97 + 1) + 97;
    }
    for(int j = 0; j < 1000; j++) {
        printf("%c", arr[j]);
    }
    printf("\n");
    return 0;
}
