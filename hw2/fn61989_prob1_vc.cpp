
/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mladenov
 * @idnumber 61989
 * @task 1
 * @compiler VC
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

float distance(float Ax, float Ay, float Bx, float By){
	float pi = 3.14;
	float length = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
	return ((pi * length / 2) + length) / 2;
}

bool segmentsIntersection(float p0_x, float p0_y, float p1_x, float p1_y,float p2_x,
						  float p2_y, float p3_x, float p3_y, float *i_x, float *i_y)
{
	float s1_x, s1_y, s2_x, s2_y;
	s1_x = p1_x - p0_x;     s1_y = p1_y - p0_y;
	s2_x = p3_x - p2_x;     s2_y = p3_y - p2_y;

	float s, t;
	s = (-s1_y * (p0_x - p2_x) + s1_x * (p0_y - p2_y)) / (-s2_x * s1_y + s1_x * s2_y);
	t = (s2_x * (p0_y - p2_y) - s2_y * (p0_x - p2_x)) / (-s2_x * s1_y + s1_x * s2_y);

	if (s >= 0 && s <= 1 && t >= 0 && t <= 1){
		if (i_x != NULL)
			*i_x = p0_x + (t * s1_x);
		if (i_y != NULL)
			*i_y = p0_y + (t * s1_y);
		return 1;
	}

	return 0;
}

int main() {
	int n;
	float  Ax, Ay, Bx, By, Ix, Iy;
	float totalDistance = 0;
	cin >> n;

	cin >> Ax >> Ay;
	Ax = round(Ax * 100) / 100;
	Ay = round(Ay * 100) / 100;

	for (; n > 1; n--) {
		cin >> Bx >> By;
		Bx = round(Bx * 100) / 100;
		By = round(By * 100) / 100;

		if ((abs(Ax) > 5 || abs(Ay) > 2) && (abs(Bx) > 5 || abs(By) > 2)){
			Ax = Bx;
			Ay = By;
			continue;
		}
		else if (abs(Ax) > 5 || abs(Ay) > 2) {
			if (segmentsIntersection(Ax, Ay, Bx, By, -5, 2, 5, 2, &Ix, &Iy))
				totalDistance += distance(Bx, By, Ix, Iy);

			if (segmentsIntersection(Ax, Ay, Bx, By, -5, -2, 5, -2, &Ix, &Iy))
				totalDistance += distance(Bx, By, Ix, Iy);

			if (segmentsIntersection(Ax, Ay, Bx, By, 5, -2, 5, -2, &Ix, &Iy))
				totalDistance += distance(Bx, By, Ix, Iy);

			if (segmentsIntersection(Ax, Ay, Bx, By, -5, -2, -5, 2, &Ix, &Iy))
				totalDistance += distance(Bx, By, Ix, Iy);
		}
		else if (abs(Bx) > 5 || abs(By) > 2) {
			if (segmentsIntersection(Ax, Ay, Bx, By, -5, 2, 5, 2, &Ix, &Iy))
				totalDistance += distance(Ax, Ay, Ix, Iy);

			if (segmentsIntersection(Ax, Ay, Bx, By, -5, -2, 5, -2, &Ix, &Iy))
				totalDistance += distance(Ax, Ay, Ix, Iy);

			if (segmentsIntersection(Ax, Ay, Bx, By, 5, -2, 5, 2, &Ix, &Iy))
				totalDistance += distance(Ax, Ay, Ix, Iy);

			if (segmentsIntersection(Ax, Ay, Bx, By, -5, -2, -5, 2, &Ix, &Iy))
				totalDistance += distance(Ax, Ay, Ix, Iy);
		}
		else
			totalDistance += distance(Ax, Ay, Bx, By);

		Ax = Bx;
		Ay = By;
	}

	cout.precision(3);
	cout << fixed << totalDistance << endl;

	return 0;
}
