#include <stdio.h>
#include <stdlib.h>
#include "eps.h"

struct rgbColor {
    float R;
    float G;
    float B;
};

int main()
{
    char * file_path = "out.eps";
    struct rgbColor teste;

    teste.R = 245.0;
    teste.G = 122.0;
    teste.B = 12.0;

    FILE * file_ptr = fopen(file_path, "w+");
    write_eps_header(file_ptr, "lines", 595, 842);

    int i;

    for(i = 1; i < 20; i++)
    {
        int x = 10 + rand() % 200;
        int y = 10 + rand() % 200;

        draw_line(file_ptr, x, y, x + 200, y+20, 3);
    }

    fclose(file_ptr);

    system("xdg-open out.eps");

    return 0;
}
