/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 306
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=306
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
void test(val<signed char> var_0, val<int> var_2, val<long long int> var_3, val<unsigned short> var_14, val<int> zero, val<bool*> var_16, val<unsigned int*> var_17) {
    *var_16 *= ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_14)), (min((((var_3) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14))))), (((/* implicit */val<long long int>) var_0))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((val<signed char>) ((((/* implicit */val<bool>) min((var_2), (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<int>) var_14)) : ((-(((/* implicit */val<int>) (val<unsigned char>)231)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
int var_2 = -1753814255;
long long int var_3 = -3349847332704131769LL;
unsigned short var_14 = (unsigned short)49326;
int zero = 0;
bool var_16 = (bool)1;
unsigned int var_17 = 1953717674U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 4294967214U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
