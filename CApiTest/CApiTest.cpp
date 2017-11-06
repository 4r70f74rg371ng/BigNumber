// ReConstructBigInteger.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {
#include "TestBigInt.h"

#include "BigInt.h"
}



// =====================
void test_for_array_multiply(int* arr, int length) {
	BigInt* total = bigint_initial_one(1);
	int i;

	if (length > 0) {
		printf("PI({");
		for (i = 0; i < length; i++) {
			bigint_mul_one_into(total, arr[i]);
			if (i != 0) {
				printf(", ");
			}
			printf("%d", arr[i]);
		}

		printf("}) = "); bigint_print(total); printf("\n");
	}
	else {
		printf("PI({}) = 0\n");
	}

	bigint_cleanup_pointer(&total);
}

void test_for_array_multiply_all() {
	int int1[3] = { 4,5,6 };
	int int2[1] = { 1 };
	int int3[1] = { 0 };
	int* int4 = {};
 
	test_for_array_multiply(int1, 3);
	test_for_array_multiply(int2, 1);
	test_for_array_multiply(int3, 1);
	test_for_array_multiply(int4, 0);
}

void test_sqrt() {
	BigInt* total = bigint_initial_dec_string("2");
	int i;

	// 100 digital
	for (i = 0; i < 10000; i++) {
		bigint_mul_one_into(total, 100);
	}

	bigint_sqrt_into(total);

	bigint_print(total); printf("\n");

	bigint_cleanup_pointer(&total);
}

void my_test() {
	//all_test();
	//test_encode_decode_base256();
	//test_permutation_problem();
	//test_q56();
	//test_q63();
	//test_q53();
	//test_encode_decode_base58();
	//test_for_bugs();
	//test_for_initial_one_base();
	//test_for_sqrt();
	//test_for_hex_initial();

	//test_for_array_multiply_all();

	test_sqrt();
}

int main()
{
	my_test();
	
	system("pause");
	return 0;
}

