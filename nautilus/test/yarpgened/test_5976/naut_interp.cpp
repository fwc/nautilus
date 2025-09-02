/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5976
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5976
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
void test(val<long long int> var_7, val<int> var_8, val<unsigned short> var_10, val<int> var_12, val<short> var_17, val<int> zero, val<unsigned short*> var_18, val<short*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned short>) max(((-(var_12))), ((+(((/* implicit */val<int>) var_17))))));
    *var_19 = ((/* implicit */val<short>) var_7);
    *var_20 = ((/* implicit */val<bool>) ((val<short>) ((((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) var_10)))) && (((/* implicit */val<bool>) var_17)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2874961174215369203LL;
int var_8 = -2023561589;
unsigned short var_10 = (unsigned short)17505;
int var_12 = -1221597006;
short var_17 = (short)32291;
int zero = 0;
unsigned short var_18 = (unsigned short)46986;
short var_19 = (short)21357;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)5966;
    value_mismatch |= var_19 != (short)24077;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_10, var_12, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
