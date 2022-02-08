#include <iostream>
#include <math.h>

class vector2 {
public:
	double x = 0;
	double y = 0;

	/**
	Creates a new vector2
	*/
	vector2()
	{
		x = 0;
		y = 0;
	}
	/**
	Creates a new vector2
	*/
	vector2(double x, double y);
	/**
	Creates a new vector2
	*/
	vector2(float x, float y);
	/**
	Creates a new vector2
	*/
	vector2(long x, long y);
	/**
	Creates a new vector2
	*/
	vector2(int x, int y);

	double getLength () {
		return sqrt((x * x) + (y * y));
	}

	double getMagnitude() {
		return sqrt((x * x) + (y * y));
	}

	/**
	Adds 2 vector2's
	*/
	vector2 operator + (const vector2& other);
	/**
	Subtracts 2 vector2's
	*/
	vector2 operator - (const vector2& other);
	/**
	Multiplies 2 vector2's
	*/
	vector2 operator * (const vector2& other);
	/**
	Divides 2 vector2's
	*/
	vector2 operator / (const vector2& other);
	/**
	Multiplies a vector2 by a number
	*/
	vector2 operator * (const double& other);
	/**
	Divides a vector2 by a number
	*/
	vector2 operator / (const double& other);
	/**
	Multiplies a vector2 by a number
	*/
	vector2 operator * (const float& other);
	/**
	Divides a vector2 by a number
	*/
	vector2 operator / (const float& other);
	/**
	Multiplies a vector2 by a number
	*/
	vector2 operator * (const long& other);
	/**
	Divides a vector2 by a number
	*/
	vector2 operator / (const long& other);
	/**
	Multiplies a vector2 by a number
	*/
	vector2 operator * (const int& other);
	/**
	Divides a vector2 by a number
	*/
	vector2 operator / (const int& other);
};

vector2::vector2(double inx, double iny)
{
	x = inx;
	y = iny;
}

vector2::vector2(float inx, float iny)
{
	x = double(inx);
	y = double(iny);
}

vector2::vector2(long inx, long iny)
{
	x = double(inx);
	y = double(iny);
}

vector2::vector2(int inx, int iny)
{
	x = double(inx);
	y = double(iny);
}


/**
Adds 2 vector2's
*/
vector2 vector2::operator + (const vector2& other) {
	vector2 temp;
	temp.x = x + other.x;
	temp.y = y + other.y;
	return temp;
}

/**
Subtracts 2 vector2's
*/
vector2 vector2::operator - (const vector2& other) {
	vector2 temp;
	temp.x = x - other.x;
	temp.y = y - other.y;
	return temp;
}

/**
Multiplies 2 vector2's
*/
vector2 vector2::operator * (const vector2& other) {
	vector2 temp;
	temp.x = x * other.x;
	temp.y = y * other.y;
	return temp;
}

/**
Divides 2 vector2's
*/
vector2 vector2::operator / (const vector2& other) {
	vector2 temp;
	temp.x = x / other.x;
	temp.y = y / other.y;
	return temp;
}

vector2 vector2::operator * (const double& other) {
	vector2 temp;
	temp.x = x * other;
	temp.y = y * other;
	return temp;
}

/**
Divides a vector2 by a number
*/
vector2 vector2::operator / (const double& other) {
	vector2 temp;
	temp.x = x / other;
	temp.y = y / other;
	return temp;
}

/**
Multiplies a vector2 by a number
*/
vector2 vector2::operator * (const float& other) {
	vector2 temp;
	temp.x = x * other;
	temp.y = y * other;
	return temp;
}

/**
Divides a vector2 by a number
*/
vector2 vector2::operator / (const float& other) {
	vector2 temp;
	temp.x = x / other;
	temp.y = y / other;
	return temp;
}

/**
Multiplies a vector2 by a number
*/
vector2 vector2::operator * (const long& other) {
	vector2 temp;
	temp.x = x * other;
	temp.y = y * other;
	return temp;
}

/**
Divides a vector2 by a number
*/
vector2 vector2::operator / (const long& other) {
	vector2 temp;
	temp.x = x / other;
	temp.y = y / other;
	return temp;
}

/**
Multiplies a vector2 by a number
*/
vector2 vector2::operator * (const int& other) {
	vector2 temp;
	temp.x = x * other;
	temp.y = y * other;
	return temp;
}

/**
Divides a vector2 by a number
*/
vector2 vector2::operator / (const int& other) {
	vector2 temp;
	temp.x = x / other;
	temp.y = y / other;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const vector2& v2)
{
	os << "(" << v2.x << ", " << v2.y << ")";
	return os;
}

class vector3 {
public:
	double x = 0;
	double y = 0;
	double z = 0;

	/**
	Creates a new vector3
	*/
	vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	/**
	Creates a new vector3
	*/
	vector3(double x, double y, double z);
	/**
	Creates a new vector3
	*/
	vector3(float x, float y, float z);
	/**
	Creates a new vector3
	*/
	vector3(long x, long y, long z);
	/**
	Creates a new vector3
	*/
	vector3(int x, int y, int z);
	
	double getLength() {
		return sqrt((x * x) + (y * y) + (z * z));
	}
	
	double getMagnitude() {
		return sqrt((x * x) + (y * y) + (z * z));
	}

	/**
	Adds 2 vector3's
	*/
	vector3 operator + (const vector3& other);
	/**
	Subtracts 2 vector3's
	*/
	vector3 operator - (const vector3& other);
	/**
	Multiplies 2 vector3's
	*/
	vector3 operator * (const vector3& other);
	/**
	Divides 2 vector3's
	*/
	vector3 operator / (const vector3& other);
	/**
	Multiplies a vector3 by a number
	*/
	vector3 operator * (const double& other);
	/**
	Divides a vector3 by a number
	*/
	vector3 operator / (const double& other);
	/**
	Multiplies a vector3 by a number
	*/
	vector3 operator * (const float& other);
	/**
	Divides a vector3 by a number
	*/
	vector3 operator / (const float& other);
	/**
	Multiplies a vector3 by a number
	*/
	vector3 operator * (const long& other);
	/**
	Divides a vector3 by a number
	*/
	vector3 operator / (const long& other);
	/**
	Multiplies a vector3 by a number
	*/
	vector3 operator * (const int& other);
	/**
	Divides a vector3 by a number
	*/
	vector3 operator / (const int& other);
};

/**
Creates a new vector3
*/
vector3::vector3(double inx, double iny, double inz)
{
	x = inx;
	y = iny;
	z = inz;
}

/**
Creates a new vector3
*/
vector3::vector3(float inx, float iny, float inz)
{
	x = double(inx);
	y = double(iny);
	z = double(inz);
}

/**
Creates a new vector3
*/
vector3::vector3(long inx, long iny, long inz)
{
	x = double(inx);
	y = double(iny);
	z = double(inz);
}

/**
Creates a new vector3
*/
vector3::vector3(int inx, int iny, int inz)
{
	x = double(inx);
	y = double(iny);
	z = double(inz);
}

/**
Adds 2 vector3's
*/
vector3 vector3::operator + (const vector3& other) {
	vector3 temp;
	temp.x = x + other.x;
	temp.y = y + other.y;
	temp.z = z + other.z;
	return temp;
}

/**
Subtracts 2 vector3's
*/
vector3 vector3::operator - (const vector3& other) {
	vector3 temp;
	temp.x = x - other.x;
	temp.y = y - other.y;
	temp.z = z - other.z;
	return temp;
}

/**
Multiplies 2 vector3's
*/
vector3 vector3::operator * (const vector3& other) {
	vector3 temp;
	temp.x = x * other.x;
	temp.y = y * other.y;
	temp.z = z * other.z;
	return temp;
}

/**
Divides 2 vector3's
*/
vector3 vector3::operator / (const vector3& other) {
	vector3 temp;
	temp.x = x / other.x;
	temp.y = y / other.y;
	temp.z = z / other.z;
	return temp;
}

vector3 vector3::operator * (const double& other) {
	vector3 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	return temp;
}

/**
Divides a vector3 by a number
*/
vector3 vector3::operator / (const double& other) {
	vector3 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	return temp;
}

/**
Multiplies a vector3 by a number
*/
vector3 vector3::operator * (const float& other) {
	vector3 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	return temp;
}

/**
Divides a vector3 by a number
*/
vector3 vector3::operator / (const float& other) {
	vector3 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	return temp;
}

/**
Multiplies a vector3 by a number
*/
vector3 vector3::operator * (const long& other) {
	vector3 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	return temp;
}

/**
Divides a vector3 by a number
*/
vector3 vector3::operator / (const long& other) {
	vector3 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	return temp;
}

/**
Multiplies a vector3 by a number
*/
vector3 vector3::operator * (const int& other) {
	vector3 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	return temp;
}

/**
Divides a vector3 by a number
*/
vector3 vector3::operator / (const int& other) {
	vector3 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const vector3& v3)
{
	os << "(" << v3.x << ", " << v3.y << ", " << v3.z << ")";
	return os;
}


class vector4 {
public:
	double x = 0;
	double y = 0;
	double z = 0;
	double w = 0;

	/**
	Creates a new vector4
	*/
	vector4()
	{
		x = 0;
		y = 0;
		z = 0;
		w = 0;
	}
	/**
	Creates a new vector4
	*/
	vector4(double x, double y, double z, double w);
	/**
	Creates a new vector4
	*/
	vector4(float x, float y, float z, float w);
	/**
	Creates a new vector4
	*/
	vector4(long x, long y, long z, long w);
	/**
	Creates a new vector4
	*/
	vector4(int x, int y, int z, int w);


	double getLength() {
		return sqrt((x * x) + (y * y) + (z * z) + (z * z));
	}

	double getMagnitude() {
		return sqrt((x * x) + (y * y) + (z * z) + (z * z));
	}

	/**
	Adds 2 vector4's
	*/
	vector4 operator + (const vector4& other);
	/**
	Subtracts 2 vector4's
	*/
	vector4 operator - (const vector4& other);
	/**
	Multiplies 2 vector4's
	*/
	vector4 operator * (const vector4& other);
	/**
	Divides 2 vector4's
	*/
	vector4 operator / (const vector4& other);
	/**
	Multiplies a vector4 by a number
	*/
	vector4 operator * (const double& other);
	/**
	Divides a vector4 by a number
	*/
	vector4 operator / (const double& other);
	/**
	Multiplies a vector4 by a number
	*/
	vector4 operator * (const float& other);
	/**
	Divides a vector4 by a number
	*/
	vector4 operator / (const float& other);
	/**
	Multiplies a vector4 by a number
	*/
	vector4 operator * (const long& other);
	/**
	Divides a vector4 by a number
	*/
	vector4 operator / (const long& other);
	/**
	Multiplies a vector4 by a number
	*/
	vector4 operator * (const int& other);
	/**
	Divides a vector4 by a number
	*/
	vector4 operator / (const int& other);
};

/**
Creates a new vector4
*/
vector4::vector4(double inx, double iny, double inz, double inw)
{
	x = inx;
	y = iny;
	z = inz;
	w = inw;
}

/**
Creates a new vector4
*/
vector4::vector4(float inx, float iny, float inz, float inw)
{
	x = double(inx);
	y = double(iny);
	z = double(inz);
	w = double(inw);
}

/**
Creates a new vector4
*/
vector4::vector4(long inx, long iny, long inz, long inw)
{
	x = double(inx);
	y = double(iny);
	z = double(inz);
	w = double(inw);
}

/**
Creates a new vector4
*/
vector4::vector4(int inx, int iny, int inz, int inw)
{
	x = double(inx);
	y = double(iny);
	z = double(inz);
	w = double(inw);
}

/**
Adds 2 vector4's
*/
vector4 vector4::operator + (const vector4& other) {
	vector4 temp;
	temp.x = x + other.x;
	temp.y = y + other.y;
	temp.z = z + other.z;
	temp.w = w + other.w;
	return temp;
}

/**
Subtracts 2 vector4's
*/
vector4 vector4::operator - (const vector4& other) {
	vector4 temp;
	temp.x = x - other.x;
	temp.y = y - other.y;
	temp.z = z - other.z;
	temp.w = w - other.w;
	return temp;
}

/**
Multiplies 2 vector4's
*/
vector4 vector4::operator * (const vector4& other) {
	vector4 temp;
	temp.x = x * other.x;
	temp.y = y * other.y;
	temp.z = z * other.z;
	temp.w = w * other.w;
	return temp;
}

/**
Divides 2 vector4's
*/
vector4 vector4::operator / (const vector4& other) {
	vector4 temp;
	temp.x = x / other.x;
	temp.y = y / other.y;
	temp.z = z / other.z;
	temp.w = w / other.w;
	return temp;
}

vector4 vector4::operator * (const double& other) {
	vector4 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	temp.w = w * other;
	return temp;
}

/**
Divides a vector4 by a number
*/
vector4 vector4::operator / (const double& other) {
	vector4 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	temp.w = w / other;
	return temp;
}

/**
Multiplies a vector4 by a number
*/
vector4 vector4::operator * (const float& other) {
	vector4 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	temp.w = w * other;
	return temp;
}

/**
Divides a vector4 by a number
*/
vector4 vector4::operator / (const float& other) {
	vector4 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	temp.w = w / other;
	return temp;
}

/**
Multiplies a vector4 by a number
*/
vector4 vector4::operator * (const long& other) {
	vector4 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	temp.w = w * other;
	return temp;
}

/**
Divides a vector4 by a number
*/
vector4 vector4::operator / (const long& other) {
	vector4 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	temp.w = w / other;
	return temp;
}

/**
Multiplies a vector4 by a number
*/
vector4 vector4::operator * (const int& other) {
	vector4 temp;
	temp.x = x * other;
	temp.y = y * other;
	temp.z = z * other;
	temp.w = w * other;
	return temp;
}

/**
Divides a vector4 by a number
*/
vector4 vector4::operator / (const int& other) {
	vector4 temp;
	temp.x = x / other;
	temp.y = y / other;
	temp.z = z / other;
	temp.w = w / other;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const vector4& v4)
{
	os << "(" << v4.x << ", " << v4.y << ", " << v4.w << ", " << v4.z << ")";
	return os;
}
