/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4817
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4817
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<unsigned short> var_3, val<unsigned int> var_5, val<bool> var_6, val<int> var_8, val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_1))))) < (((((var_0) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)10))))) & (((/* implicit */val<unsigned long long int>) (+(7903574496122145609LL))))))));
    *var_11 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1694575942U)) ? (7903574496122145630LL) : (7903574496122145609LL)))) ? (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_6))))), (max((var_0), (((/* implicit */val<unsigned long long int>) var_5)))))) : ((-(((var_0) ^ (((/* implicit */val<unsigned long long int>) -7903574496122145591LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14451792438263289529ULL;
short var_1 = (short)-11143;
unsigned short var_3 = (unsigned short)10893;
unsigned int var_5 = 702703858U;
bool var_6 = (bool)0;
int var_8 = -1079067041;
int zero = 0;
unsigned int var_10 = 3175981435U;
unsigned long long int var_11 = 10854968390409331509ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1U;
    value_mismatch |= var_11 != 14451792438263289529ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
