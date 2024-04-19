#include <cmath>

class Vec2
{
public:
	Vec2(float x_, float y_);
	~Vec2();
	void Addition(Vec2 v);
	void Subtraction(Vec2 v);
	void Division(Vec2 v);
	void Multiplication(Vec2 v);

	void Rotate(float degrees);
	void Normalize();

	float Magnitude();
	float Distance(Vec2 v);
	void Truncate(float length);
	Vec2 Ortho() const;

	static float Dot(Vec2 v1, Vec2 v2);
	static float Cross(Vec2 v1, Vec2 v2);

	float x, y;
};

