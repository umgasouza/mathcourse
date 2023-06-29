#include <iostream>
#include <math.h>
#include <stdio.h>

struct Point2D{
    float x;
    float y;
};

void calc_vector() {
    float ax, ay, bx, by;

    fprintf(stdout, "Type the values for point A and B\n");
    fprintf(stdout, "Ax: ");
    std::cin >> ax;
    fprintf(stdout, "Ay: ");
    std::cin >> ay;
    fprintf(stdout, "Bx: ");
    std::cin >> bx;
    fprintf(stdout, "By: ");
    std::cin >> by;

    Point2D vector;
    vector.x = bx - ax;
    vector.y = by - ay;

    fprintf(stdout, "X: %d | Y: %d\n", vector.x, vector.y);
}

void calc_vector_norm() {
    Point2D vector;

    fprintf(stdout, "Type the value for the x component: ");
    std::cin >> vector.x;
    fprintf(stdout, "Type the value for the y component: ");
    std::cin >> vector.y;
    float x_sq = pow(vector.x, 2);
    float y_sq = pow(vector.y, 2);

    float vector_norm = sqrt(x_sq + y_sq);

    fprintf(stdout, "The norm of the vector (%.2f, %.2f) is: %.2f\n",
	    vector.x,
	    vector.y,
	    vector_norm);
}

int main() {
    int input = -1;

    while(input != 0) {
	fprintf(stdout, "Menu:\n");
	fprintf(stdout, "1: Calculate Vector\n");
	fprintf(stdout, "2: Calculate Vector Norm\n");
	fprintf(stdout, "0: Exit\n");
	fprintf(stdout, "Choose: ");
	std::cin >> input;
	switch(input) {
	    case 1:
		calc_vector();
		break;
	    case 2:
		calc_vector_norm();
		break;
	    default:
		return 0;
	}
    }
}
