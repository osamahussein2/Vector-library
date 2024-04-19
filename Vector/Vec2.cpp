#include "Vec2.h"

Vec2::Vec2(float x_, float y_)
{
	x = x_;
	y = y_;
}

Vec2::~Vec2()
{

}

void Vec2::Addition(Vec2 v)
{
	x = x + v.x;
	y = y + v.y;
}

void Vec2::Subtraction(Vec2 v)
{
	x = x - v.x;
	y = y - v.y;
}

void Vec2::Division(Vec2 v)
{
	x = x / v.x;
	y = y / v.y;
}

void Vec2::Multiplication(Vec2 v)
{
	x = x * v.x;
	y = y * v.y;
}

void Vec2::Rotate(float degrees)
{
	float theta = degrees / 180.0f * 3.14;
	float c = cos(theta);
	float s = sin(theta);
	float tx = x * c - y * s;
	float ty = x * s + y * c;
	x = tx;
	y = ty;
}

void Vec2::Normalize()
{
	x = x / Magnitude();
	y = y / Magnitude();
}

float Vec2::Magnitude()
{
	float mag = sqrt(x * x + y * y);
	return mag;
}

float Vec2::Distance(Vec2 v)
{
	Vec2 d = Vec2(v.x - x, v.y - y);
	return d.Magnitude();
}

void Vec2::Truncate(float length)
{
	float angle = atan2f(y, x);
	x = length * cos(angle);
	y = length * sin(angle);
}

Vec2 Vec2::Ortho() const
{
	return Vec2(y, -x);
}

float Vec2::Dot(Vec2 v1, Vec2 v2)
{
	float dot = v1.x * v2.x + v1.y * v2.y;
	return dot;
}

float Vec2::Cross(Vec2 v1, Vec2 v2)
{
	float cross = (v1.x * v2.y) - (v1.y * v2.x);
	return cross;
}