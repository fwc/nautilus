/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3162
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
void test(val<unsigned short> var_0, val<int> var_3, val<unsigned char> var_4, val<int> zero, val<bool*> var_13, val<unsigned char*> var_14, val<signed char*> var_15, val<signed char*> var_16, val<unsigned short*> var_17) {
    *var_13 = (val<bool>)0;
    *var_14 = var_4;
    *var_15 -= ((/* implicit */val<signed char>) var_3);
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) var_4))));
    *var_17 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6582;
int var_3 = -1338716260;
unsigned char var_4 = (unsigned char)234;
int zero = 0;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)62;
signed char var_15 = (signed char)99;
signed char var_16 = (signed char)45;
unsigned short var_17 = (unsigned short)41911;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != (unsigned char)234;
    value_mismatch |= var_15 != (signed char)-57;
    value_mismatch |= var_16 != (signed char)45;
    value_mismatch |= var_17 != (unsigned short)6582;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
