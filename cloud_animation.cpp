#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, " ");

    // Initialize shapes and colors
    int circle_x = 300, circle_y = 300, circle_radius = 50;
    int circle1_x = 200, circle1_y = 350, circle1_radius =60;
    int circle2_x = 140, circle2_y = 320, circle2_radius = 60;
    int circle3_x = 100, circle3_y = 360, circle3_radius = 60;

    // Animation loop
    for (int i = 1; i <= 350; i++) {
        // Clear the screen
        cleardevice();

        // Draw and fill the sun
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(circle_x, circle_y, circle_radius);
        floodfill(circle_x, circle_y, YELLOW);
        
// Draw and fill the second circle
        setcolor(RGB(211,211,211));
        setfillstyle(SOLID_FILL, RGB(211,211,211));
        circle(circle2_x + i, circle2_y, circle2_radius);
        floodfill(circle2_x + i, circle2_y,RGB(211,211,211));
        // Draw and fill the third circle (cloud)
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        circle(circle3_x + i, circle3_y, circle3_radius);
        floodfill(circle3_x + i, circle3_y, LIGHTGRAY);

        // Draw and fill the first circle
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        circle(circle1_x + i, circle1_y, circle1_radius);
        floodfill(circle1_x + i, circle1_y, LIGHTGRAY);

        

        // Delay to control animation speed
        delay(30);
    }

    // Wait for a key press before closing the window
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}

