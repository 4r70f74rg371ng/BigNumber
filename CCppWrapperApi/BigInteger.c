#include "BigInteger.h"
#include <stdlib.h>
//#include "BigInt.h"

// condition: initialed bigint
// this function is unsafe: you need to confirm bigint is initialed, allocated
BOOL initial_all_bigint_functions(BigInteger* bigint) {

	bigint->isneed_normalize = bigint_isneed_normalize;
	bigint->compare = bigint_compare;
	bigint->compare_one = bigint_compare_one;
	bigint->iszero = bigint_iszero;

	bigint->print_return_string = bigint_print_return_string;
	bigint->print = bigint_print;
	bigint->print_info = bigint_print_info;

	bigint->normalize = bigint_normalize;
	bigint->length = bigint_length;
	bigint->replace = bigint_replace;
	bigint->base10_length = bigint_base10_length;
	bigint->write_digital = bigint_write_digital;
	bigint->read_digital = bigint_read_digital;

	bigint->add = bigint_add;
	bigint->add_into = bigint_add_into;
	bigint->add_one = bigint_add_one;
	bigint->add_one_into = bigint_add_one_into;

	bigint->add_dec_integer = add_dec_integer;
	bigint->add_dec_integer_one = add_dec_integer_one;

	bigint->del = bigint_del;
	bigint->del_one = bigint_del_one;
	bigint->del_into = bigint_del_into;
	bigint->del_one_into = bigint_del_one_into;

	bigint->del_dec_integer = del_dec_integer;
	bigint->del_dec_integer_one = del_dec_integer_one;

	bigint->mul = bigint_mul;
	bigint->mul_into = bigint_mul_into;
	bigint->mul_one = bigint_mul_one;
	bigint->mul_one_into = bigint_mul_one_into;

	bigint->mul_dec_integer = mul_dec_integer;
	bigint->mul_dec_integer_one = mul_dec_integer_one;

	bigint->div = bigint_div;
	bigint->div_into = bigint_div_into;
	bigint->div_one = bigint_div_one;
	bigint->div_one_into = bigint_div_one_into;

	bigint->div_return_quotient = bigint_div_return_quotient;
	bigint->div_one_return_quotient = bigint_div_one_return_quotient;
	bigint->div_return_reminder = bigint_div_return_reminder;
	bigint->div_one_return_reminder = bigint_div_one_return_reminder;
	bigint->div_into_reminder = bigint_div_into_reminder;
	bigint->div_one_into_reminder = bigint_div_one_into_reminder;
	bigint->div_into_return_reminder = bigint_div_into_return_reminder;
	bigint->div_one_into_return_reminder = bigint_div_one_into_return_reminder;

	bigint->power = bigint_power;
	bigint->power_into = bigint_power_into;
	bigint->power_one = bigint_power_one;
	bigint->power_one_into = bigint_power_one_into;

	bigint->pwd_dec_integer = pwd_dec_integer;
	bigint->pwd_dec_integer_one = pwd_dec_integer_one;

	bigint->sqrt = bigint_sqrt;
	bigint->sqrt_into = bigint_sqrt_into;
	bigint->sqrt_dec_integer = sqrt_dec_integer;

	bigint->factor = bigint_factor;
	bigint->factor_return_dec_string = factor_return_dec_string;

	bigint->combination = bigint_combination;

	// TODO: add all functions
	return TRUE;
}

BigInteger* new_biginteger_dec_string(char* sinteger) {
	BigInteger* ret = NULL;
	if (sinteger) {
		ret = (BigInteger*)malloc(sizeof(BigInteger));

		if (ret != NULL) {
			ret->num = bigint_initial_dec_string(sinteger);
			if (ret->num) {
				initial_all_bigint_functions(ret);
			}
			else {
				free(ret);
				ret = NULL;
			}
		}
	}
	return ret;
}

BOOL initial_biginteger_dec_string(BigInteger* bigint, char* sinteger) {
	BigInteger* ret = NULL;
	if (bigint && sinteger) {
		bigint->num = bigint_initial_dec_string(sinteger);
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_hex_string(char* sinteger) {
	BigInteger* ret = NULL;
	if (sinteger) {
		ret = (BigInteger*)malloc(sizeof(BigInteger));

		if (ret != NULL) {
			ret->num = bigint_initial_hex_string(sinteger);
			if (ret->num) {
				initial_all_bigint_functions(ret);
			}
			else {
				free(ret);
				ret = NULL;
			}
		}
	}
	return ret;
}

BOOL initial_biginteger_hex_string(BigInteger* bigint, char* sinteger) {
	BigInteger* ret = NULL;
	if (bigint && sinteger) {
		bigint->num = bigint_initial_hex_string(sinteger);
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_one(arrtype bintb) {
	BigInteger* ret = NULL;
	ret = (BigInteger*)malloc(sizeof(BigInteger));

	if (ret != NULL) {
		ret->num = bigint_initial_one(bintb);
		if (ret->num) {
			initial_all_bigint_functions(ret);
		}
		else {
			free(ret);
			ret = NULL;
		}
	}
	return ret;
}

BOOL initial_biginteger_one(BigInteger* bigint, arrtype bintb) {
	BigInteger* ret = NULL;
	if (bigint) {
		bigint->num = bigint_initial_one(bintb);
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_ten_base_one(arrtype bintb, arrtype basen) {
	BigInteger* ret = NULL;
	ret = (BigInteger*)malloc(sizeof(BigInteger));

	if (ret != NULL) {
		ret->num = bigint_initial_ten_base_one(bintb, basen);
		if (ret->num) {
			initial_all_bigint_functions(ret);
		}
		else {
			free(ret);
			ret = NULL;
		}
	}
	return ret;
}

BOOL initial_biginteger_ten_base_one(BigInteger* bigint, arrtype bintb, arrtype basen) {
	BigInteger* ret = NULL;
	if (bigint) {
		bigint->num = bigint_initial_ten_base_one(bintb, basen);
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_from_array(arrtype sign, arrtype* arr, arrtype size) {
	BigInteger* ret = NULL;
	if (arr && size) {
		ret = (BigInteger*)malloc(sizeof(BigInteger));

		if (ret != NULL) {
			ret->num = bigint_initial_from_array(sign, arr, size);
			if (ret->num) {
				initial_all_bigint_functions(ret);
			}
			else {
				free(ret);
				ret = NULL;
			}
		}
	}
	return ret;
}

BOOL initial_biginteger_from_array(BigInteger* bigint, arrtype sign, arrtype* arr, arrtype size) {
	BigInteger* ret = NULL;
	if (bigint && arr && size) {
		bigint->num = bigint_initial_from_array(sign, arr, size);
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_zero() {
	BigInteger* ret = NULL;
	ret = (BigInteger*)malloc(sizeof(BigInteger));

	if (ret != NULL) {
		ret->num = bigint_initial_zero();
		if (ret->num) {
			initial_all_bigint_functions(ret);
		}
		else {
			free(ret);
			ret = NULL;
		}
	}
	return ret;
}

BOOL initial_biginteger_zero(BigInteger* bigint) {
	BigInteger* ret = NULL;
	if (bigint) {
		bigint->num = bigint_initial_zero();
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_size(arrtype size) {
	BigInteger* ret = NULL;
	ret = (BigInteger*)malloc(sizeof(BigInteger));

	if ((ret != NULL) && size) {
		ret->num = bigint_initial_size(size);
		if (ret->num) {
			initial_all_bigint_functions(ret);
		}
		else {
			free(ret);
			ret = NULL;
		}
	}
	return ret;
}

BOOL initial_biginteger_size(BigInteger* bigint, arrtype size) {
	BigInteger* ret = NULL;
	if (bigint && size) {
		bigint->num = bigint_initial_size(size);
		if (bigint->num && initial_all_bigint_functions(bigint)) {
			return TRUE;
		}
	}
	return FALSE;
}

BigInteger* new_biginteger_from_another(BigInt* bigint) {
	BigInteger* ret = NULL;
	ret = (BigInteger*)malloc(sizeof(BigInteger));

	if ((ret != NULL) && bigint) {
		ret->num = bigint_duplicate(bigint);
		if (ret->num) {
			initial_all_bigint_functions(ret);
		}
		else {
			free(ret);
			ret = NULL;
		}
	}
	return ret;
}
BOOL initial_biginteger_from_another(BigInteger* newone, BigInt* another) {
	BigInteger* ret = NULL;
	if (newone && another) {
		newone->num = bigint_duplicate(another);
		if (newone->num && initial_all_bigint_functions(newone)) {
			return TRUE;
		}
	}
	return FALSE;
}

BOOL cleanup_biginteger(BigInteger* bigint) {
	if (bigint) {
		if (bigint->num) {
			bigint_cleanup_pointer(&(bigint->num));
		}
	}
	return TRUE;
}

BOOL cleanup_biginteger_pointer(BigInteger** bigint) {
	if (bigint && *bigint) {
		if ((*bigint)->num) {
			// pointer will release in all struct
			bigint_cleanup((*bigint)->num);

			free(*bigint);
			*bigint = NULL;
		}
	}
	return TRUE;
}

