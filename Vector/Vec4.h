#include <cmath>

class Vec4
{
public:
	Vec4(float x_, float y_, float z_, float d_);
	~Vec4();
	void Addition(Vec4 v);
	void Subtraction(Vec4 v);
	void Division(Vec4 v);
	void Multiplication(Vec4 v);
	void Normalize();

	float Magnitude();
	float Distance(Vec4 v);

	static float Dot(Vec4 v1, Vec4 v2);

	float x, y, z, d;
};

