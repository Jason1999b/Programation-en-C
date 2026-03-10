// Faites le en même temps que moi

#include <stdint.h>
#include <assert.h>
#include <fcntl.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>
#define rien void

// Le préprocesseur ✓
// Les structs
// unsigned char vs signed char vs char

// Une struct C, comme une classe Python, sert à :
// - Nommer les choses.
// - Ranger ensemble les attributs de ces choses.
// - Nommer ces attributs.

struct point { // 16 bytes
    long x; // 8 bytes
    long y; // 8 bytes
};


void point_print(struct point *self) {
    //printf("%ld %ld\n", (*self).x, (*self).y);
    printf("%ld %ld\n", self->x, self->y);
}

double point_dist(struct point *self, struct point *other) {
    return sqrtl(powl(other->x - self->x, 2) + powl(other->y - self->y, 2));
}

struct elf { // 8 octets
    char magic[4];
    char length;
    char endianess;
    char version;
    char ABI;
};

struct zip {
    char magic[4]; 
};

int main(rien) {
    struct point p0;

#ifdef DEBUG
    printf("Entering the main\n");
#endif

    p0.x = 0;
    p0.y = 0;
    point_print(&p0);

    struct point p1;

    p1.x = 10;
    p1.y = 0;

    printf("%.2f\n", point_dist(&p1, &p0));

    struct elf elf;

    int fd = open("9mars", O_RDONLY);
    read(fd, &elf, sizeof(elf));

    assert(elf.magic[0] == 0x7F);
    assert(elf.magic[1] == 'E');
    assert(elf.magic[2] == 'L');
    assert(elf.magic[3] == 'F');

    if (elf.length == 1)
        printf("Architecture 32 bits\n");
    else if (elf.length == 2)
        printf("Architecture 64 bits\n");
    else
        printf("Architecture ?? bits\n");

    if (elf.endianess == 1)
        printf("LSB (little endian)\n");
    else if (elf.endianess == 2)
        printf("MSB (big endian)\n");
    else
        printf("Unknown endianess\n");

    struct zip z;
    int fd_zip = open("archive.zip", O_RDONLY);
    read(fd_zip, &z, sizeof(z));

    if (z.magic[0] == 'P' && z.magic[1] == 'K')
        printf("Fichier ZIP valide\n");
    else
        printf("Pas un ZIP\n");


#ifdef DEBUG
    printf("Leaving the main\n");
#endif
}