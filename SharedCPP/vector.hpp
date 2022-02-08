#pragma once
#include <iostream>
using namespace std;

class vector2 {
public:
	double x;
	double y;

	/**
	Creates a new vector2
	*/
	vector2();
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

	/**
	Gets the length of the vector2
	*/
	double getLength();

	/**
	Gets the length of the vector2
	*/
	double getMagnitude();

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

ostream& operator<<(ostream& os, const vector2& v2);

class vector3 {
public:
	double x;
	double y;
	double z;

	/**
	Creates a new vector3
	*/
	vector3();
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

	/**
	Gets the length of the vector3
	*/
	double getLength();

	/**
	Gets the length of the vector3
	*/
	double getMagnitude();

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

ostream& operator<<(ostream& os, const vector3& v3);

class vector4 {
public:
	double x;
	double y;
	double z;
	double w;

	/**
	Creates a new vector4
	*/
	vector4();
	/**
	Creates a new vector4
	*/
	vector4(double x, double y, double z, double w);
	/**
	Creates a new vector4
	*/
	vector4(float x, float y, float w, float z);
	/**
	Creates a new vector4
	*/
	vector4(long x, long y, long z, long w);
	/**
	Creates a new vector4
	*/
	vector4(int x, int y, int z, int w);

	/**
	Gets the length of the vector4
	*/
	double getLength();

	/**
	Gets the length of the vector4
	*/
	double getMagnitude();

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

ostream& operator<<(ostream& os, const vector4& v4);
