/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5630
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5630
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
void test(val<int> var_9, val<int> zero, val<unsigned int*> var_14, val<unsigned short*> var_15, val<unsigned int*> var_16, val<unsigned short*> var_17, val<unsigned int*> var_18) {
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)28308)) >> (((2607075049817814685ULL) - (2607075049817814681ULL)))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 2147483520)) ? (703720513U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)25631)))));
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)39903)) * (((/* implicit */val<int>) (val<signed char>)68))));
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) var_9))));
    *var_18 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) -204225029)), (7452344858181470648ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1783700337;
int zero = 0;
unsigned int var_14 = 1684780739U;
unsigned short var_15 = (unsigned short)17982;
unsigned int var_16 = 1185816156U;
unsigned short var_17 = (unsigned short)19847;
unsigned int var_18 = 2740972619U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1769U;
    value_mismatch |= var_15 != (unsigned short)60481;
    value_mismatch |= var_16 != 2713404U;
    value_mismatch |= var_17 != (unsigned short)19847;
    value_mismatch |= var_18 != 261982648U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
