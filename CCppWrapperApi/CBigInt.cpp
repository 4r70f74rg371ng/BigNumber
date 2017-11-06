

//#include <stdio.h>
//#include <stdlib.h>
#include <iostream>
#include "CBigInt.hpp"
extern "C" {
#include "BigInteger.h"
}

using namespace std;

CBigInt::CBigInt() {
	this->num = new_biginteger_zero();
}

CBigInt::CBigInt(char* decstr) {
	this->num = new_biginteger_dec_string(decstr);
}

CBigInt::CBigInt(arrtype bintb) {
	this->num = new_biginteger_one(bintb);
}

CBigInt::CBigInt(arrtype bintb, arrtype basen) {
	this->num = new_biginteger_ten_base_one(bintb, basen);
}

CBigInt::CBigInt(CBigInt& another) {
	this->num = new_biginteger_from_another(another.num->num);
}

CBigInt::CBigInt(BigInteger* another) {
	this->num = another;
}

CBigInt::CBigInt(arrtype sign, arrtype* arr, size_t size) {
	this->num = new_biginteger_from_array(sign, arr, size);
}

CBigInt* CBigInt::createFromSize(size_t size) {
	CBigInt* num = NULL;
	BigInteger* bigint;
	
	bigint = new_biginteger_size(size);

	if (bigint) {
		num = new CBigInt(bigint);
	}

	return num;
}

CBigInt* CBigInt::createFromHexStr(char* hexstr) {
	CBigInt* num = NULL;
	BigInteger* bigint;

	bigint = new_biginteger_hex_string(hexstr);

	if (bigint) {
		num = new CBigInt(bigint);
	}

	return num;
}

CBigInt& CBigInt::operator+(CBigInt& another) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->add_into(num->num->num, another.num->num);
	}

	return *num;
}

CBigInt& CBigInt::operator+=(CBigInt& another) {
	this->num->add_into(this->num->num, another.num->num);
	return *this;
}

CBigInt& CBigInt::operator+(arrtype bintb) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->add_one_into(num->num->num, bintb);
	}

	return *num;
}
CBigInt& CBigInt::operator+=(arrtype bintb) {
	this->num->add_one_into(this->num->num, bintb);
	return *this;
}

CBigInt& CBigInt::operator-(CBigInt& another) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->del_into(num->num->num, another.num->num);
	}

	return *num;
}

CBigInt& CBigInt::operator-=(CBigInt& another) {
	this->num->del_into(this->num->num, another.num->num);
	return *this;
}

CBigInt& CBigInt::operator-(arrtype bintb) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->del_one_into(num->num->num, bintb);
	}

	return *num;
}
CBigInt& CBigInt::operator-=(arrtype bintb) {
	this->num->del_one_into(this->num->num, bintb);
	return *this;
}

CBigInt& CBigInt::operator*(CBigInt& another) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->mul_into(num->num->num, another.num->num);
	}

	return *num;
}

CBigInt& CBigInt::operator*=(CBigInt& another) {
	this->num->mul_into(this->num->num, another.num->num);
	return *this;
}

CBigInt& CBigInt::operator*(arrtype bintb) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->mul_one_into(num->num->num, bintb);
	}

	return *num;
}
CBigInt& CBigInt::operator*=(arrtype bintb) {
	this->num->mul_one_into(this->num->num, bintb);
	return *this;
}


CBigInt& CBigInt::operator/(CBigInt& another) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->div_into(num->num->num, another.num->num);
	}

	return *num;
}

CBigInt& CBigInt::operator/=(CBigInt& another) {
	this->num->div_into(this->num->num, another.num->num);
	return *this;
}

CBigInt& CBigInt::operator/(arrtype bintb) {
	CBigInt* num;

	num = new CBigInt(*this);

	if (num) {
		num->num->div_one_into(num->num->num, bintb);
	}

	return *num;
}
CBigInt& CBigInt::operator/=(arrtype bintb) {
	this->num->div_one_into(this->num->num, bintb);
	return *this;
}

CBigInt& CBigInt::operator-() {
	this->num->num->sign = 1 - this->num->num->sign;
	return *this;
}

CBigInt::~CBigInt() {
	cleanup_biginteger_pointer(&(this->num));
}

ostream& operator<<(ostream& os, CBigInt& bigint) {
	char* string = NULL;

	string = bigint.num->print_return_string(bigint.num->num);
	os << string;
	free(string);

	return os;
}

int CBigInt::compare(CBigInt& another) {
	return this->num->compare(this->num->num, another.num->num);
}

int CBigInt::compare(arrtype bintb) {
	return this->num->compare_one(this->num->num, bintb);
}

bool CBigInt::operator==(CBigInt& another) {
	if (this->num->compare(this->num->num, another.num->num) == 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator==(arrtype bintb) {
	if (this->num->compare_one(this->num->num, bintb) == 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator<(CBigInt& another) {
	if (this->num->compare(this->num->num, another.num->num) < 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator<(arrtype bintb) {
	if (this->num->compare_one(this->num->num, bintb) < 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator<=(CBigInt& another) {
	if (this->num->compare(this->num->num, another.num->num) <= 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator<=(arrtype bintb) {
	if (this->num->compare_one(this->num->num, bintb) <= 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator>(CBigInt& another) {
	if (this->num->compare(this->num->num, another.num->num) > 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator>(arrtype bintb) {
	if (this->num->compare_one(this->num->num, bintb) > 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator>=(CBigInt& another) {
	if (this->num->compare(this->num->num, another.num->num) >= 0) {
		return true;
	}
	return false;
}

bool CBigInt::operator>=(arrtype bintb) {
	if (this->num->compare_one(this->num->num, bintb) >= 0) {
		return true;
	}
	return false;
}

arrtype CBigInt::get_length() {
	/*arrtype length = this->num->length(this->num->num);
	arrtype head = length - 1;
	arrtype i = 0;
	arrtype tmp = this->num->num->arr[head];

	while (tmp) {
		i++;
		tmp /= 10;
	}
	i += (length-1)*this->num->num->digital;
	return i;*/
	return this->num->base10_length(this->num->num);
}

arrtype CBigInt::get_size() {
	return this->num->length(this->num->num);
}

CBigIntDigitalProxy& CBigInt::operator[](int index) {
	if (index < this->get_length()) {
		return *new CBigIntDigitalProxy(*this, index);
	}
	return *new CBigIntDigitalProxy(*this, 0);
}

// ================================================================================
// CBigIntDigitalProxy start
// ================================================================================

// replace digital =>
// ((num / 10^(index+1)) * 10^(index+1)) + replace*10^index + (num % 10^(index))
CBigIntDigitalProxy& CBigIntDigitalProxy::operator=(arrtype value) {
	/*arrtype value_item = (this->index / this->num.num->num->digital);
	arrtype value_sindex = (this->index % this->num.num->num->digital);
	arrtype base = 1;
	arrtype i,tmp;
	if ((value >= 0) && (value <= 9)) {
		for (i = 0; i < value_sindex; i++) {
			base *= 10;
		}
		tmp = this->num.num->num->arr[value_item];
		if (value_sindex == 0) {
			this->num.num->num->arr[value_item] = (tmp / 10)*10 + value;
		}
		else {
			this->num.num->num->arr[value_item] = (tmp / (base*10))*(base * 10) + value*base + tmp % base;
		}
	}*/
	this->num.num->write_digital(this->num.num->num, this->index, value);
	return *this;
}

CBigIntDigitalProxy::operator arrtype() const {
	/*arrtype value_item = (this->index / this->num.num->num->digital);
	arrtype value_sindex = this->index % this->num.num->num->digital;
	arrtype base = 1;
	arrtype i;
	for (i = 0; i < value_sindex; i++) {
		base *= 10;
	}
	return ((this->num.num->num->arr[value_item]) / base) % 10;*/
	return this->num.num->read_digital(this->num.num->num, this->index);
}

// ================================================================================
// CBigIntDigitalProxy end
// ================================================================================

// C++11: User - defined literals
// 12345678901234567890cbi => CBigInt("12345678901234567890")
// _ for string
// no _ for variable
CBigInt operator"" _cbi(const char* sbigint) {
	return CBigInt(const_cast<char*>(sbigint));
}
