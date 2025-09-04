/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1557
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1557
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
void test(val<short> var_0, val<unsigned short> var_13, val<int> zero, val<unsigned short*> var_17, val<unsigned int*> var_18, val<int*> var_19) {
    *var_17 = var_13;
    *var_18 = ((/* implicit */val<unsigned int>) 15881659508110217157ULL);
    *var_19 -= (~(((/* implicit */val<int>) ((max((15881659508110217173ULL), (((/* implicit */val<unsigned long long int>) (val<bool>)1)))) >= (max((2565084565599334444ULL), (((/* implicit */val<unsigned long long int>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16796;
unsigned short var_13 = (unsigned short)58337;
int zero = 0;
unsigned short var_17 = (unsigned short)45374;
unsigned int var_18 = 368510574U;
int var_19 = -357691511;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)58337;
    value_mismatch |= var_18 != 2426228677U;
    value_mismatch |= var_19 != -357691510;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_13, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
