/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3908
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3908
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned short> var_2, val<long long int> var_9, val<signed char> var_10, val<bool> var_11, val<int> zero, val<int*> var_13, val<short*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<int>) ((max((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_2))))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) ^ (var_9))))) > (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_10)) << (((((((/* implicit */val<int>) (val<unsigned short>)62760)) ^ (((/* implicit */val<int>) var_2)))) - (51076))))))));
    *var_14 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) (!(var_11))))));
    *var_15 = ((/* implicit */val<unsigned char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15459;
signed char var_1 = (signed char)87;
unsigned short var_2 = (unsigned short)12977;
long long int var_9 = 7762919744786289118LL;
signed char var_10 = (signed char)120;
bool var_11 = (bool)1;
int zero = 0;
int var_13 = -1695322249;
short var_14 = (short)-12551;
unsigned char var_15 = (unsigned char)194;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1;
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (unsigned char)87;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
}
