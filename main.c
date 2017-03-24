#include <stdio.h>
#include <stdlib.h>

void write_eps_header(FILE * ptr_file, char * title, int width, int height)
{
    fprintf(ptr_file, "%s\n", "%%!PS-Adobe-3.0 EPSF-3.0");
    fprintf(ptr_file, "%%Title:%s\n", title);
    fprintf(ptr_file, "%%BoundingBox: 0 0 %d %d \n", width, height);
}


void draw_line(FILE * ptr_file,  int x1, int y1, int x2, int y2, float width)
{
    fprintf(ptr_file, "newpath %d %d moveto %d %d lineto %f setlinewidth stroke\n", x1, x2, y1, y2, width );
}



int main()
{
    char * file_path = "out.eps";

    FILE * file_ptr = fopen(file_path, "w+");
    write_eps_header(file_ptr, "lines", 600, 800);

    int i;

    for(i = 1; i < 20; i++)
    {
        int x = 10 + rand() % 200;
        int y = 10 + rand() % 200;

        draw_line(file_ptr, x, y, x + 200, y+20, 3);
    }

    fclose(file_ptr);

    return 0;
}
