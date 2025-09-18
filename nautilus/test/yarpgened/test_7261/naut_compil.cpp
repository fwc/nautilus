/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7261
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
void test(val<unsigned long long int> var_3, val<unsigned int> var_9, val<int> var_12, val<int> zero, val<long long int*> var_19, val<unsigned int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) (val<unsigned char>)251))));
    *var_20 = ((/* implicit */val<unsigned int>) (~((+((+(var_12)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16780664389962808697ULL;
unsigned int var_9 = 1643639686U;
int var_12 = 644056504;
int zero = 0;
long long int var_19 = 439910441840737734LL;
unsigned int var_20 = 1903806425U;
unsigned long long int var_21 = 2620527668858725561ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 439910441840737735LL;
    value_mismatch |= var_20 != 3650910791U;
    value_mismatch |= var_21 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_12, zero, &var_19, &var_20, &var_21);
  checksum();
}
