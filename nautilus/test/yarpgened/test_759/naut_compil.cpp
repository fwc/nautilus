/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 759
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=759
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
void test(val<unsigned long long int> var_0, val<int> var_2, val<int> var_3, val<int> var_4, val<int> zero, val<signed char*> var_15, val<bool*> var_16, val<short*> var_17, val<unsigned int*> var_18) {
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) (!(((((val<unsigned int>) var_3)) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) var_2)))))))))));
    *var_16 += ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)0))))) + ((-(min((var_0), (((/* implicit */val<unsigned long long int>) -1404604616))))))));
    *var_17 = ((/* implicit */val<short>) var_4);
    *var_18 = ((/* implicit */val<unsigned int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8377601559408780338ULL;
int var_2 = -1832605927;
int var_3 = -254971990;
int var_4 = -643811061;
int zero = 0;
signed char var_15 = (signed char)-39;
bool var_16 = (bool)0;
short var_17 = (short)17156;
unsigned int var_18 = 2331702821U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (short)14603;
    value_mismatch |= var_18 != 1515299890U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
