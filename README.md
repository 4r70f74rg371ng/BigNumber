# SimpleBigInteger

A Simple Big Integer C methods & Simple C Object-Oreiented/C++ Wrapper

## Getting Started
In C project just add two files: BigInt.c, BigInt.h to project & compile

In C Object-Oreiented project just add four files: BigInt.c, BigInt.h, BigInteger.c, BigInteger.h to project & compile

In C++ project just add six files: BigInt.c, BigInt.h, BigInteger.c, BigInteger.h, CBigInt.hpp, CBigInt.cpp to project & compile

### C example
```
// example.c
#include "BigInt.h"

int main(){
   BigInt* total = bigint_initial_dec_string("2");
   int i;

   // 100 digital
   for (i = 0; i < 1000; i++) {
      bigint_mul_one_into(total, 100);
   }
   bigint_sqrt_into(total);
   bigint_print(total); printf("\n");
   bigint_cleanup_pointer(&total);
   return 0;
}
```

### C Object-Oreiented example
```
#include "BigInteger.h"

int main(){
   BigInteger bint;
   initial_biginteger_dec_string(&bint, "1000000"); // bint = 1000000;
   bint.add_one_into(bint.num, 1000); // bint += 1000;
   bint.print(bint.num); printf("\n");
   cleanup_biginteger(&bint);
   return 0;
}
```

### C++ example
```
// example.cpp
#include "BigInt.hpp"

int main(){
   CBigInt a = 123456789012345678901234567890_cbi;
   cout << a << " " << a*a << endl;
   cout << 123456789012345678901234567890_cbi << " " << 123456789012345678901234567890_cbi* 123456789012345678901234567890_cbi << endl;
   return 0;
}
```

### base58 implementation

Implmentation base 58 via C

```
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

```

### other example

if you need more example how to use,
you just find in test file.

