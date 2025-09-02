/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7450
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7450
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
void test(val<unsigned char> var_3, val<unsigned char> var_5, val<int> zero, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<short*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17) {
    *var_13 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)65510)) * (((/* implicit */val<int>) (!(((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) != (2305843009213691904ULL))))))));
    *var_14 |= ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_5))));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (((~(((/* implicit */val<int>) var_3)))) <= (((/* implicit */val<int>) ((6963502037174201357ULL) != (6963502037174201342ULL))))))) > ((+(((((/* implicit */val<int>) (val<short>)28980)) % (((/* implicit */val<int>) (val<unsigned char>)168))))))));
    *var_16 *= ((min(((~(((/* implicit */val<int>) (val<signed char>)-25)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)65535))))))) != (((/* implicit */val<int>) (val<unsigned short>)32767)));
    *var_17 = ((/* implicit */val<unsigned long long int>) (+(916281157792153780LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)55;
unsigned char var_5 = (unsigned char)233;
int zero = 0;
unsigned long long int var_13 = 10234503608711431169ULL;
unsigned long long int var_14 = 13072522543706594086ULL;
short var_15 = (short)15002;
bool var_16 = (bool)1;
unsigned long long int var_17 = 15950660711879220777ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 10234503608711431169ULL;
    value_mismatch |= var_14 != 18446744073709551415ULL;
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 916281157792153780ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
