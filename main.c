#include <stdio.h>
#include <string.h>
#include "5.h"

#define LEN 32


int main() {
    char s1[LEN], s2[LEN];

    
    for(int i = 0; s1[i - 1] != '\n'; i++)
        s1[i] = getchar();

    int length = strlen(s1);


    for(int i = 0; s2[i - 1] != '\n'; i++)
        s2[i] = getchar();

    printf("%d", seArchFristSymbol(s1, s2, length));
}