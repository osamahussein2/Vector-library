#include "Vec4.h"

Vec4::Vec4(float x_, float y_, float z_, float d_)
{
	x = x_;
	y = y_;
	z = z_;
	d = d_;
}

Vec4::~Vec4()
{

}

void Vec4::Addition(Vec4 v)
{
	x = x + v.x;
	y = y + v.y;
	z = z + v.z;
	d = d + v.d;
}

void Vec4::Subtraction(Vec4 v)
{
	x = x - v.x;
	y = y - v.y;
	z = z - v.z;
	d = d - v.d;
}

void Vec4::Division(Vec4 v)
{
	x = x / v.x;
	y = y / v.y;
	z = z / v.z;
	d = d / v.d;
}

void Vec4::Multiplication(Vec4 v)
{
	x = x * v.x;
	y = y * v.y;
	z = z * v.z;
	d = d * v.d;
}

void Vec4::Normalize()
{
	x = x / Magnitude();
	y = y / Magnitude();
	z = z / Magnitude();
	d = d / Magnitude();
}

float Vec4::Magnitude()
{
	float mag = sqrt(x * x + y * y + z * z);
	return mag;
}

float Vec4::Distance(Vec4 v)
{
	Vec4 dis = Vec4(v.x - x, v.y - y, v.z - z, v.d - d);
	return dis.Magnitude();
}

float Vec4::Dot(Vec4 v1, Vec4 v2)
{
	float dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return dot;
}