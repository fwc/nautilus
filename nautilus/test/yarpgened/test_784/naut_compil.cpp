/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 784
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=784
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
void test(val<signed char> var_1, val<int> var_4, val<signed char> var_5, val<signed char> var_6, val<long long int> var_13, val<int> var_14, val<int> zero, val<unsigned char*> var_15, val<signed char*> var_16) {
    *var_15 ^= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((var_14) / ((+(((/* implicit */val<int>) (val<unsigned short>)16427))))))) && (((/* implicit */val<bool>) (((+(((/* implicit */val<int>) var_6)))) / (((/* implicit */val<int>) var_5)))))));
    *var_16 = ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) var_14)) ? (((4237880995306003471LL) ^ (-9223372036854775805LL))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) ^ (var_13))))), (((/* implicit */val<long long int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
int var_4 = -1892324986;
signed char var_5 = (signed char)2;
signed char var_6 = (signed char)-101;
long long int var_13 = -431163481944356181LL;
int var_14 = -175553033;
int zero = 0;
unsigned char var_15 = (unsigned char)234;
signed char var_16 = (signed char)-120;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)235;
    value_mismatch |= var_16 != (signed char)-122;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_13, var_14, zero, &var_15, &var_16);
  checksum();
}
