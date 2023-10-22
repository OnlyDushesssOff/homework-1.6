#include <stdio.h>
#include <locale.h>
#include <math.h>


 int main(){
   setlocale(LC_ALL, "Russian");

    int x1 = 10, y1 = 15;
    int x2 = 18, y2 = 21;
    int x3 = 7, y3 = 28;
   printf("Координаты первой вершины = %d, %d\n", x1, y1);
   printf("Координаты второй вершины = %d, %d\n", x2, y2);
   printf("Координаты третьей вершины = %d, %d\n", x3, y3);
   float st1 = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   float st2 = sqrt(pow(x2-x3,2) + pow(y3-y2,2));
   float st3 = sqrt(pow(x1-x3,2) + pow(y3-y1,2));
   float pirim = st1+st2+st3;
   printf("Периметр треугольника = %f\n", pirim);
   printf("Площадь треугольника = %f\n", sqrt(pirim*(pirim-st1)*(pirim-st2)*(pirim-st3)));

    return 0;
 }