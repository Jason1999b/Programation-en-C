#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() {

    void *heap_addr = malloc(10000);
    int stack_var;
    printf("Heap address: %p\n", heap_addr);
    printf("Stack address: %p\n", (void*)&stack_var);
    printf("Difference in TB: %zu\n", ((void*)&stack_var - heap_addr) / 1024 / 1024 / 1024 / 1024);
    free(heap_addr);

    void *heap_addr2 = sbrk(10000);
    int stack_var2;
    printf("\nHeap address (sbrk): %p\n", heap_addr2);
    printf("Stack address: %p\n", (void*)&stack_var2);
    printf("Difference in TB: %zu\n", ((void*)&stack_var2 - heap_addr2) / 1024 / 1024 / 1024 / 1024);

    return 0;
}

