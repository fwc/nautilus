/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1659
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1659
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
void test(val<bool> var_3, val<int> zero, val<bool*> var_14, val<int*> var_15, val<unsigned int*> var_16) {
    *var_14 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1948287998)) ? (1865014735) : (14680064)));
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) != ((~((~(((/* implicit */val<int>) (val<bool>)1))))))));
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 16762040339187001108ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (5712379627599438060ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
int zero = 0;
bool var_14 = (bool)0;
int var_15 = -1757829566;
unsigned int var_16 = 2337403954U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != 1;
    value_mismatch |= var_16 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
