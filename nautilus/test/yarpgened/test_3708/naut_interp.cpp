/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3708
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3708
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
void test(val<unsigned short> var_5, val<unsigned short> var_9, val<unsigned short> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) min(((val<unsigned short>)0), (var_10)))), (((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_9)))) | (((/* implicit */val<int>) var_10))))));
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45498;
unsigned short var_9 = (unsigned short)9695;
unsigned short var_10 = (unsigned short)17580;
int zero = 0;
unsigned short var_12 = (unsigned short)33452;
unsigned short var_13 = (unsigned short)50989;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)62910;
    value_mismatch |= var_13 != (unsigned short)50989;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, var_10, zero, &var_12, &var_13);
  checksum();
}
