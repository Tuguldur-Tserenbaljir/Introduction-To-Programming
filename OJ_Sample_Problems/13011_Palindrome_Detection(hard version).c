#include <stdio.h>
#include <stdlib.h>

char* expandArray(char *str, int *size){
    char *buffer = (char*)malloc(sizeof(char)**size);
    
    for(size_t i=0; i<*size; i++)
        buffer[i] = str[i];

    str = (char*)malloc(sizeof(char)**size*2);

    for(size_t i=0; i<*size; i++)
        str[i] = buffer[i];

    free(buffer);
    *size *= 2;

    return str;
}

int main(){
    int size = 20;
    char *str = (char*)malloc(sizeof(char)*size);
    int index = 0;
    int _isPalindrome = 1;

    while(1){
        if(index == size)
            str = expandArray(str, &size);
        scanf("%c", &str[index]);
        if(str[index] == '.')
            break;
        index++;
    }

    for(int i=0; i<(index)/2; i++)
        if(str[i]!=str[index-1-i]){
            _isPalindrome = 0;
            break;
        }

    if(_isPalindrome)
        printf("a palindrome\n");
    else
        printf("not a palindrome\n");

    free(str);
    return 0;
}