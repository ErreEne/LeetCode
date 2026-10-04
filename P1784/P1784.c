#include <stdio.h>
#include <stdlib.h>

int main() {
    int *var = (int*)malloc(sizeof(int)*10);
    for(int i = 0;i < 9)var[i]=i;
    
    // Store address of var variable
    
    // Dereferencing ptr to access the value
    printf("%x", ptr);
    
    return 0;
}
