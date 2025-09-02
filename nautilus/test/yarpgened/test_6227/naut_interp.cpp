/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6227
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6227
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
void test(val<short> var_3, val<short> var_6, val<bool> var_9, val<int> zero, val<unsigned int*> var_20, val<int*> var_21, val<unsigned short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) var_6);
    *var_21 = ((/* implicit */val<int>) var_3);
    *var_22 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<int>) min((var_3), (((/* implicit */val<short>) (val<signed char>)65))))) + (((/* implicit */val<int>) (!(var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6813;
short var_6 = (short)-19126;
bool var_9 = (bool)1;
int zero = 0;
unsigned int var_20 = 3970563740U;
int var_21 = 879360072;
unsigned short var_22 = (unsigned short)43197;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4294948170U;
    value_mismatch |= var_21 != -6813;
    value_mismatch |= var_22 != (unsigned short)58723;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_9, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
