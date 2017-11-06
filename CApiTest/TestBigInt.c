/*
================================================== test_init() ==================================================
BigInt instance's memory address: 0000002AD93539D0
BigInt's base: 1000000000
BigInt's digital of one integer: 9
BigInt->sign is sign(positive[+]/negtive[-]) of integer: + (0)
BigInt->arrlen is length of array of integer: 3
BigInt->arr is array of integer: 0000002AD9359330 = {[0] = 234567890, [1] = 5678901, [2] = 12}
BigInt representation is: '12005678901234567890'
12005678901234567890
-12005678901234567890
================================================== test_init() ==================================================
================================================== test_add_internal() ==================================================
1234567890123456789+12345678901234567890=13580246791358024679
================================================== test_add_internal() ==================================================
================================================== test_del_internal() ==================================================
1234567890123456789-12345678901234567890=-11111111011111111101
12345678901234567890-1234567890123456789=11111111011111111101
================================================== test_del_internal() ==================================================
================================================== test_add() ==================================================
(-1234567890123456789)+(1234567890123456790)=(1)
(1234567890123456789)+(-1234567890123456790)=(-1)
(-1234567890123456789)+(-1234567890123456790)=(-2469135780246913579)
(1234567890123456789)+(1234567890123456790)=(2469135780246913579)
(-1234567890123456790)+(1234567890123456789)=(-1)
(1234567890123456790)+(-1234567890123456789)=(1)
(-1234567890123456790)+(-1234567890123456789)=(-2469135780246913579)
(1234567890123456790)+(1234567890123456789)=(2469135780246913579)
(-1234567890123456789)+(1234567890123456789)=(0)
(1234567890123456789)+(-1234567890123456789)=(0)
(-1234567890123456789)+(-1234567890123456789)=(-2469135780246913578)
(1234567890123456789)+(1234567890123456789)=(2469135780246913578)
================================================== test_add() ==================================================
================================================== test_del() ==================================================
(-1234567890123456789)-(1234567890123456790)=(-2469135780246913579)
(1234567890123456789)-(-1234567890123456790)=(2469135780246913579)
(-1234567890123456789)-(-1234567890123456790)=(1)
(1234567890123456789)-(1234567890123456790)=(-1)
(-1234567890123456790)-(1234567890123456789)=(-2469135780246913579)
(1234567890123456790)-(-1234567890123456789)=(2469135780246913579)
(-1234567890123456790)-(-1234567890123456789)=(-1)
(1234567890123456790)-(1234567890123456789)=(1)
(-1234567890123456789)-(1234567890123456789)=(-2469135780246913578)
(1234567890123456789)-(-1234567890123456789)=(2469135780246913578)
(-1234567890123456789)-(-1234567890123456789)=(0)
(1234567890123456789)-(1234567890123456789)=(0)
================================================== test_del() ==================================================
================================================== test_zero_add_del() ==================================================
add
(-0)+(1234567890123456790)=(1234567890123456790)
(0)+(-1234567890123456790)=(-1234567890123456790)
(-0)+(-1234567890123456790)=(-1234567890123456790)
(0)+(1234567890123456790)=(1234567890123456790)
(-1234567890123456790)+(0)=(-1234567890123456790)
(1234567890123456790)+(-0)=(1234567890123456790)
(-1234567890123456790)+(-0)=(-1234567890123456790)
(1234567890123456790)+(0)=(1234567890123456790)
(-0)+(0)=(0)
(0)+(-0)=(0)
(-0)+(-0)=(0)
(0)+(0)=(0)


del
(-0)-(1234567890123456790)=(-1234567890123456790)
(0)-(-1234567890123456790)=(1234567890123456790)
(-0)-(-1234567890123456790)=(1234567890123456790)
(0)-(1234567890123456790)=(-1234567890123456790)
(-1234567890123456790)-(0)=(-1234567890123456790)
(1234567890123456790)-(-0)=(1234567890123456790)
(-1234567890123456790)-(-0)=(-1234567890123456790)
(1234567890123456790)-(0)=(1234567890123456790)
(-0)-(0)=(0)
(0)-(-0)=(0)
(-0)-(-0)=(0)
(0)-(0)=(0)
================================================== test_zero_add_del() ==================================================
================================================== test_mul_internal() ==================================================
1000000000*1000000000 = 1000000000000000000
999999999*1000000000 = 999999999000000000
1000000000*999999999 = 999999999000000000
999999999*999999999 = 999999998000000001
================================================== test_mul_internal() ==================================================
================================================== test_mul_internal_negtive_zero() ==================================================
-999999999*999999999 = -999999998000000001
999999999*-999999999 = -999999998000000001
-999999999*-999999999 = 999999998000000001
999999999*0 = 0
0*999999999 = 0
0*0 = 0
================================================== test_mul_internal_negtive_zero() ==================================================
================================================== test_mul() ==================================================
1000000000*1000000000 = 1000000000000000000
999999999*1000000000 = 999999999000000000
1000000000*999999999 = 999999999000000000
999999999*999999999 = 999999998000000001
================================================== test_mul() ==================================================
================================================== test_mul_negtive_zero() ==================================================
-999999999*999999999 = -999999998000000001
999999999*-999999999 = -999999998000000001
-999999999*-999999999 = 999999998000000001
999999999*0 = 0
0*999999999 = 0
0*0 = 0
================================================== test_mul_negtive_zero() ==================================================
================================================== test_add_one() ==================================================
999999999+999999999 = 1999999998
999999999+(-999999999) = 0
(-999999999)+999999999 = 0
(-999999999)+(-999999999) = -1999999998
1000000000+1000000000 = 2000000000
1000000000+(-1000000000) = 0
(-1000000000)+1000000000 = 0
(-1000000000)+(-1000000000) = -2000000000
0+999999999 = 999999999
0+(-999999999) = -999999999
0+1000000000 = 1000000000
0+(-1000000000) = -1000000000
999999999+0 = 999999999
(-999999999)+0 = -999999999
1000000000+0 = 1000000000
(-1000000000)+0 = -1000000000
================================================== test_add_one() ==================================================
================================================== test_add_one_func() ==================================================
999999999+999999999 = 1999999998
999999999+(-999999999) = 0
(-999999999)+999999999 = 0
(-999999999)+(-999999999) = -1999999998
1000000000+1000000000 = 2000000000
1000000000+(-1000000000) = 0
(-1000000000)+1000000000 = 0
(-1000000000)+(-1000000000) = -2000000000
0+999999999 = 999999999
0+(-999999999) = -999999999
0+1000000000 = 1000000000
0+(-1000000000) = -1000000000
999999999+0 = 999999999
(-999999999)+0 = -999999999
1000000000+0 = 1000000000
(-1000000000)+0 = -1000000000
================================================== test_add_one_func() ==================================================
================================================== test_del_one() ==================================================
999999999-999999999 = 0
999999999-(-999999999) = 1999999998
(-999999999)-999999999 = -1999999998
(-999999999)-(-999999999) = 0
1000000000-1000000000 = 0
1000000000-(-1000000000) = 2000000000
(-1000000000)-1000000000 = -2000000000
(-1000000000)-(-1000000000) = 0
0-999999999 = -999999999
0-(-999999999) = 999999999
0-1000000000 = -1000000000
0-(-1000000000) = 1000000000
999999999-0 = 999999999
(-999999999)-0 = -999999999
1000000000-0 = 1000000000
(-1000000000)-0 = -1000000000
================================================== test_del_one() ==================================================
================================================== test_add_del_zero_one() ==================================================

del:
0-0 = 0
999999999-999999999 = 0
1000000000-1000000000 = 0
0-999999999 = -999999999
999999999-0 = 999999999
0-1000000000 = -1000000000
1000000000-0 = 1000000000

add:
0+0 = 0
999999999+999999999 = 1999999998
1000000000+1000000000 = 2000000000
0+999999999 = 999999999
999999999+0 = 999999999
0+1000000000 = 1000000000
1000000000+0 = 1000000000
================================================== test_add_del_zero_one() ==================================================
================================================== test_mul_one() ==================================================
12345678901234567890123456789012345678901234567890123456789012345678901234567890*9999999999 = 123456788999999999999999999999999999999999999999999999999999999999999999999999998765432110
1234567890123456789012345678901234567890*9999999999 = 12345678899999999999999999999999999999998765432110
12345678901234567890*9999999999 = 123456788999999999998765432110
12345678901234567890*1 = 12345678901234567890
12345678901234567890*0 = 0
1*9999999999 = 9999999999
0*9999999999 = 0
0*0 = 0
================================================== test_mul_one() ==================================================
================================================== test_compare() ==================================================
0
1000000000000000000
2000000000000000000
3000000000000000000
4000000000000000000
5000000000000000000
6000000000000000000
7000000000000000000
8000000000000000000
9000000000000000000
10000000000000000000
================================================== test_compare() ==================================================
================================================== test_zero_adjust() ==================================================
100000000000000000-100000000000000000=0
sign is: 0
0-100000000000000000=-100000000000000000
0-100000000000000000+100000000000000000=0
sign is: 0
0+100000000000000000=100000000000000000
0+100000000000000000-100000000000000000=0
sign is: 0
0-123456=-123456
0-123456+123456=0
sign is: 0
0+123456=123456
0+123456-123456=0
sign is: 0
0-100000000000000000=-100000000000000000
0-100000000000000000-(-100000000000000000)=0
sign is: 0
0-123456=-123456
0-123456-(-123456)=0
sign is: 0
0*-100000000000000000=0
sign is: 0
0*-123456=0
sign is: 0
================================================== test_zero_adjust() ==================================================
請按任意鍵繼續 . . .
*/

#include "TestBigInt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void test_init() {
	printf("================================================== test_init() ==================================================\n");
	BigInt* bint = bigint_initial_dec_string("12005678901234567890");
	char* str = NULL;

	bigint_print_info(bint);

	str = bigint_print_return_string(bint);
	printf("%s\n", str);
	free(str);

	bigint_cleanup_pointer(&bint);

	bint = bigint_initial_dec_string("-12005678901234567890");

	str = bigint_print_return_string(bint);
	printf("%s\n", str);
	free(str);

	bigint_cleanup_pointer(&bint);
	printf("================================================== test_init() ==================================================\n");
}

void test_add_internal() {
	printf("================================================== test_add_internal() ==================================================\n");
	BigInt* a, *b;
	BigInt* c;
	char* ret;

	a = bigint_initial_dec_string("1234567890123456789");
	b = bigint_initial_dec_string("12345678901234567890");
	c = bigint_add_return_internal(a, b);

	if (c) {
		ret = bigint_print_return_string(a);
		printf("%s", ret);
		free(ret);
		ret = bigint_print_return_string(b);
		printf("+%s=", ret);
		free(ret);
		ret = bigint_print_return_string(c);
		printf("%s\n", ret);
		free(ret);
		bigint_cleanup_pointer(&c);
	}

	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	printf("================================================== test_add_internal() ==================================================\n");
}

void test_del_internal() {
	printf("================================================== test_del_internal() ==================================================\n");
	BigInt* a, *b;
	BigInt* c;
	char* ret;

	a = bigint_initial_dec_string("1234567890123456789");
	b = bigint_initial_dec_string("12345678901234567890");
	c = bigint_del_return_internal(a, b);

	if (c) {
		ret = bigint_print_return_string(a);
		printf("%s", ret);
		free(ret);
		ret = bigint_print_return_string(b);
		printf("-%s=", ret);
		free(ret);
		ret = bigint_print_return_string(c);
		printf("%s\n", ret);
		free(ret);
		bigint_cleanup_pointer(&c);
	}

	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("12345678901234567890");
	b = bigint_initial_dec_string("1234567890123456789");
	c = bigint_del_return_internal(a, b);

	if (c) {
		ret = bigint_print_return_string(a);
		printf("%s", ret);
		free(ret);
		ret = bigint_print_return_string(b);
		printf("-%s=", ret);
		free(ret);
		ret = bigint_print_return_string(c);
		printf("%s\n", ret);
		free(ret);
		bigint_cleanup_pointer(&c);
	}

	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	printf("================================================== test_del_internal() ==================================================\n");
}

void test_add() {
	printf("================================================== test_add() ==================================================\n");
	char* ret = NULL;

	ret = add_dec_integer("-1234567890123456789", "1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456789", "1234567890123456790", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456789", "-1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456789", "-1234567890123456790", ret);
	free(ret);
	ret = add_dec_integer("-1234567890123456789", "-1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456789", "-1234567890123456790", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456789", "1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456789", "1234567890123456790", ret);
	free(ret);

	ret = add_dec_integer("-1234567890123456790", "1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456790", "1234567890123456789", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456790", "-1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456790", "-1234567890123456789", ret);
	free(ret);
	ret = add_dec_integer("-1234567890123456790", "-1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456790", "-1234567890123456789", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456790", "1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456790", "1234567890123456789", ret);
	free(ret);

	ret = add_dec_integer("-1234567890123456789", "1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456789", "1234567890123456789", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456789", "-1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456789", "-1234567890123456789", ret);
	free(ret);
	ret = add_dec_integer("-1234567890123456789", "-1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456789", "-1234567890123456789", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456789", "1234567890123456789");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456789", "1234567890123456789", ret);
	free(ret);
	printf("================================================== test_add() ==================================================\n");
}

void test_del() {
	printf("================================================== test_del() ==================================================\n");
	char* ret = NULL;

	ret = del_dec_integer("-1234567890123456789", "1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456789", "1234567890123456790", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456789", "-1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456789", "-1234567890123456790", ret);
	free(ret);
	ret = del_dec_integer("-1234567890123456789", "-1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456789", "-1234567890123456790", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456789", "1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456789", "1234567890123456790", ret);
	free(ret);


	ret = del_dec_integer("-1234567890123456790", "1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456790", "1234567890123456789", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456790", "-1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456790", "-1234567890123456789", ret);
	free(ret);
	ret = del_dec_integer("-1234567890123456790", "-1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456790", "-1234567890123456789", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456790", "1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456790", "1234567890123456789", ret);
	free(ret);


	ret = del_dec_integer("-1234567890123456789", "1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456789", "1234567890123456789", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456789", "-1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456789", "-1234567890123456789", ret);
	free(ret);
	ret = del_dec_integer("-1234567890123456789", "-1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456789", "-1234567890123456789", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456789", "1234567890123456789");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456789", "1234567890123456789", ret);
	free(ret);
	printf("================================================== test_del() ==================================================\n");
}

void test_zero_add_del() {
	printf("================================================== test_zero_add_del() ==================================================\n");
	char* ret = NULL;

	printf("add\n");
	ret = add_dec_integer("-0", "1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "-0", "1234567890123456790", ret);
	free(ret);
	ret = add_dec_integer("0", "-1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "0", "-1234567890123456790", ret);
	free(ret);
	ret = add_dec_integer("-0", "-1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "-0", "-1234567890123456790", ret);
	free(ret);
	ret = add_dec_integer("0", "1234567890123456790");
	printf("(%s)+(%s)=(%s)\n", "0", "1234567890123456790", ret);
	free(ret);

	ret = add_dec_integer("-1234567890123456790", "0");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456790", "0", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456790", "-0");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456790", "-0", ret);
	free(ret);
	ret = add_dec_integer("-1234567890123456790", "-0");
	printf("(%s)+(%s)=(%s)\n", "-1234567890123456790", "-0", ret);
	free(ret);
	ret = add_dec_integer("1234567890123456790", "0");
	printf("(%s)+(%s)=(%s)\n", "1234567890123456790", "0", ret);
	free(ret);

	ret = add_dec_integer("-0", "0");
	printf("(%s)+(%s)=(%s)\n", "-0", "0", ret);
	free(ret);
	ret = add_dec_integer("0", "-0");
	printf("(%s)+(%s)=(%s)\n", "0", "-0", ret);
	free(ret);
	ret = add_dec_integer("-0", "-0");
	printf("(%s)+(%s)=(%s)\n", "-0", "-0", ret);
	free(ret);
	ret = add_dec_integer("0", "0");
	printf("(%s)+(%s)=(%s)\n", "0", "0", ret);
	free(ret);
	printf("\n\ndel\n");

	ret = del_dec_integer("-0", "1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "-0", "1234567890123456790", ret);
	free(ret);
	ret = del_dec_integer("0", "-1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "0", "-1234567890123456790", ret);
	free(ret);
	ret = del_dec_integer("-0", "-1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "-0", "-1234567890123456790", ret);
	free(ret);
	ret = del_dec_integer("0", "1234567890123456790");
	printf("(%s)-(%s)=(%s)\n", "0", "1234567890123456790", ret);
	free(ret);


	ret = del_dec_integer("-1234567890123456790", "0");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456790", "0", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456790", "-0");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456790", "-0", ret);
	free(ret);
	ret = del_dec_integer("-1234567890123456790", "-0");
	printf("(%s)-(%s)=(%s)\n", "-1234567890123456790", "-0", ret);
	free(ret);
	ret = del_dec_integer("1234567890123456790", "0");
	printf("(%s)-(%s)=(%s)\n", "1234567890123456790", "0", ret);
	free(ret);

	ret = del_dec_integer("-0", "0");
	printf("(%s)-(%s)=(%s)\n", "-0", "0", ret);
	free(ret);
	ret = del_dec_integer("0", "-0");
	printf("(%s)-(%s)=(%s)\n", "0", "-0", ret);
	free(ret);
	ret = del_dec_integer("-0", "-0");
	printf("(%s)-(%s)=(%s)\n", "-0", "-0", ret);
	free(ret);
	ret = del_dec_integer("0", "0");
	printf("(%s)-(%s)=(%s)\n", "0", "0", ret);
	free(ret);
	printf("================================================== test_zero_add_del() ==================================================\n");
}

void test_mul_internal() {
	printf("================================================== test_mul_internal() ==================================================\n");
	BigInt* a, *b;
	BigInt* c;
	char* ret = NULL;

	a = bigint_initial_dec_string("1000000000");
	b = bigint_initial_dec_string("1000000000");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("1000000000*1000000000 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("999999999");
	b = bigint_initial_dec_string("1000000000");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("999999999*1000000000 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("1000000000");
	b = bigint_initial_dec_string("999999999");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("1000000000*999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("999999999");
	b = bigint_initial_dec_string("999999999");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("999999999*999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);
	printf("================================================== test_mul_internal() ==================================================\n");
}

void test_mul_internal_negtive_zero() {
	printf("================================================== test_mul_internal_negtive_zero() ==================================================\n");
	BigInt* a, *b;
	BigInt* c;
	char* ret = NULL;

	a = bigint_initial_dec_string("-999999999");
	b = bigint_initial_dec_string("999999999");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("-999999999*999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("999999999");
	b = bigint_initial_dec_string("-999999999");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("999999999*-999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("-999999999");
	b = bigint_initial_dec_string("-999999999");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("-999999999*-999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("999999999");
	b = bigint_initial_dec_string("0");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("999999999*0 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("0");
	b = bigint_initial_dec_string("999999999");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("0*999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);

	a = bigint_initial_dec_string("0");
	b = bigint_initial_dec_string("0");
	c = bigint_mul(a, b);
	ret = bigint_print_return_string(c);
	printf("0*0 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	bigint_cleanup_pointer(&c);
	printf("================================================== test_mul_internal_negtive_zero() ==================================================\n");
}

void test_mul() {
	printf("================================================== test_mul() ==================================================\n");
	char* ret = NULL;

	ret = mul_dec_integer("1000000000", "1000000000");
	printf("1000000000*1000000000 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("999999999", "1000000000");
	printf("999999999*1000000000 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("999999999", "1000000000");
	printf("1000000000*999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("999999999", "999999999");
	printf("999999999*999999999 = %s\n", ret);
	free(ret);
	printf("================================================== test_mul() ==================================================\n");
}

void test_mul_negtive_zero() {
	printf("================================================== test_mul_negtive_zero() ==================================================\n");
	char* ret = NULL;

	ret = mul_dec_integer("-999999999", "999999999");
	printf("-999999999*999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("999999999", "-999999999");
	printf("999999999*-999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("-999999999", "-999999999");
	printf("-999999999*-999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("999999999", "0");
	printf("999999999*0 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("0", "999999999");
	printf("0*999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer("0", "0");
	printf("0*0 = %s\n", ret);
	free(ret);
	printf("================================================== test_mul_negtive_zero() ==================================================\n");
}

void test_add_one() {
	printf("================================================== test_add_one() ==================================================\n");
	BigInt* a;
	BigInt* b;
	char* ret = NULL;

	a = bigint_initial_dec_string("999999999");
	b = bigint_add_one(a, 999999999i64);
	ret = bigint_print_return_string(b);
	printf("999999999+999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);


	a = bigint_initial_dec_string("999999999");
	b = bigint_add_one(a, -999999999i64);
	ret = bigint_print_return_string(b);
	printf("999999999+(-999999999) = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("-999999999");
	b = bigint_add_one(a, 999999999i64);
	ret = bigint_print_return_string(b);
	printf("(-999999999)+999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("-999999999");
	b = bigint_add_one(a, -999999999i64);
	ret = bigint_print_return_string(b);
	printf("(-999999999)+(-999999999) = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("1000000000");
	b = bigint_add_one(a, 1000000000i64);
	ret = bigint_print_return_string(b);
	printf("1000000000+1000000000 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("1000000000");
	b = bigint_add_one(a, -1000000000i64);
	ret = bigint_print_return_string(b);
	printf("1000000000+(-1000000000) = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("-1000000000");
	b = bigint_add_one(a, 1000000000i64);
	ret = bigint_print_return_string(b);
	printf("(-1000000000)+1000000000 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("-1000000000");
	b = bigint_add_one(a, -1000000000i64);
	ret = bigint_print_return_string(b);
	printf("(-1000000000)+(-1000000000) = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("0");
	b = bigint_add_one(a, 999999999i64);
	ret = bigint_print_return_string(b);
	printf("0+999999999 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("0");
	b = bigint_add_one(a, -999999999i64);
	ret = bigint_print_return_string(b);
	printf("0+(-999999999) = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("0");
	b = bigint_add_one(a, 1000000000i64);
	ret = bigint_print_return_string(b);
	printf("0+1000000000 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("0");
	b = bigint_add_one(a, -1000000000i64);
	ret = bigint_print_return_string(b);
	printf("0+(-1000000000) = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("999999999");
	b = bigint_add_one(a, 0i64);
	ret = bigint_print_return_string(b);
	printf("999999999+0 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("-999999999");
	b = bigint_add_one(a, 0i64);
	ret = bigint_print_return_string(b);
	printf("(-999999999)+0 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("1000000000");
	b = bigint_add_one(a, 0i64);
	ret = bigint_print_return_string(b);
	printf("1000000000+0 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("-1000000000");
	b = bigint_add_one(a, 0i64);
	ret = bigint_print_return_string(b);
	printf("(-1000000000)+0 = %s\n", ret);
	free(ret);
	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);
	printf("================================================== test_add_one() ==================================================\n");
}

void test_add_one_func() {
	printf("================================================== test_add_one_func() ==================================================\n");
	char* ret = NULL;

	ret = add_dec_integer_one("999999999", 999999999i64);
	printf("999999999+999999999 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("999999999", -999999999i64);
	printf("999999999+(-999999999) = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("-999999999", 999999999i64);
	printf("(-999999999)+999999999 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("-999999999", -999999999i64);
	printf("(-999999999)+(-999999999) = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("1000000000", 1000000000i64);
	printf("1000000000+1000000000 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("1000000000", -1000000000i64);
	printf("1000000000+(-1000000000) = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("-1000000000", 1000000000i64);
	printf("(-1000000000)+1000000000 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("-1000000000", -1000000000i64);
	printf("(-1000000000)+(-1000000000) = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("0", 999999999i64);
	printf("0+999999999 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("0", -999999999i64);
	printf("0+(-999999999) = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("0", 1000000000i64);
	printf("0+1000000000 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("0", -1000000000i64);
	printf("0+(-1000000000) = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("999999999", 0i64);
	printf("999999999+0 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("-999999999", 0i64);
	printf("(-999999999)+0 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("1000000000", 0i64);
	printf("1000000000+0 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("-1000000000", 0i64);
	printf("(-1000000000)+0 = %s\n", ret);
	free(ret);
	printf("================================================== test_add_one_func() ==================================================\n");
}

void test_del_one() {
	printf("================================================== test_del_one() ==================================================\n");
	char* ret = NULL;

	ret = del_dec_integer_one("999999999", 999999999i64);
	printf("999999999-999999999 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("999999999", -999999999i64);
	printf("999999999-(-999999999) = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("-999999999", 999999999i64);
	printf("(-999999999)-999999999 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("-999999999", -999999999i64);
	printf("(-999999999)-(-999999999) = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("1000000000", 1000000000i64);
	printf("1000000000-1000000000 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("1000000000", -1000000000i64);
	printf("1000000000-(-1000000000) = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("-1000000000", 1000000000i64);
	printf("(-1000000000)-1000000000 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("-1000000000", -1000000000i64);
	printf("(-1000000000)-(-1000000000) = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("0", 999999999i64);
	printf("0-999999999 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("0", -999999999i64);
	printf("0-(-999999999) = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("0", 1000000000i64);
	printf("0-1000000000 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("0", -1000000000i64);
	printf("0-(-1000000000) = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("999999999", 0i64);
	printf("999999999-0 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("-999999999", 0i64);
	printf("(-999999999)-0 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("1000000000", 0i64);
	printf("1000000000-0 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("-1000000000", 0i64);
	printf("(-1000000000)-0 = %s\n", ret);
	free(ret);
	printf("================================================== test_del_one() ==================================================\n");
}

void test_add_del_zero_one() {
	printf("================================================== test_add_del_zero_one() ==================================================\n");
	char* ret = NULL;

	printf("\ndel:\n");
	ret = add_dec_integer_one("0", 0i64);
	printf("0-0 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("999999999", 999999999i64);
	printf("999999999-999999999 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("1000000000", 1000000000i64);
	printf("1000000000-1000000000 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("0", 999999999i64);
	printf("0-999999999 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("999999999", 0i64);
	printf("999999999-0 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("0", 1000000000i64);
	printf("0-1000000000 = %s\n", ret);
	free(ret);

	ret = del_dec_integer_one("1000000000", 0i64);
	printf("1000000000-0 = %s\n", ret);
	free(ret);

	printf("\nadd:\n");
	ret = add_dec_integer_one("0", 0i64);
	printf("0+0 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("999999999", 999999999i64);
	printf("999999999+999999999 = %s\n", ret);
	free(ret);
	ret = add_dec_integer_one("1000000000", 1000000000i64);
	printf("1000000000+1000000000 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("0", 999999999i64);
	printf("0+999999999 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("999999999", 0i64);
	printf("999999999+0 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("0", 1000000000i64);
	printf("0+1000000000 = %s\n", ret);
	free(ret);

	ret = add_dec_integer_one("1000000000", 0i64);
	printf("1000000000+0 = %s\n", ret);
	free(ret);
	printf("================================================== test_add_del_zero_one() ==================================================\n");
}

void test_mul_one() {
	char *ret = NULL;
	printf("================================================== test_mul_one() ==================================================\n");
	ret = mul_dec_integer_one("12345678901234567890123456789012345678901234567890123456789012345678901234567890", 9999999999i64);
	printf("12345678901234567890123456789012345678901234567890123456789012345678901234567890*9999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("1234567890123456789012345678901234567890", 9999999999i64);
	printf("1234567890123456789012345678901234567890*9999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("12345678901234567890", 9999999999i64);
	printf("12345678901234567890*9999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("12345678901234567890", 1i64);
	printf("12345678901234567890*1 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("12345678901234567890", 0i64);
	printf("12345678901234567890*0 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("1", 9999999999i64);
	printf("1*9999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("0", 9999999999i64);
	printf("0*9999999999 = %s\n", ret);
	free(ret);

	ret = mul_dec_integer_one("0", 0i64);
	printf("0*0 = %s\n", ret);
	free(ret);
	printf("================================================== test_mul_one() ==================================================\n");
}

// allocation problem?
void test_compare() {
	BigInt* result = NULL;
	BigInt* end = NULL;
	BigInt* added = NULL;
	BigInt* tmp = NULL;
	char* str = NULL;
	printf("================================================== test_compare() ==================================================\n");

	end = bigint_initial_dec_string("10000000000000000000");
	added = bigint_initial_dec_string("1000000000000000000");
	for (result = bigint_initial_dec_string("0");
		bigint_compare(result, end) < 0; ) {
		str = bigint_print_return_string(result);
		printf("%s\n", str);

		free(str);

		// caculate next
		tmp = bigint_add(result, added);
		bigint_cleanup_pointer(&result);
		result = tmp;
	}

	if (result) {
		str = bigint_print_return_string(result);
		printf("%s\n", str);

		free(str);
		bigint_cleanup_pointer(&result);
	}

	printf("================================================== test_compare() ==================================================\n");
}



// TODO: from negtive to zero bug, del & add has problem (-bint+bint=-0, problem is add)
void test_zero_adjust() {
	BigInt* a = NULL;
	BigInt* b = NULL;
	BigInt* c = NULL;
	char* str = NULL;

	printf("================================================== test_zero_adjust() ==================================================\n");
	a = bigint_initial_dec_string("100000000000000000");
	b = bigint_initial_dec_string("100000000000000000");

	c = bigint_del(a, b);
	str = bigint_print_return_string(c);
	printf("100000000000000000-100000000000000000=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	a = bigint_del(c, b);
	str = bigint_print_return_string(a);
	printf("0-100000000000000000=%s\n", str);
	free(str);
	bigint_cleanup_pointer(&c);

	c = bigint_add(a, b);
	str = bigint_print_return_string(c);
	printf("0-100000000000000000+100000000000000000=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	a = bigint_add(c, b);
	str = bigint_print_return_string(a);
	printf("0+100000000000000000=%s\n", str);
	free(str);
	bigint_cleanup_pointer(&c);

	c = bigint_del(a, b);
	str = bigint_print_return_string(c);
	printf("0+100000000000000000-100000000000000000=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	a = bigint_del_one(c, 123456i64);
	str = bigint_print_return_string(a);
	printf("0-123456=%s\n", str);
	free(str);
	bigint_cleanup_pointer(&c);

	c = bigint_add_one(a, 123456i64);
	str = bigint_print_return_string(c);
	printf("0-123456+123456=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	a = bigint_add_one(c, 123456i64);
	str = bigint_print_return_string(a);
	printf("0+123456=%s\n", str);
	free(str);
	bigint_cleanup_pointer(&c);

	c = bigint_del_one(a, 123456i64);
	str = bigint_print_return_string(c);
	printf("0+123456-123456=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	b->sign = 1;
	a = bigint_add(c, b);
	str = bigint_print_return_string(a);
	printf("0-100000000000000000=%s\n", str);
	free(str);
	bigint_cleanup_pointer(&c);

	c = bigint_del(a, b);
	str = bigint_print_return_string(c);
	printf("0-100000000000000000-(-100000000000000000)=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	b->sign = 1;
	a = bigint_add_one(c, -123456i64);
	str = bigint_print_return_string(a);
	printf("0-123456=%s\n", str);
	free(str);
	bigint_cleanup_pointer(&c);

	c = bigint_del_one(a, -123456i64);
	str = bigint_print_return_string(c);
	printf("0-123456-(-123456)=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	b->sign = 1;
	a = bigint_mul(c, b);
	str = bigint_print_return_string(a);
	printf("0*-100000000000000000=%s\n", str);
	printf("sign is: %lld\n", a->sign);
	free(str);
	bigint_cleanup_pointer(&c);

	a->sign = 0;
	c = bigint_mul_one(a, -123456i64);
	str = bigint_print_return_string(c);
	printf("0*-123456=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	a = bigint_add_one(c, -1234567i64);
	bigint_div_one_into(a, 123456i64);
	str = bigint_print_return_string(a);
	printf("-1234567/123456=%s\n", str);
	printf("sign is: %lld\n", a->sign);
	free(str);
	bigint_cleanup_pointer(&c);

	//c = bigint_add_one(a, -123456i64);
	c = bigint_div_one_return_quotient(a, 123456i64);
	str = bigint_print_return_string(c);
	printf("-1234567/123456/123456=%s\n", str);
	printf("sign is: %lld\n", c->sign);
	free(str);
	bigint_cleanup_pointer(&a);

	// TODO: zero adjust in every operator

	bigint_cleanup_pointer(&c);
	bigint_cleanup_pointer(&b);


	printf("================================================== test_zero_adjust() ==================================================\n");
}

void test_div() {
	BigInt* a, *b;
	BigInt** c = NULL;

	char *str1 = NULL, *str2 = NULL;

	printf("================================================== test_div() ==================================================\n");

	a = bigint_initial_dec_string("12345678901234567890");
	b = bigint_initial_dec_string("1234567");

	c = bigint_div(a, b);

	str1 = bigint_print_return_string(c[0]);
	str2 = bigint_print_return_string(c[1]);

	printf("12345678901234567890/1234567=%s...%s\n", str1, str2);

	free(str1);
	free(str2);
	bigint_cleanup_pointer(&c[0]);
	bigint_cleanup_pointer(&c[1]);
	free(c);
	c = NULL;

	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("1234567890123456789012345678901234567890");
	b = bigint_initial_dec_string("12345678");

	c = bigint_div(a, b);

	str1 = bigint_print_return_string(c[0]);
	str2 = bigint_print_return_string(c[1]);

	printf("1234567890123456789012345678901234567890/12345678=%s...%s\n", str1, str2);

	free(str1);
	free(str2);
	bigint_cleanup_pointer(&c[0]);
	bigint_cleanup_pointer(&c[1]);
	free(c);
	c = NULL;

	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	a = bigint_initial_dec_string("10");
	b = bigint_initial_dec_string("10");

	c = bigint_div(a, b);

	str1 = bigint_print_return_string(c[0]);
	str2 = bigint_print_return_string(c[1]);

	printf("10/10=%s...%s\n", str1, str2);

	free(str1);
	free(str2);
	bigint_cleanup_pointer(&c[0]);
	bigint_cleanup_pointer(&c[1]);
	free(c);
	c = NULL;

	bigint_cleanup_pointer(&a);
	bigint_cleanup_pointer(&b);

	printf("================================================== test_div() ==================================================\n");
}

void test_div_func() {
	char** result = NULL;
	printf("================================================== test_div_func() ==================================================\n");

	result = div_dec_integer("12345678901234567890", "1234567");
	printf("12345678901234567890/1234567 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("-12345678901234567890", "1234567");
	printf("-12345678901234567890/1234567 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("12345678901234567890", "-1234567");
	printf("12345678901234567890/-1234567 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("-12345678901234567890", "-1234567");
	printf("-12345678901234567890/-1234567 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	// https://gmatclub.com/forum/finding-the-remainder-when-dividing-negative-integers-88839.html
	// 
	result = div_dec_integer("11", "5");
	printf("11/5 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("-11", "5");
	printf("-11/5 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("11", "-5");
	printf("11/-5 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("-11", "-5");
	printf("-11/-5 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("5", "11");
	printf("5/11 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("-5", "11");
	printf("-5/11 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("5", "-11");
	printf("5/-11 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	result = div_dec_integer("-5", "-11");
	printf("-5/-11 == %s ... %s\n ", result[0], result[1]);
	free(result[0]);
	free(result[1]);
	free(result);

	printf("================================================== test_div_func() ==================================================\n");
}

void test_power() {
	char* strs = NULL;
	int i;

	printf("================================================== test_power() ==================================================\n");

	strs = pwd_dec_integer("2", "100");
	printf("2^100=%s\n", strs);
	free(strs);

	strs = pwd_dec_integer_one("2", 100);
	printf("2^100=%s\n", strs);
	free(strs);

	for (i = 1; i < 100; i++) {
		strs = pwd_dec_integer_one("2", i);
		printf("2^%d=%s\n", i, strs);
		free(strs);
	}

	strs = pwd_dec_integer("2", "10000");
	printf("2^10000=%s\n", strs);
	free(strs);

	strs = pwd_dec_integer_one("2", 10000);
	printf("2^10000=%s\n", strs);
	free(strs);

	printf("================================================== test_power() ==================================================\n");
}

/*
def fac(n):
if n <=1:
return 1
else:
return fac(n-1)*n

def com(n,m):
return fac(n)/(fac(m)*fac(n-m))

for i in range(0,101):
for j in range(0, i+1):
print ("c^%d_%d = %d" % (i,j,com(i,j)))

differ:
https://www.diffchecker.com/diff

*/
void test_c_100_100() {
	BigInt* bint = NULL;
	char* strs = NULL;
	int i, j;

	for (i = 0; i <= 100; i++) {
		for (j = 0; j <= i; j++) {
			bint = bigint_combination(i, j);

			strs = bigint_print_return_string(bint);
			printf("c^%d_%d = %s\n", i, j, strs);
			free(strs);

			bigint_cleanup_pointer(&bint);
		}
	}
}

void test_combine() {
	/*BigInt* bint = NULL;
	char* strs = NULL;
	int n, m;*/

	printf("================================================== test_combine() ==================================================\n");

	/*n = 53;
	m = 20;

	bint = bigint_combination(n,m);

	strs = bigint_print_return_string(bint);
	printf("c^%d_%d = %s\n", n, m, strs);
	free(strs);

	bigint_cleanup_pointer(&bint);*/

	//test_c_100_100();

	BigInt* bint = NULL;
	char* strs = NULL;
	int i, j;
	i = 100;
	for (j = 0; j <= i; j++) {
		bint = bigint_combination(i, j);

		strs = bigint_print_return_string(bint);
		printf("c^%d_%d = %s\n", i, j, strs);
		free(strs);

		bigint_cleanup_pointer(&bint);
	}

	printf("================================================== test_combine() ==================================================\n");
}

void all_test() {
	test_init();

	test_add_internal();
	test_del_internal();
	test_add();
	test_del();

	test_zero_add_del();

	test_mul_internal();
	test_mul_internal_negtive_zero();

	test_mul();
	test_mul_negtive_zero();

	test_add_one();
	test_add_one_func();

	test_del_one();

	test_add_del_zero_one();

	test_mul_one();

	test_compare();

	test_zero_adjust();

	// div test
	test_div();

	test_div_func();

	test_power();

	test_combine();
}

// =================================================================================== debug

void test_for_divs(char* sa, char* sb) {
	char** result = NULL;

	if (sa && sb) {
		result = div_dec_integer(sa, sb);
		if (result) {
			printf("%s/%s = %s ... %s\n", sa, sb, result[0], result[1]);
			free(result[0]);
			free(result[1]);
			free(result);
		}
	}
}

void test_for_bugs() {
	// bug #1 
	test_for_divs("1234567890000000000", "1234567890");

	// bug #2 -> divide by zero
	test_for_divs("123456789", "0");
	test_for_divs("-123456789", "0");
}

void test_for_initial_one_base() {
	BigInt * bigint = bigint_initial_ten_base_one(12345678, 10);

	printf("12345678*10^10 = "); bigint_print(bigint); printf("\n");

	bigint_cleanup_pointer(&bigint);
}

void test_sqrt(char* number) {
	BigInt* bigint = bigint_initial_dec_string(number);
	arrtype head = bigint_length(bigint) - 1;
	arrtype digital_back = 0;
	BigInt* tmp = NULL, *tmp2 = NULL;

	// get first two number 
	arrtype headvalue = 0;
	if (head > 1) {
		headvalue = bigint->arr[head] * bigint->base + bigint->arr[head - 1];
		digital_back = (head - 1)*bigint->digital;
		if (((head - 1)*bigint->digital) % 2 == 1) { // odd value -> root will odd, not direct method for big sqrt
			digital_back++;
			headvalue /= 10;
		}

		// get first value of sqrt
		tmp = bigint_initial_ten_base_one(headvalue/2, digital_back/2);

		//printf("sqrt(%s) = ", number); bigint_print(tmp); printf("\n"); system("pause");

		while (1) {
			tmp2 = bigint_duplicate(tmp);
			bigint_mul_into(tmp2, tmp); // value^2
			bigint_add_into(tmp2, bigint);
			bigint_div_into(tmp2, tmp);
			bigint_div_one_into(tmp2, 2);

			if (bigint_compare(tmp, tmp2) == 0) {
				bigint_cleanup_pointer(&tmp2);
				break;
			}

			bigint_replace(tmp, tmp2);
			tmp2 = NULL;
			//printf("sqrt(%s) = ", number); bigint_print(tmp); printf("\n"); system("pause");
		}
		bigint_replace(bigint, tmp);

	}
	else if (head == 1) {
		headvalue = bigint->arr[head] * bigint->base + bigint->arr[head - 1];
		bigint->arr[head] = 0;
		bigint->arr[head - 1] = (int)sqrt(headvalue);
	}
	else {
		bigint->arr[head] = (int)sqrt(bigint->arr[head]);
	}

	// do somthing when done
	printf("sqrt(%s) = ", number); bigint_print(bigint); printf("\n"); //system("pause");

	bigint_cleanup_pointer(&bigint);
}

void test_for_sqrt() {
	test_sqrt("1234567890000000000");
	test_sqrt("1234567890000000000000000000");
}

char* base256_encode(char* str) {
	int i;
	BigInt* bint = NULL;
	char* cstr = NULL;

	bint = bigint_initial_dec_string("0");

	for (i = 0; str[i]; i++) {
		bigint_mul_one_into(bint, 256);
		bigint_add_one_into(bint, str[i]);
	}

	cstr = bigint_print_return_string(bint);

	bigint_cleanup_pointer(&bint);

	return cstr;
}

char* base256_decode(char* str) {
	arrtype i = 0, j;
	BigInt** result = NULL;
	BigInt* bint = NULL;
	BigInt* zero = NULL;
	char* cstr = NULL;

	bint = bigint_initial_dec_string(str);
	zero = bigint_initial_dec_string("0");

	cstr = (char*)malloc(sizeof(char)*((bint->arrlen*bint->digital) / 2)); // 256 > 100

	if (cstr) {

		for (i = 0; bigint_compare(bint, zero) != 0; i++) {
			result = bigint_div_one(bint, 256);
			cstr[i] = (char)(int)(result[1]->arr[0]);
			bigint_replace(bint, result[0]);
			bigint_cleanup_pointer(result + 1);
			free(result);
		}

		for (j = 0; j <= (i - 2) / 2; j++) {
			cstr[j] ^= cstr[i - j - 1];
			cstr[i - j - 1] ^= cstr[j];
			cstr[j] ^= cstr[i - j - 1];
		}
		cstr[i] = '\0';

		bigint_cleanup_pointer(&bint);
		bigint_cleanup_pointer(&zero);

	}

	return cstr;
}

void test_encode_decode_base256() {
	printf("base256 encode of test: %s\n", base256_encode("test"));
	printf("base256 decode of test: %s\n", base256_decode(base256_encode("test")));
	printf("base256 encode of test1: %s\n", base256_encode("test1"));
	printf("base256 decode of test1: %s\n", base256_decode(base256_encode("test1")));

	printf("base256 encode^3 of test1: %s\n", base256_encode(base256_encode(base256_encode("test1"))));
	printf("base256 decode^3 of test1: %s\n", base256_decode(base256_decode(base256_decode(base256_encode(base256_encode(base256_encode("test1")))))));
}

void test_permutation_problem() {

	char* total_count = NULL;
	// I have 3 argument
	// arg1 : 4
	// arg2 : 5
	// arg3 : 6
	printf("count of arg1: 2\n");
	printf("count of arg2: 1\n");
	printf("count of arg3: 5\n");

	printf("count of arg4: 4\n");
	printf("count of arg5: 3\n");
	printf("count of arg6: 1\n");
	total_count = pwd_dec_integer_one("555", 6);

	printf("total %s\n", total_count);

	free(total_count);
}

void test_q56() {
	BigInt* a = NULL;
	BigInt* c = NULL;
	int max = 0;
	int maxi = 0;
	int maxj = 0;
	int total = 0;

	int i, j, k;
	char* strs = NULL;
	char tstr[100] = "";

	for (i = 2; i<100; i++) {

		a = bigint_initial_one(i);

		for (j = 2; j<100; j++) {
			c = bigint_power_one(a, j);
			strs = bigint_print_return_string(c);
			//printf("%d^%d=%s\n",i,j,strs);
			total = 0;
			for (k = 0; strs[k]; k++) {
				total += strs[k] - '0';
			}
			if (total > max) {
				max = total;
				maxi = i;
				maxj = j;
			}
			//free(strs);
			bigint_cleanup_pointer(&c);
		}

		bigint_cleanup_pointer(&a);
	}
	BigInt* tmp = NULL;
	c = bigint_initial_one(maxi);
	tmp = bigint_power_one(c, maxj);
	strs = bigint_print_return_string(tmp);
	printf("max: %d %s\n ", max, strs);
	bigint_cleanup_pointer(&c);
	bigint_cleanup_pointer(&tmp);
	free(strs);
}

arrtype log10_power(arrtype n, arrtype m) {
	BigInt* bint = NULL;
	char* strs = NULL;
	arrtype length = 0;

	bint = bigint_initial_one(n);
	bigint_power_one_into(bint, m);
	strs = bigint_print_return_string(bint);
	printf("%lld ^ %lld = %s\n", n, m, strs);
	length = strlen(strs);
	free(strs);
	bigint_cleanup_pointer(&bint);

	return length;
}

void test_q63() {
	arrtype i, j;
	arrtype power_len = 0;
	arrtype count = 0; // 0 1 2 3 4 5 6 7 8 9 ^ 1 => 1 => 10

	for (i = 1; i <= 10; i++) {
		printf("test %lld\n", i);
		for (j = 1; ; j++) {
			power_len = log10_power(i, j);
			if (power_len == j) {
				printf("> %lld ^ %lld\n", i, j);
				count++;
			}
			else if (i == 0) {
				//printf("end at i == 0\n");
				break;
			}
			else  if ((i == 1) || (j != 0)) {
				//printf("end at (i == 1) || (j!=0)\n");
				break;
			}

		}
	}
	printf("%lld\n", count);
}



BOOL check_negtive(BigInt* bint) {
	int i;
	if (bint) {
		for (i = 0; i < bint->arrlen; i++) {
			if (bint->arr[i] < 0) {
				return TRUE;
			}
		}

	}
	return FALSE;
}



void test_q53() {
	BigInt* bint = NULL;
	char* strs = NULL;
	int i, j;

	arrtype count = 0;

	for (i = 1; i <= 100; i++) {
		for (j = 0; j <= i; j++) {
			bint = bigint_combination(i, j);

			/*strs = bigint_print_return_string(bint);
			printf("c^%d_%d = %s\n", i, j, strs);
			free(strs);*/
			if (bigint_compare_one(bint, 1000000)>0) {
				count++;
			}

			bigint_cleanup_pointer(&bint);
		}
	}
	printf("count value > 1000000: %lld\n", count);
}

arrtype bigint_convert_native(BigInt* bint) {
	arrtype value = 0, i;
	if (__bigint_magic_assert(bint)) {
		for (i = bint->arrlen - 1; i >= 0; i--) {
			value = value * bint->base + bint->arr[i];
		}
	}
	return value;
}

char* base58_encode(char* rawstr) {
	char* convert = "123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz";
	int i;
	BigInt* bint = NULL;
	BigInt* reminder = NULL;
	char* cstr = NULL;
	int now;

	bint = bigint_initial_dec_string("0");

	for (i = 0; rawstr[i]; i++) {
		bigint_mul_one_into(bint, 256);
		bigint_add_one_into(bint, rawstr[i]);
	}

	cstr = (char*)malloc(sizeof(char)*(bint->arrlen*bint->digital * 2));
	if (cstr) {
		now = 0;
		while (!bigint_iszero(bint)) {
			reminder = bigint_div_one_into_return_reminder(bint, 58);
			cstr[now++] = convert[(int)bigint_convert_native(reminder)];
			bigint_cleanup_pointer(&reminder);
		}
		cstr[now] = '\0';

		for (i = 0; i < (now / 2); i++) {
			cstr[i] ^= cstr[now - i - 1];
			cstr[now - i - 1] ^= cstr[i];
			cstr[i] ^= cstr[now - i - 1];
		}

		bigint_cleanup_pointer(&bint);
	}

	return cstr;
}

char* base58_decode(char* base58str) {
	char* convert = "123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz";
	char convert_array[256] = "";
	char* result = NULL;
	int i, top = 0;
	BigInt* bint = NULL;
	BigInt* tmp = NULL;

	// convert to direct access array
	for (i = 0; i < 256; i++) {
		convert_array[i] = '\0';
	}
	for (i = 0; convert[i]; i++) {
		convert_array[convert[i]] = i;
	}

	// convert to big number
	bint = bigint_initial_dec_string("0");
	for (i = 0; base58str[i]; i++) {
		bigint_mul_one_into(bint, 58);
		bigint_add_one_into(bint, convert_array[base58str[i]]);
	}

	result = (char*)malloc(sizeof(char)*(bint->arrlen*bint->digital + 1));

	if (result) {

		while (!bigint_iszero(bint)) {
			tmp = bigint_div_one_into_return_reminder(bint, 256);
			result[top++] = bigint_convert_native(tmp);
			bigint_cleanup_pointer(&tmp);
		}
		result[top] = '\0';

		for (i = 0; i < (top / 2); i++) {
			result[i] ^= result[top - i - 1];
			result[top - i - 1] ^= result[i];
			result[i] ^= result[top - i - 1];
		}
	}

	return result;
}

void test_encode_decode_base58() {
	char* sstr = NULL;
	char* sstr2 = NULL;

	sstr = base58_encode("test");

	printf("encode of base58: '%s'\n", sstr);

	sstr2 = base58_decode(sstr);

	printf("decode of base58: '%s'\n", sstr2);

	free(sstr);
	free(sstr2);
}

void test_for_hex_initial_print(char *snum) {
	BigInt* num = NULL;

	num = bigint_initial_hex_string(snum);

	printf("0x%s = ", snum); bigint_print(num); printf("\n");

	bigint_cleanup_pointer(&num);
}

void test_for_hex_initial() {
	test_for_hex_initial_print("100000000000000");
	test_for_hex_initial_print("1234567890abcdef");
}
