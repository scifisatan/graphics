#include<stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
   int gd = DETECT, gm;
   char data[] = "C:\\MinGW\\lib\\libbgi.a";
   initgraph(&gd, &gm, data);
   /* Write your code here */

   line(100, 100, 200, 200);

   getch();
   closegraph();
   return 0;
}