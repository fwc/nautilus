/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2444
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2444
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
void test(val<unsigned short> var_7, val<unsigned int> var_15, val<int> zero, val<bool*> var_20, val<int*> var_21) {
    *var_20 ^= ((((/* implicit */val<bool>) (-(2147483647LL)))) || (((/* implicit */val<bool>) var_15)));
    *var_21 += ((/* implicit */val<int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)52585;
unsigned int var_15 = 3492075127U;
int zero = 0;
bool var_20 = (bool)1;
int var_21 = -192540237;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != -192487652;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
