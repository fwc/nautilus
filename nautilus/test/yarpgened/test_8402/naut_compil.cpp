/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8402
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8402
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
void test(val<int> var_3, val<short> var_4, val<unsigned int> var_9, val<unsigned long long int> var_10, val<int> var_14, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 = ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) && ((val<bool>)1))))) | (((val<unsigned int>) var_9))))) : (var_10));
    *var_19 = ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 664404451;
short var_4 = (short)-4264;
unsigned int var_9 = 95053809U;
unsigned long long int var_10 = 9323225285833269645ULL;
int var_14 = 831521364;
int zero = 0;
unsigned long long int var_17 = 18439081978725798256ULL;
unsigned long long int var_18 = 5400475158656598214ULL;
unsigned short var_19 = (unsigned short)31187;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 95053809ULL;
    value_mismatch |= var_18 != 95053809ULL;
    value_mismatch |= var_19 != (unsigned short)483;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, var_10, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
}
