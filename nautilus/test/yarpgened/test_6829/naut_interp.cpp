/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6829
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6829
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
void test(val<unsigned short> var_2, val<short> var_4, val<short> var_6, val<short> var_8, val<bool> var_9, val<unsigned int> var_10, val<unsigned char> var_11, val<long long int> var_13, val<int> zero, val<int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) max((var_8), (var_6)))) ? (((((/* implicit */val<bool>) ((val<unsigned long long int>) (val<bool>)1))) ? (((((/* implicit */val<bool>) var_11)) ? (var_13) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))))) : (((/* implicit */val<long long int>) (~(var_10))))));
    *var_15 += ((/* implicit */val<long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65026;
short var_4 = (short)5517;
short var_6 = (short)-25194;
short var_8 = (short)-1768;
bool var_9 = (bool)0;
unsigned int var_10 = 3623150174U;
unsigned char var_11 = (unsigned char)88;
long long int var_13 = -8459957381905330632LL;
int zero = 0;
int var_14 = 1075383283;
long long int var_15 = -5978186672766325271LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 2090257976;
    value_mismatch |= var_15 != -5978186672766260245LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_8, var_9, var_10, var_11, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
