#include <stdio.h>
#include "valid-anagram.h"

bool isAnagram(char *s, char *t) {
    char *foundChar = NULL;
    unsigned int length = 0;
    
    for (char *ptrS = &s; *ptrS != '\0'; ptrS++) ++length;
    
    char buffer[length];

    for (size_t i = 0; i < length; i++)
        printf("len[%d]: %c", i, s[i]);

    int i = 0;
    for (char *ptrS = &s; *ptrS != '\0'; ptrS++) {
        for (char *ptrT = &t; *ptrT != '\0'; ptrT++) {
            if (*ptrS == *ptrT) {
                foundChar = ptrT;
                buffer[i] = *ptrT;
                ++i;
            }
        }

        if (foundChar == NULL) return false;

        foundChar = NULL;
    }

    return false;
}