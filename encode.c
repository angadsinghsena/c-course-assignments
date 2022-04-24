#include <stdio.h>
#include <stdlib.h>

int encode(int red, int green, int blue) {
    int color = 0;
    printf("Enter a 3 arguments for your color between 0-255, rr gg bb");
    color = ((red & 0xff) << 16) | ((green & 0xff) << 8) | (blue & 0xff);
    return color;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "%s: error: Wrong number of arguments. Expecting 3 arguments, red, green, and blue\n", argv[0]);
        abort();
    }
    int red = atoi(argv[1]);
    int green = atoi(argv[2]);
    int blue = atoi(argv[3]);
    printf("#%06x\n", encode(red, green, blue));
    return EXIT_SUCCESS;
}
