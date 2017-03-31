#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "eps.h"

int main()
{
    char * file_path = "out.eps";
    char * consoleCommand = "xdg-open ";
    int width = 1500;
    int height = 3200;
    float square_scale = 6.0f;

    FILE * file_ptr = fopen(file_path, "w+");
    setHeader(file_ptr, "lines", width, height);

    int array[] = {11, -2, 9, 93, 47, 98, 12, 13, 7, 0, 1, 4, 3, 77, 88, 15, 16, 91, 24, 21, 32, 73, 89, 26, 29, 87, 76, 94, -4, -5, 93, 85, 32, 62, 83, 91, 71, 17, 19, 34};
    //int array [] = {98, 94, 93, 93, 91, 91, 89, 88, 87, 85, 83, 77, 76, 73, 71, 62, 47, 34, 32, 32, 29, 26, 24, 21, 19, 17, 16, 15, 13, 12, 11, 9, 7, 4, 3, 1, 0, -2, -4, -5};
    //int array[] = {-5, -4, -2, 0, 1, 3, 4, 7, 9, 11, 12, 13, 15, 16, 17, 19, 21, 24, 26, 29, 32, 32, 34, 47, 62, 71, 73, 77, 76, 83, 85, 87, 88, 89, 91, 91, 93, 93, 94, 98};

    int n = sizeof(array) / sizeof(int);
    //draw_array(file_ptr,array ,1 ,10 , 0,500, 8, (rgb){0,1,0}, (rgb){0,0,0});
    //binary_search(array, n, 87, file_ptr, width-100);

    // selection sort
    /*drawText(file_ptr, (rgb){0,0,0}, 40,  0, height -50, "Selection Sort");
    drawLine(file_ptr, (rgb){0,0,0}, 2, height -52 ,  width -2, height -52, 1);
    drawText(file_ptr, (rgb){0,1,0}, 20, 100, height - 70, "Unsorted item");
    drawText(file_ptr, (rgb){0,0,1}, 20, 100, height - 90, "Minimum item");
    drawText(file_ptr, (rgb){1,0,0}, 20, 100, height - 110, "Item to be swapped");
    drawText(file_ptr, (rgb){0.25,0.25,0.25}, 20, 100, height - 130, "Sorted item");
    selection_sort(array, n, file_ptr, height - 140, square_scale);
*/

    // insetion sort
    // draw_text(file_ptr, (rgb){0,0,0}, 40,  0, height -50, "Insertion Sort");
    // draw_line(file_ptr, (rgb){0,0,0}, 2, height -52 ,  width -2, height -52, 1);
    // draw_text(file_ptr, (rgb){0,1,0}, 20, 100, height - 70, "Unsorted item");
    // draw_text(file_ptr, (rgb){0,0,1}, 20, 100, height - 90, "Key");
    // draw_text(file_ptr, (rgb){1,0,0}, 20, 100, height - 110, "Item to be moved");
    // draw_text(file_ptr, (rgb){0.25,0.25,0.25}, 20, 100, height - 130, "Sorted item");
    // insertion_sort(array, n, file_ptr, height - 140, square_scale);

    // bubble sort
    drawText(file_ptr, (rgb){0,0,0}, 40,  0, height -50, "Bubble Sort");
    drawLine(file_ptr, (rgb){0,0,0}, 2, height -52 ,  width -2, height -52, 1);
    drawText(file_ptr, (rgb){0,1,0}, 20, 100, height - 70, "Unsorted item");
    drawText(file_ptr, (rgb){0,0,1}, 20, 100, height - 90, "Current item (bubble)");
    drawText(file_ptr, (rgb){1,0,0}, 20, 100, height - 110, "Correct position of the bubble");
    drawText(file_ptr, (rgb){0.25,0.25,0.25}, 20, 100, height - 130, "Sorted item");
    bubble_sort(array, n, file_ptr, height - 140, square_scale);



    fprintf(file_ptr, "showpage\n");
    fprintf(file_ptr, "%%%%EOF");


    fclose(file_ptr);

    char str1[10] ;
    char str2[7] ;

    strcpy(str1, consoleCommand);
    strcpy(str2, file_path);
    strcat(str1, str2);

    system(str1);
    //printf("%s", str1);*/

    return 0;
}
