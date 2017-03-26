#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "eps.h"

struct rgbColor {
    float R;
    float G;
    float B;
};

int main()
{
    char * file_path = "out.eps";
    char * consoleCommand = "xdg-open ";
    struct rgbColor teste;

    teste.R = 245.0;
    teste.G = 122.0;
    teste.B = 12.0;

    FILE * file_ptr = fopen(file_path, "w+");
    setHeader(file_ptr, "lines", 595, 842);

    int i;

    for(i = 1; i < 20; i++)
    {
        int x = 10 + rand() % 200;
        int y = 10 + rand() % 200;

        drawLine(file_ptr, x, y, x + 200, y+20, 3);
    }

    drawCircle(file_ptr,200,200,83.0,0,360,1);

    fclose(file_ptr);

    char str1[10] ;
    char str2[11] ;

    strcpy(str1, consoleCommand);
    strcpy(str2, file_path);
    strcat(str1, str2);

    system(str1);
    //printf("%s", str1);

    return 0;
}
