#include "Vec3.h"

Vec3::Vec3(float x_, float y_, float z_)
{
	x = x_;
	y = y_;
	z = z_;
}

Vec3::~Vec3()
{

}

void Vec3::Addition(Vec3 v)
{
	x = x + v.x;
	y = y + v.y;
	z = z + v.z;
}

void Vec3::Subtraction(Vec3 v)
{
	x = x - v.x;
	y = y - v.y;
	z = z - v.z;
}

void Vec3::Division(Vec3 v)
{
	x = x / v.x;
	y = y / v.y;
	z = z / v.z;
}

void Vec3::Multiplication(Vec3 v)
{
	x = x * v.x;
	y = y * v.y;
	z = z * v.z;
}

void Vec3::Normalize()
{
	x = x / Magnitude();
	y = y / Magnitude();
	z = z / Magnitude();
}

float Vec3::Magnitude()
{
	float mag = sqrt(x * x + y * y + z * z);
	return mag;
}

float Vec3::Distance(Vec3 v)
{
	Vec3 d = Vec3(v.x - x, v.y - y, v.z - z);
	return d.Magnitude();
}

float Vec3::Dot(Vec3 v1, Vec3 v2)
{
	float dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return dot;
}

Vec3 Vec3::Cross(Vec3 v1, Vec3 v2)
{
	float crossX = (v1.y * v2.z) - (v1.z * v2.y);
	float crossY = (v1.z * v2.x) - (v1.x * v2.z);
	float crossZ = (v1.x * v2.y) - (v1.y * v2.x);

	x = crossX;
	y = crossY;
	z = crossZ;

	return Vec3(x, y, z);
}