/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1480
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1480
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
void test(val<unsigned char> var_1, val<unsigned short> var_2, val<unsigned long long int> var_4, val<signed char> var_12, val<int> zero, val<signed char*> var_15, val<unsigned short*> var_16, val<unsigned char*> var_17, val<unsigned int*> var_18) {
    *var_15 = ((/* implicit */val<signed char>) ((val<long long int>) max((((/* implicit */val<signed char>) ((val<bool>) var_4))), (var_12))));
    *var_16 ^= ((/* implicit */val<unsigned short>) ((val<unsigned int>) 1747376575));
    *var_17 = ((/* implicit */val<unsigned char>) var_2);
    *var_18 -= ((/* implicit */val<unsigned int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
unsigned short var_2 = (unsigned short)26571;
unsigned long long int var_4 = 4245408570732087688ULL;
signed char var_12 = (signed char)96;
int zero = 0;
signed char var_15 = (signed char)54;
unsigned short var_16 = (unsigned short)23977;
unsigned char var_17 = (unsigned char)169;
unsigned int var_18 = 821468054U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)96;
    value_mismatch |= var_16 != (unsigned short)33814;
    value_mismatch |= var_17 != (unsigned char)203;
    value_mismatch |= var_18 != 821467823U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
