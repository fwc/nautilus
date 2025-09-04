/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9310
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9310
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
void test(val<unsigned long long int> var_5, val<long long int> var_6, val<short> var_11, val<unsigned int> var_12, val<int> var_13, val<int> zero, val<unsigned int*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) ((val<short>) ((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) (-2147483647 - 1))) : (var_12))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_5) > (((/* implicit */val<unsigned long long int>) 19312256U)))))))));
    *var_16 &= ((/* implicit */val<unsigned char>) ((min((((/* implicit */val<long long int>) var_11)), (max((var_6), (((/* implicit */val<long long int>) var_12)))))) / (((/* implicit */val<long long int>) ((var_13) + (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)24023))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13335665955840564376ULL;
long long int var_6 = -978782454342420299LL;
short var_11 = (short)26333;
unsigned int var_12 = 234734905U;
int var_13 = 1973171045;
int zero = 0;
unsigned int var_15 = 2432474368U;
unsigned char var_16 = (unsigned char)239;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_11, var_12, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
