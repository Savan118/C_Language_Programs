//Write a program to find area of circle, rectangle and triangle.

#include <stdio.h>
#define PI 3.141
int main()
{
	int width, length, RECT_AREA, base, height, RECT_TRI;
	float radius, ans;

	// AREA OF CIRCLE
	printf("\n-----------------------------------------");
	printf("\nAREA OF CIRCLE");
	printf("\n-----------------------------------------");
	printf("\nEnter RADIUS value of circle: ");
	scanf("%f", &radius);
	ans = PI * radius * radius;
	printf("\nAREA of CIRCLE is: %0.2f", ans);

	// AREA OF RECTANGLE
	printf("\n-----------------------------------------");
	printf("\nAREA OF RECTANGLE");
	printf("\n-----------------------------------------");
	printf("\nEnter the Rectangle WIDTH:");
	scanf("%d", &width);

	printf("\nEnter the Rectangle LENGTH:");
	scanf("%d", &length);
	RECT_AREA = width * length;
	printf("\nAREA of RECTANGLE is: %d", RECT_AREA);

	// AREA of TRIANGLE
	printf("\n-----------------------------------------");
	printf("\nAREA OF TRIANGLE");
	printf("\n-----------------------------------------");
	printf("\nEnter the BASE value:");
	scanf("%d", &base);

	printf("\nEnter the HEIGHT from base:");
	scanf("%d", &height);
	RECT_TRI = (base * height) / 2;
	printf("\nAREA of TRIANGLE is: %d", RECT_TRI);

	return 0;
}
