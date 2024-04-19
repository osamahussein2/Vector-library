#include <cmath>
class Vec3
{
public:
	Vec3(float x_, float y_, float z_);
	~Vec3();
	void Addition(Vec3 v);
	void Subtraction(Vec3 v);
	void Division(Vec3 v);
	void Multiplication(Vec3 v);
	void Normalize();

	float Magnitude();
	float Distance(Vec3 v);

	static float Dot(Vec3 v1, Vec3 v2);
	Vec3 Cross(Vec3 v1, Vec3 v2);

	float x, y, z;
};

