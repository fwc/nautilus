/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4850
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4850
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
void test(val<unsigned long long int> var_2, val<int> var_12, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) (~(max((((/* implicit */val<unsigned long long int>) var_12)), (((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((/* implicit */val<unsigned long long int>) var_12)) : (var_2)))))));
    *var_21 = ((/* implicit */val<unsigned short>) 4294967295U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2055093674221077467ULL;
int var_12 = 696511487;
int zero = 0;
unsigned short var_20 = (unsigned short)8256;
unsigned short var_21 = (unsigned short)63683;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)31780;
    value_mismatch |= var_21 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_12, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
