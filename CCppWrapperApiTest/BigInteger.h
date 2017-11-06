#ifndef _BIG_INTERGER_H_
#define _BIG_INTERGER_H_
#pragma once

#include "BigInt.h"

typedef BOOL(*bigint_isneed_normalize_func)(BigInt* bint);
typedef int (*bigint_compare_func)(BigInt* a, BigInt* b);
typedef int (*bigint_compare_one_func)(BigInt* a, arrtype bintb);
typedef int (*bigint_iszero_func)(BigInt* bigint);

typedef char* (*bigint_print_return_string_func)(BigInt* bigint);
typedef void(*bigint_print_func)(BigInt* bigint);
typedef void(*bigint_print_info_func)(BigInt* bigint);

typedef void(*bigint_normalize_func)(BigInt* bint);
typedef arrtype(*bigint_length_func)(BigInt* bigint);
typedef void(*bigint_replace_func)(BigInt* a, BigInt* b); // for result assign to same variable
typedef arrtype(*bigint_base10_length_func)(BigInt* bigint); // [+]
typedef void(*bigint_write_digital_func)(BigInt* bigint, arrtype index, arrtype value); // [+]
typedef arrtype(*bigint_read_digital_func)(BigInt* bigint, arrtype index); // [+]

typedef BigInt* (*bigint_add_func)(BigInt* a, BigInt* b);
typedef void(*bigint_add_into_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_add_one_func)(BigInt* a, arrtype b);
typedef void(*bigint_add_one_into_func)(BigInt* a, arrtype b);

typedef char* (*add_dec_integer_func)(char* sbinta, char* sbintb);
typedef char* (*add_dec_integer_one_func)(char* sbinta, arrtype bintb);

typedef BigInt* (*bigint_del_func)(BigInt* a, BigInt* b);
typedef void(*bigint_del_into_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_del_one_func)(BigInt* a, arrtype b);
typedef void(*bigint_del_one_into_func)(BigInt* a, arrtype b);
typedef char* (*del_dec_integer_func)(char* sbinta, char* sbintb);
typedef char* (*del_dec_integer_one_func)(char* sbinta, arrtype bintb);

typedef BigInt* (*bigint_mul_func)(BigInt* a, BigInt* b);
typedef void(*bigint_mul_into_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_mul_one_func)(BigInt* a, arrtype b);
typedef void(*bigint_mul_one_into_func)(BigInt* a, arrtype b);
typedef char* (*mul_dec_integer_func)(char* sbinta, char* sbintb);
typedef char* (*mul_dec_integer_one_func)(char* sbinta, arrtype bintb);

typedef BigInt** (*bigint_div_func)(BigInt* a, BigInt* b);
typedef void(*bigint_div_into_func)(BigInt* a, BigInt* b);
typedef BigInt** (*bigint_div_one_func)(BigInt* a, arrtype bintb);
typedef void(*bigint_div_one_into_func)(BigInt* a, arrtype bintb);
typedef char** (*div_dec_integer_func)(char* sbinta, char* sbintb);
typedef char** (*div_dec_integer_one_func)(char* sbinta, arrtype bintb);

typedef BigInt* (*bigint_div_return_quotient_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_div_one_return_quotient_func)(BigInt* a, arrtype bintb);
typedef BigInt* (*bigint_div_return_reminder_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_div_one_return_reminder_func)(BigInt* a, arrtype bintb);
typedef void(*bigint_div_into_reminder_func)(BigInt* a, BigInt* b);
typedef void(*bigint_div_one_into_reminder_func)(BigInt* a, arrtype bintb);
typedef BigInt* (*bigint_div_into_return_reminder_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_div_one_into_return_reminder_func)(BigInt* a, arrtype bintb);

typedef BigInt* (*bigint_power_func)(BigInt* a, BigInt* b);
typedef void(*bigint_power_into_func)(BigInt* a, BigInt* b);
typedef BigInt* (*bigint_power_one_func)(BigInt* a, arrtype bintb);
typedef void(*bigint_power_one_into_func)(BigInt* a, arrtype bintb);
typedef char* (*pwd_dec_integer_func)(char* sbinta, char* sbintb);
typedef char* (*pwd_dec_integer_one_func)(char* sbinta, arrtype bintb);

typedef BigInt* (*bigint_sqrt_func)(BigInt* bigint);
typedef void(*bigint_sqrt_into_func)(BigInt* bigint);
typedef char* (*sqrt_dec_integer_func)(char* decstr);
typedef BigInt* (*bigint_factor_func)(arrtype n);
typedef char* (*factor_return_dec_string_func)(arrtype n);
typedef BigInt* (*bigint_combination_func)(arrtype n, arrtype m);

typedef struct _BigInteger {
	BigInt* num;
	
	bigint_isneed_normalize_func isneed_normalize;
	bigint_compare_func compare;
	bigint_compare_one_func compare_one;
	bigint_iszero_func iszero;

	bigint_print_return_string_func print_return_string;
	bigint_print_func print;
	bigint_print_info_func print_info;

	bigint_normalize_func normalize;
	bigint_length_func length;
	bigint_replace_func replace;
	bigint_base10_length_func base10_length;
	bigint_write_digital_func write_digital;
	bigint_read_digital_func read_digital;

	bigint_add_func add;
	bigint_add_into_func add_into;
	bigint_add_one_func add_one;
	bigint_add_one_into_func add_one_into;

	add_dec_integer_func add_dec_integer;
	add_dec_integer_one_func add_dec_integer_one;

	bigint_del_func del;
	bigint_del_into_func del_into;
	bigint_del_one_func del_one;
	bigint_del_one_into_func del_one_into;

	del_dec_integer_func del_dec_integer;
	del_dec_integer_one_func del_dec_integer_one;

	bigint_mul_func mul;
	bigint_mul_into_func mul_into;
	bigint_mul_one_func mul_one;
	bigint_mul_one_into_func mul_one_into;

	mul_dec_integer_func mul_dec_integer;
	mul_dec_integer_one_func mul_dec_integer_one;

	bigint_div_func div;
	bigint_div_into_func div_into;
	bigint_div_one_func div_one;
	bigint_div_one_into_func div_one_into;

	div_dec_integer_func div_dec_integer;
	div_dec_integer_one_func div_dec_integer_one;

	bigint_div_return_quotient_func div_return_quotient;
	bigint_div_one_return_quotient_func div_one_return_quotient;
	bigint_div_return_reminder_func div_return_reminder;
	bigint_div_one_return_reminder_func div_one_return_reminder;
	bigint_div_into_reminder_func div_into_reminder;
	bigint_div_one_into_reminder_func div_one_into_reminder;
	bigint_div_into_return_reminder_func div_into_return_reminder;
	bigint_div_one_into_return_reminder_func div_one_into_return_reminder;

	bigint_power_func power;
	bigint_power_into_func power_into;
	bigint_power_one_func power_one;
	bigint_power_one_into_func power_one_into;
	pwd_dec_integer_func pwd_dec_integer;
	pwd_dec_integer_one_func pwd_dec_integer_one;

	bigint_sqrt_func sqrt;
	bigint_sqrt_into_func sqrt_into;
	sqrt_dec_integer_func sqrt_dec_integer;
	bigint_factor_func factor;
	factor_return_dec_string_func factor_return_dec_string;
	bigint_combination_func combination;
}BigInteger;

BigInteger* new_biginteger_dec_string(char* sinteger);
BOOL initial_biginteger_dec_string(BigInteger* bigint, char* sinteger);

BigInteger* new_biginteger_hex_string(char* sinteger); // [+]
BOOL initial_biginteger_hex_string(BigInteger* bigint, char* sinteger); // [+]

BigInteger* new_biginteger_one(arrtype bintb);
BOOL initial_biginteger_one(BigInteger* bigint, arrtype bintb);

BigInteger* new_biginteger_ten_base_one(arrtype bintb, arrtype basen); // [+]
BOOL initial_biginteger_ten_base_one(BigInteger* bigint, arrtype bintb, arrtype basen); // [+]

BigInteger* new_biginteger_from_array(arrtype sign, arrtype* arr, arrtype size);
BOOL initial_biginteger_from_array(BigInteger* bigint, arrtype sign, arrtype* arr, arrtype size);

BigInteger* new_biginteger_zero();
BOOL initial_biginteger_zero(BigInteger* bigint);

BigInteger* new_biginteger_size(arrtype size);
BOOL initial_biginteger_size(BigInteger* bigint, arrtype size);

BigInteger* new_biginteger_from_another(BigInt* bigint);
BOOL initial_biginteger_from_another(BigInteger* newone, BigInt* another);

BOOL cleanup_biginteger(BigInteger* bigint);
BOOL cleanup_biginteger_pointer(BigInteger** bigint);

#endif //_BIG_INTERGER_H_
