#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

template <class T>

class Vec {
	T x;
	T y;
	T z;

public:

	Vec(T vx, T vy, T vz) {
		x = vx;
		y = vy;
		z = vz;
	}

	
	Vec(const Vec& V) {
		x = V.x;
		y = V.y;
		z = V.z;
	}

	Vec() {

		x = 0;
		y = 0;
		z = 0;

	}


	Vec operator+(const Vec& v) {
		return Vec(x + v.x, y + v.y, z + v.z);
	}
	
	Vec operator+=(const Vec& v) {
		x += v.x;
		y += v.y;
		z += v.z;
		return *this;
	}

	
	Vec operator-(const Vec& v) {
		return Vec(x - v.x, y - v.y, z - v.z);
	}

	
	Vec operator-=(const Vec& v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
		return *this;
	}

	

	Vec operator=(Vec& v) {

		v.x = this->x;
		v.y = this->y;
		v.z = this->z;
	}

	bool operator==(const Vec v) {
		if (x == v.x && y == v.y && z == v.z) {
			return true;
		}
		return false;
	}


	float distance() {
		return sqrt(this->x ^ 2 + this->y ^ 2 + this->z ^ 2);
	}

	Vec& set_to_zero() {

		this->x = 0;
		this->y = 0;
		this->z = 0;

		return *this;
	}

	Vec& is_zero() {

		if (this->x == 0 && this->y == 0 && this->z == 0) 
			return true;
		else
		return false;
	}

	Vec& normal() {

		float fl = distance();

		this->x = this->x / fl;
		this->y = this->y / fl;
		this->z = this->z / fl;

		return *this;
	}

};
#endif
