/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7962
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7962
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<unsigned char> var_1, val<unsigned char> var_3, val<unsigned int> var_5, val<unsigned int> var_8, val<unsigned int> var_10, val<unsigned char> var_11, val<int> var_12, val<short> var_13, val<int> zero, val<short*> var_14, val<int*> var_15, val<signed char*> var_16, val<int*> var_17) {
    *var_14 = ((/* implicit */val<short>) ((min((((/* implicit */val<long long int>) (val<short>)4032)), (9223372036854775792LL))) % (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<long long int>) var_5))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_5)))))) : (var_8))))));
    *var_15 = ((/* implicit */val<int>) ((val<unsigned long long int>) var_11));
    *var_16 = ((/* implicit */val<signed char>) max((((val<long long int>) ((val<signed char>) var_1))), (((/* implicit */val<long long int>) var_12))));
    *var_17 = ((((/* implicit */val<bool>) ((117440512) % (((/* implicit */val<int>) (val<unsigned char>)15))))) ? (((/* implicit */val<int>) var_13)) : (((max((var_12), (((/* implicit */val<int>) var_3)))) >> (((max((var_10), (((/* implicit */val<unsigned int>) (val<short>)511)))) - (3319048169U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
unsigned char var_3 = (unsigned char)84;
unsigned int var_5 = 985823619U;
unsigned int var_8 = 1898389738U;
unsigned int var_10 = 3319048197U;
unsigned char var_11 = (unsigned char)132;
int var_12 = -1404256399;
short var_13 = (short)-1404;
int zero = 0;
short var_14 = (short)24337;
int var_15 = 24447925;
signed char var_16 = (signed char)-77;
int var_17 = -890723049;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != 132;
    value_mismatch |= var_16 != (signed char)-74;
    value_mismatch |= var_17 != -1404;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_8, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
