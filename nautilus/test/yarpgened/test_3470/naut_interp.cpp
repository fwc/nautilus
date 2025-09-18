/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3470
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3470
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
void test(val<long long int> var_1, val<unsigned int> var_3, val<signed char> var_4, val<signed char> var_5, val<unsigned long long int> var_6, val<int> var_7, val<unsigned char> var_8, val<int> var_11, val<int> zero, val<long long int*> var_12, val<unsigned int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<long long int>) var_5);
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) == (min((((/* implicit */val<unsigned int>) ((val<unsigned short>) var_11))), (var_3)))));
    *var_14 = ((/* implicit */val<signed char>) min((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<signed char>)(-127 - 1))), (var_7))))))), (((((((/* implicit */val<int>) var_8)) >> (((((/* implicit */val<int>) var_5)) + (28))))) >> (((min((var_6), (((/* implicit */val<unsigned long long int>) var_11)))) - (447920221ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5802953013700798472LL;
unsigned int var_3 = 3962630890U;
signed char var_4 = (signed char)-44;
signed char var_5 = (signed char)-17;
unsigned long long int var_6 = 8042987361891857806ULL;
int var_7 = -1132770010;
unsigned char var_8 = (unsigned char)55;
int var_11 = 447920230;
int zero = 0;
long long int var_12 = 2490519890520469797LL;
unsigned int var_13 = 1080317625U;
signed char var_14 = (signed char)-100;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -17LL;
    value_mismatch |= var_13 != 0U;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
