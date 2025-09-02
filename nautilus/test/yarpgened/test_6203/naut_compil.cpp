/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6203
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6203
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
void test(val<unsigned short> var_2, val<short> var_7, val<short> var_9, val<unsigned short> var_11, val<int> var_15, val<int> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) max((*var_19), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<int>) var_11)) & (((/* implicit */val<int>) (val<unsigned short>)12894)))), ((~(var_18)))))) ? (min((((/* implicit */val<unsigned long long int>) -1)), (((val<unsigned long long int>) var_7)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))))));
    *var_20 = ((/* implicit */val<unsigned short>) ((val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_2)) : (var_15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33879;
short var_7 = (short)-10210;
short var_9 = (short)-26683;
unsigned short var_11 = (unsigned short)20616;
int var_15 = 1351382009;
int var_18 = 1022127355;
int zero = 0;
unsigned short var_19 = (unsigned short)28965;
unsigned short var_20 = (unsigned short)47098;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)55326;
    value_mismatch |= var_20 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, var_11, var_15, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
