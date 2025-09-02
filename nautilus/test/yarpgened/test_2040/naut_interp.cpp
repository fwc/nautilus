/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2040
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2040
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
void test(val<int> var_7, val<unsigned int> var_9, val<short> var_13, val<int> zero, val<long long int*> var_16, val<int*> var_17) {
    *var_16 *= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) min((max((-924493025), (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) var_13)))))));
    *var_17 = ((/* implicit */val<int>) max((min((((/* implicit */val<unsigned int>) ((val<int>) -924493045))), (var_9))), (((/* implicit */val<unsigned int>) (+(var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1615973535;
unsigned int var_9 = 4225451456U;
short var_13 = (short)21864;
int zero = 0;
long long int var_16 = -8456771432661336895LL;
int var_17 = 1440628190;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != -924493045;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
