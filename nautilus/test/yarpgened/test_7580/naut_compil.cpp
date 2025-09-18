/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7580
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7580
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
void test(val<unsigned int> var_1, val<int> zero, val<signed char*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) (((val<bool>)1) ? (8661113927122090616ULL) : (((/* implicit */val<unsigned long long int>) -8186251516630811685LL))));
    *var_13 = ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1873625838U;
int zero = 0;
signed char var_12 = (signed char)108;
unsigned short var_13 = (unsigned short)1336;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)120;
    value_mismatch |= var_13 != (unsigned short)17134;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_12, &var_13);
  checksum();
}
