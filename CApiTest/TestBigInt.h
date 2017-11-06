#ifndef _TEST_BIG_INT_H_
#define _TEST_BIG_INT_H_
#pragma once

#include "BigInt.h"

void test_init();

void test_add_internal();
void test_del_internal();

void test_add();
void test_del();
void test_zero_add_del();

void test_mul_internal();
void test_mul_internal_negtive_zero();

void test_mul();
void test_mul_negtive_zero();

void test_add_one();
void test_del_one();

void test_add_one_func();
void test_add_del_zero_one();

void test_mul_one();
void test_compare();
void test_zero_adjust();

void test_div();

void test_power();

void test_combine();

void all_test();

// =================================================================================== debug

void test_for_divs(char* sa, char* sb);

void test_for_bugs();

void test_for_initial_one_base();

void test_sqrt(char* number);

void test_for_sqrt();

char* base256_encode(char* str);
char* base256_decode(char* str);
void test_encode_decode_base256();

void test_permutation_problem();

void test_q56();

arrtype log10_power(arrtype n, arrtype m);

void test_q63();

BOOL check_negtive(BigInt* bint);

void test_q53();

arrtype bigint_convert_native(BigInt* bint);

char* base58_encode(char* rawstr);
char* base58_decode(char* base58str);
void test_encode_decode_base58();

void test_for_hex_initial_print(char *snum);
void test_for_hex_initial();

#endif //_TEST_BIG_INT_H_
