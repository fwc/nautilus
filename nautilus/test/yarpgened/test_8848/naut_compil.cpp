/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8848
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8848
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
void test(val<long long int> var_0, val<bool> var_1, val<short> var_3, val<short> var_8, val<unsigned int> var_13, val<short> var_15, val<int> zero, val<unsigned char*> var_17, val<unsigned long long int*> var_18) {
    *var_17 &= ((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) (val<bool>)1)), (max((((((/* implicit */val<bool>) var_13)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))), (((/* implicit */val<long long int>) max(((val<unsigned char>)8), (((/* implicit */val<unsigned char>) (val<bool>)1)))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<bool>) max((var_8), (var_15))))) > (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2966022420229672189LL;
bool var_1 = (bool)0;
short var_3 = (short)-15295;
short var_8 = (short)12260;
unsigned int var_13 = 3934619331U;
short var_15 = (short)-12923;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
unsigned long long int var_18 = 7608850611076296070ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)8;
    value_mismatch |= var_18 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_8, var_13, var_15, zero, &var_17, &var_18);
  checksum();
}
