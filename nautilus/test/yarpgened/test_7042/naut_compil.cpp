/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7042
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7042
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
void test(val<short> var_1, val<short> var_3, val<unsigned short> var_6, val<int> var_9, val<int> var_11, val<signed char> var_17, val<int> zero, val<unsigned short*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) min((*var_18), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) 629560729)))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_3)), (var_11)))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_6))))) ? (((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_17)) : (var_11))) & (((/* implicit */val<int>) ((val<unsigned short>) var_9))))) : (((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1415;
short var_3 = (short)-25276;
unsigned short var_6 = (unsigned short)61315;
int var_9 = 1358146918;
int var_11 = -133826543;
signed char var_17 = (signed char)-118;
int zero = 0;
unsigned short var_18 = (unsigned short)5411;
unsigned int var_19 = 1576775456U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 44290U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_9, var_11, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
