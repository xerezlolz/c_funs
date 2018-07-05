#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    struct structform { double x, y; } z;
    double x = 3.3;
    z.x = x;
    z.y = 4.0;
    if (z.y < 0)
        printf("z=%f%fi\n", z.x, z.y);
    else
        printf("z=%f+%f\n", z.x, z.y);

    return 0;
}
