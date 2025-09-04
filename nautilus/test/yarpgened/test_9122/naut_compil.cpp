/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9122
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9122
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
void test(val<unsigned short> var_2, val<unsigned int> var_5, val<signed char> var_6, val<unsigned short> var_7, val<unsigned int> var_10, val<bool> var_12, val<bool> var_13, val<short> var_17, val<int> zero, val<short*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<short>) min((*var_18), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<unsigned short>)9)) : (((/* implicit */val<int>) var_2))))) ? (((var_13) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_10))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17)))))) ? (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_12))))) : (var_5))))));
    *var_19 = ((/* implicit */val<unsigned int>) max((*var_19), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(var_5)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56913;
unsigned int var_5 = 2167066627U;
signed char var_6 = (signed char)116;
unsigned short var_7 = (unsigned short)21574;
unsigned int var_10 = 4222640306U;
bool var_12 = (bool)0;
bool var_13 = (bool)0;
short var_17 = (short)25814;
int zero = 0;
short var_18 = (short)2794;
unsigned int var_19 = 2746678451U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 2746678451U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_10, var_12, var_13, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
