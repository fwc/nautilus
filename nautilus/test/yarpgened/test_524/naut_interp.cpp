/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 524
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=524
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
void test(val<bool> var_6, val<long long int> var_8, val<int> zero, val<unsigned short*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) var_8);
    *var_19 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
long long int var_8 = 8382513414937404047LL;
int zero = 0;
unsigned short var_18 = (unsigned short)43761;
long long int var_19 = -5588680135105612245LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)25231;
    value_mismatch |= var_19 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
