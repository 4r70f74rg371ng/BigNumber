#ifndef _CBIGINT_H_
#define _CBIGINT_H_
#pragma once

extern "C" {
#include "BigInteger.h"
}

#include <iostream>

class CBigIntDigitalProxy;

class CBigInt;

std::ostream& operator<<(std::ostream& os, CBigInt& bigint);

class CBigInt {
protected:
	BigInteger* num;
public:
	CBigInt();
	CBigInt(char* decstr);
	CBigInt(arrtype bintb);
	CBigInt(arrtype bintb, arrtype basen); // [+]
	CBigInt(CBigInt& another);
	CBigInt(BigInteger* another); // native assign
	CBigInt(arrtype sign, arrtype* arr, size_t size);
	static CBigInt* createFromSize(size_t size);
	static CBigInt* createFromHexStr(char* hexstr); // [+]

	CBigInt& operator+(CBigInt& another);
	CBigInt& operator+=(CBigInt& another);
	CBigInt& operator+(arrtype bintb);
	CBigInt& operator+=(arrtype bintb);

	CBigInt& operator-(CBigInt& another);
	CBigInt& operator-=(CBigInt& another);
	CBigInt& operator-(arrtype bintb);
	CBigInt& operator-=(arrtype bintb);

	CBigInt& operator*(CBigInt& another);
	CBigInt& operator*=(CBigInt& another);
	CBigInt& operator*(arrtype bintb);
	CBigInt& operator*=(arrtype bintb);

	CBigInt& operator/(CBigInt& another);
	CBigInt& operator/=(CBigInt& another);
	CBigInt& operator/(arrtype bintb);
	CBigInt& operator/=(arrtype bintb);

	// sign
	CBigInt& operator-();

	~CBigInt();

	int compare(CBigInt& another);
	int compare(arrtype bintb);

	bool operator==(CBigInt& another);
	bool operator==(arrtype bintb);

	bool operator<(CBigInt& another);
	bool operator<(arrtype bintb);

	bool operator<=(CBigInt& another);
	bool operator<=(arrtype bintb);

	bool operator>(CBigInt& another);
	bool operator>(arrtype bintb);

	bool operator>=(CBigInt& another);
	bool operator>=(arrtype bintb);

	arrtype get_length();
	arrtype get_size();

	CBigIntDigitalProxy& operator[](int index);

	friend std::ostream& operator<<(std::ostream& os, CBigInt& bigint);
	friend class CBigIntDigitalProxy;
};

class CBigIntDigitalProxy {
private:
	CBigIntDigitalProxy() : num(CBigInt()) {} // no default construct
protected:
	CBigInt& num;
	int index;
public:
	CBigIntDigitalProxy(CBigInt& num, int index) : num(num), index(index) {}
	CBigIntDigitalProxy& operator=(arrtype value);
	operator arrtype() const;
};

// C++11: User - defined literals
// 12345678901234567890cbi => CBigInt("12345678901234567890")
CBigInt operator"" _cbi(const char* sbigint);

#endif // _CBIGINT_H_
