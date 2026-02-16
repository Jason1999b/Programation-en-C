#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int compare_char(const void *p1, const void *p2) {
    return *(const char *)p1 - *(const char *)p2;
}

char *my_strdup(const char *s) {
     size_t len = strlen(s) + 1;
     void *new = malloc(len);

     if (new == NULL)
         return NULL;

     memcpy(new, s, len);
     return (char *)new;
}

int is_anagram(const char *left, const char *right) {
    char *left_copy = my_strdup(left);
    char *right_copy = my_strdup(right);
    int result = 1 ;
    
    if ( left_copy && right_copy){
    qsort(left_copy, strlen(left_copy), sizeof(*left_copy), compare_char);
    qsort(right_copy, strlen(right_copy), sizeof(*right_copy), compare_char);
    result = strcmp(left_copy, right_copy);}
    free(left_copy);
    free(right_copy);
    return result;
}