/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 887
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=887
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
void test(val<signed char> var_0, val<bool> var_11, val<int> zero, val<unsigned char*> var_14, val<short*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) min((var_11), ((val<bool>)1)));
    *var_15 = ((/* implicit */val<short>) min((*var_15), (((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<signed char>)63)) && (((/* implicit */val<bool>) (val<unsigned char>)112)))))));
    *var_16 = ((/* implicit */val<bool>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
bool var_11 = (bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)144;
short var_15 = (short)22130;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
