#include <stdio.h>
#include <string.h>

int seArchFristSymbol(char s1[], char s2[], int length){
    for (int i = 0; i <= length; i++){
        for (int j = 0; j <= length; j++){
            if(s1[j] == s2[i])
                return j;
        }
    }
    return -1;
}
