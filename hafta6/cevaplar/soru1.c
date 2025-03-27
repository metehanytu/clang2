// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265 

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    int r;
    Point m;
} Circle;


double calculateDif(Point a1, Point a2) {
    return sqrt((a1.x - a2.x)*(a1.x - a2.x) + (a1.y - a2.y)*(a1.y - a2.y));
}

int checkIfInside(Point a1, Circle c1) {
    // içindeyse -1,
    // dışındaysa +1,
    // üzerindeyse 0 
    // dönsün.
    double dif = calculateDif(a1, c1.m);

    if (c1.r > dif) {
        return -1;
    } else if (c1.r < dif) {
        return 1;
    } else {
        return 0;
    }
} 

double findCircumference(Circle c1) {
    return 2*PI*c1.r;
}

double findArea(Circle c1) {
    return PI*c1.r*c1.r;
}

double findAreaDif(Circle c1, Circle c2) {
    return fabs(findArea(c1) - findArea(c2));
}

int main() {
    Point p1;
    p1.x = 9;
    p1.y = 8;
    
    Point p2;
    p2.x = 5;
    p2.y = 8;
    
    Circle c1;
    c1.r = 5;
    c1.m = p2;
    
    Circle c2;
    c2.r = 10;
    c2.m = p2;
    
    printf("%f", findAreaDif(c1, c2));
    return 0;
}
