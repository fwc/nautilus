/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3181
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3181
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
void test(val<unsigned int> var_1, val<bool> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned short*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_13 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (val<unsigned short>)65535))))))))));
    *var_14 = ((/* implicit */val<signed char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2965612268U;
bool var_10 = (bool)0;
int zero = 0;
unsigned long long int var_12 = 2354340762674515290ULL;
unsigned short var_13 = (unsigned short)31650;
signed char var_14 = (signed char)109;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2965612268ULL;
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
}
