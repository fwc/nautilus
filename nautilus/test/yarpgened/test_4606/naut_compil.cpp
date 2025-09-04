/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4606
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4606
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
void test(val<unsigned short> var_13, val<short> var_15, val<signed char> var_18, val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21, val<signed char*> var_22, val<int*> var_23, val<unsigned long long int*> var_24) {
    *var_20 = ((/* implicit */val<unsigned char>) var_13);
    *var_21 = var_18;
    *var_22 = ((/* implicit */val<signed char>) ((((9223372036854775807LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)2915))))) || (((/* implicit */val<bool>) (val<unsigned char>)66))));
    *var_23 = ((/* implicit */val<int>) max((max((((val<unsigned long long int>) (val<unsigned char>)131)), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)52)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<unsigned char>)125)), ((val<unsigned short>)11243)))) + (((/* implicit */val<int>) max(((val<unsigned short>)54293), (((/* implicit */val<unsigned short>) (val<signed char>)111))))))))));
    *var_24 = ((/* implicit */val<unsigned long long int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)25656;
short var_15 = (short)-4456;
signed char var_18 = (signed char)-26;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
signed char var_21 = (signed char)-27;
signed char var_22 = (signed char)36;
int var_23 = 702514798;
unsigned long long int var_24 = 15122744075966720636ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)56;
    value_mismatch |= var_21 != (signed char)-26;
    value_mismatch |= var_22 != (signed char)1;
    value_mismatch |= var_23 != 54418;
    value_mismatch |= var_24 != 18446744073709547160ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_15, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
