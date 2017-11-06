// ReConstructBigIntegerWithInterface.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

extern "C" {
#include "BigInteger.h"
}
#include "CBigInt.hpp"

void test_c_interface() {
	BigInteger bint;

	initial_biginteger_dec_string(&bint, "1000000"); // bint = 1000000;
	bint.add_one_into(bint.num, 1000); // bint += 1000;
	bint.print(bint.num); printf("\n");
	cleanup_biginteger(&bint);
}

void test_cpp_interface() {
	CBigInt bint = "1000000";

	bint += 1000;
	cout << bint << endl;
}

void test_cpp_interface2() {
	CBigInt a = 65536;

	cout << (a * a * a * a * a * a * a * a) << endl;
}

void test_cpp_interface3() {
	CBigInt a = 123456789012345678901234567890_cbi;

	cout << a << " " << a*a << endl;

	cout << 123456789012345678901234567890_cbi << " " << 123456789012345678901234567890_cbi* 123456789012345678901234567890_cbi << endl;
}

// digital by digital access
void test_cpp_interface4() {
	CBigInt num = 123456789012345678901234567890_cbi;
	num[0] = 8;

	num[num.get_length()-1] = 9;

	cout << num << endl;
	cout << num[3] << endl;
}

void test_cpp_interface5() {
	cout << 123456789012345678901234567890_cbi/0 << endl;
	cout << -123456789012345678901234567890_cbi/0 << endl;
}

int main()
{
	test_c_interface();
	test_cpp_interface();
	test_cpp_interface2();
	test_cpp_interface3();
	test_cpp_interface4();
	test_cpp_interface5();
	system("pause");
    return 0;
}

