/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2164
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2164
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
void test(val<signed char> var_8, val<int> zero, val<short*> var_18, val<long long int*> var_19, val<unsigned char*> var_20) {
    *var_18 = (val<short>)25938;
    *var_19 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)-25939)))))));
    *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-123;
int zero = 0;
short var_18 = (short)-18386;
long long int var_19 = 8028828337064263270LL;
unsigned char var_20 = (unsigned char)245;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)25938;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != (unsigned char)133;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
