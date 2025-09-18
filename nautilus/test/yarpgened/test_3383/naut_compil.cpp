/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3383
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3383
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<signed char> var_4, val<unsigned int> var_5, val<bool> var_6, val<unsigned char> var_8, val<long long int> var_10, val<unsigned short> var_11, val<unsigned int> var_12, val<unsigned short> var_13, val<unsigned short> var_14, val<int> var_15, val<unsigned long long int> var_17, val<int> zero, val<long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned char*> var_22, val<unsigned char*> var_23, val<unsigned char*> var_24, val<short*> var_25) {
    *var_20 = ((/* implicit */val<long long int>) (((!(var_6))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_3) < (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_6)) + (var_15)))))))) : (((17665133907833416587ULL) / (((/* implicit */val<unsigned long long int>) 3396188648651626814LL))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) max((*var_21), (((((/* implicit */val<bool>) (~(var_12)))) ? (max((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_0))))), (10959748330099372582ULL))) : (((max((7486995743610179034ULL), (10959748330099372596ULL))) + (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)23804)))))))))));
    if (((/* implicit */val<bool>) var_14))
    {
        *var_22 = ((/* implicit */val<unsigned char>) var_15);
        *var_23 = ((/* implicit */val<unsigned char>) var_13);
        *var_24 += ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) var_0)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (var_17)))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_14)))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_4)) : (var_15)))))));
        *var_25 = ((/* implicit */val<short>) min((min(((val<unsigned short>)65530), (((/* implicit */val<unsigned short>) (val<signed char>)111)))), (((/* implicit */val<unsigned short>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<long long int>) var_12)) : (var_10)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
unsigned long long int var_3 = 9628270891708641435ULL;
signed char var_4 = (signed char)-31;
unsigned int var_5 = 3008049918U;
bool var_6 = (bool)1;
unsigned char var_8 = (unsigned char)74;
long long int var_10 = 8331175836649617986LL;
unsigned short var_11 = (unsigned short)6991;
unsigned int var_12 = 2499595134U;
unsigned short var_13 = (unsigned short)61171;
unsigned short var_14 = (unsigned short)18203;
int var_15 = -629067325;
unsigned long long int var_17 = 5128773561588740901ULL;
int zero = 0;
long long int var_20 = -4413450420941485750LL;
unsigned long long int var_21 = 4492531652263526660ULL;
unsigned char var_22 = (unsigned char)58;
unsigned char var_23 = (unsigned char)22;
unsigned char var_24 = (unsigned char)28;
short var_25 = (short)22430;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 5LL;
    value_mismatch |= var_21 != 18446744073709551422ULL;
    value_mismatch |= var_22 != (unsigned char)195;
    value_mismatch |= var_23 != (unsigned char)243;
    value_mismatch |= var_24 != (unsigned char)222;
    value_mismatch |= var_25 != (short)111;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_17, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
}
