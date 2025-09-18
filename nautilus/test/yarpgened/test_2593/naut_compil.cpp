/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2593
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2593
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<int> zero, val<unsigned char*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) max((*var_13), (((/* implicit */val<unsigned char>) 1ULL))));
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) ((val<long long int>) ((((((/* implicit */val<bool>) (val<signed char>)127)) ? (((/* implicit */val<unsigned long long int>) 365797246U)) : (4473658860679023728ULL))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) >= (var_2)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)927;
unsigned long long int var_2 = 8511250563835573371ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)116;
unsigned char var_14 = (unsigned char)97;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)116;
    value_mismatch |= var_14 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, zero, &var_13, &var_14);
  checksum();
}
