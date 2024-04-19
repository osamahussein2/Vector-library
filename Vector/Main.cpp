#include "Vec2.h"
#include "Vec3.h"
#include "Vec4.h"
#include <iostream>


int main()
{
	Vec2 v1(0.1f, 0.3f);
	Vec2 v2(0.5f, 0.4f);

	std::cout << "v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;
	std::cout << "v2 = (" << v2.x << ", " << v2.y << ")" << std::endl;

	v1.Addition(v2);

	std::cout << "Addition of the vectors v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Subtraction(v2);

	std::cout << "Subtraction of the vectors v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Division(v2);

	std::cout << "Division of the vectors v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Multiplication(v2);

	std::cout << "Multiplication of the vectors v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Rotate(90.0f);

	std::cout << "Rotation occurs at v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Magnitude();

	std::cout << "Magnitude v1 = " << v1.Magnitude() << std::endl;

	v1.Distance(v2);

	std::cout << "Distance v1 = " << v1.Distance(v2) << std::endl;

	v1.Truncate(2.0f);

	std::cout << "Truncate v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Ortho();

	std::cout << "Ortho v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;

	v1.Dot(v1, v2);

	std::cout << "Dot Product = " << v1.Dot(v1, v2) << std::endl;

	v1.Cross(v1, v2);

	std::cout << "Cross Product = " << v1.Cross(v1, v2) << std::endl << "\n";

	Vec3 v3(0.4f, 0.6f, 0.9f);
	Vec3 v4(0.8f, 0.1f, 0.7f);

	std::cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << std::endl;
	std::cout << "v4 = (" << v4.x << ", " << v4.y << ", " << v4.z << ")" << std::endl;

	v3.Addition(v4);

	std::cout << "Addition of the vectors v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << std::endl;

	v3.Subtraction(v4);

	std::cout << "Subtraction of the vectors v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << std::endl;

	v3.Division(v4);

	std::cout << "Division of the vectors v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << std::endl;

	v3.Multiplication(v4);

	std::cout << "Multiplication of the vectors v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << std::endl;

	v3.Magnitude();

	std::cout << "Magnitude v3 = " << v3.Magnitude() << std::endl;

	v3.Distance(v4);

	std::cout << "Distance v3 = " << v3.Distance(v4) << std::endl;

	v3.Dot(v3, v4);

	std::cout << "Dot Product = " << v3.Dot(v3, v4) << std::endl;

	v3.Cross(v3, v4);

	std::cout << "Cross Product = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << "\n" << std::endl;

	Vec4 v5(0.3f, 0.4f, 0.1f, 0.5f);
	Vec4 v6(0.1f, 0.3f, 0.2f, 0.2f);

	std::cout << "v5 = (" << v5.x << ", " << v5.y << ", " << v5.z << ", " << v5.d << ")" << std::endl;
	std::cout << "v6 = (" << v6.x << ", " << v6.y << ", " << v6.z << ", " << v6.d << ")" << std::endl;

	v5.Addition(v6);

	std::cout << "Addition of the vectors v5 = (" << v5.x << ", " << v5.y << ", " << v5.z << ", " << v5.d << ")" << std::endl;

	v5.Subtraction(v6);

	std::cout << "Subtraction of the vectors v5 = (" << v5.x << ", " << v5.y << ", " << v5.z << ", " << v5.d << ")" << std::endl;

	v5.Division(v6);

	std::cout << "Division of the vectors v5 = (" << v5.x << ", " << v5.y << ", " << v5.z << ", " << v5.d << ")" << std::endl;

	v5.Multiplication(v6);

	std::cout << "Multiplication of the vectors v5 = (" << v5.x << ", " << v5.y << ", " << v5.z << ", " << v5.d << ")" << std::endl;

	v5.Magnitude();

	std::cout << "Magnitude v5 = " << v5.Magnitude() << std::endl;

	v5.Distance(v6);

	std::cout << "Distance v5 = " << v5.Distance(v6) << std::endl;

	v5.Dot(v5, v6);

	std::cout << "Dot Product = " << v5.Dot(v5, v6) << std::endl;

	return 0;
}