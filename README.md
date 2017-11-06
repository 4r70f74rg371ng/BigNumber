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
   CBigInt a = 123456789012345678901234567890_cbi;
   cout << a << " " << a*a << endl;
   cout << 123456789012345678901234567890_cbi << " " << 123456789012345678901234567890_cbi* 123456789012345678901234567890_cbi << endl;
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
### other example

if you need more example how to use,
you just find in test file.

