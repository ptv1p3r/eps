//
// Created by v1p3r on 25-03-2017.
//

#ifndef EPS_EPS_H
#define EPS_EPS_H

#endif //EPS_EPS_H

void setHeader(FILE * ptr_file, char * title, int width, int height);

void drawLine(FILE * ptr_file,  int x1, int y1, int x2, int y2, float width);

void drawCircle(FILE * ptr_file, int x, int y, float radius, int startAngle, int endAngle, float strokeWidth);