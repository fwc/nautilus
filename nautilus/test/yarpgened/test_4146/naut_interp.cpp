/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4146
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4146
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
void test(val<int> var_10, val<unsigned short> var_11, val<int> var_13, val<int> zero, val<short*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<short>) var_10);
    *var_16 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((val<int>) var_11)) ^ (((/* implicit */val<int>) (val<unsigned short>)13629)))))));
    *var_17 -= ((/* implicit */val<short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -398332059;
unsigned short var_11 = (unsigned short)58566;
int var_13 = -705807086;
int zero = 0;
short var_15 = (short)-13027;
int var_16 = -579606555;
short var_17 = (short)16089;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-4251;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (short)455;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
}
