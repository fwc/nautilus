/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2066
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2066
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
void test(val<unsigned int> var_2, val<unsigned short> var_9, val<unsigned short> var_11, val<unsigned long long int> var_13, val<unsigned long long int> var_15, val<int> zero, val<unsigned int*> var_16, val<int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_11)), (654950669607904948LL)))) ? (var_15) : (((var_13) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))))) << (((((/* implicit */val<int>) (val<short>)9072)) - (9039)))));
    *var_17 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13))));
    *var_18 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 119977841U;
unsigned short var_9 = (unsigned short)52489;
unsigned short var_11 = (unsigned short)2812;
unsigned long long int var_13 = 3063935111691546286ULL;
unsigned long long int var_15 = 15632433128344850214ULL;
int zero = 0;
unsigned int var_16 = 2196455968U;
int var_17 = -1161026553;
unsigned int var_18 = 3053090028U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != 119977841U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_11, var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
