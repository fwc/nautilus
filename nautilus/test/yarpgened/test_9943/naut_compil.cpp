/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9943
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9943
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
void test(val<int> var_1, val<short> var_7, val<int> zero, val<bool*> var_14, val<unsigned char*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<bool>) min((*var_14), (((/* implicit */val<bool>) var_7))));
    *var_15 = (val<unsigned char>)0;
    *var_16 = ((/* implicit */val<signed char>) (~(var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1054658382;
short var_7 = (short)6180;
int zero = 0;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)225;
signed char var_16 = (signed char)-53;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (signed char)77;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
}
