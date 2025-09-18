/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2694
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
void test(val<long long int> var_1, val<short> var_7, val<int> zero, val<unsigned short*> var_15, val<short*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) var_7);
    *var_16 = ((/* implicit */val<short>) (val<signed char>)117);
    *var_17 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5599651172988003198LL;
short var_7 = (short)8793;
int zero = 0;
unsigned short var_15 = (unsigned short)2623;
short var_16 = (short)18130;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)8793;
    value_mismatch |= var_16 != (short)117;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, zero, &var_15, &var_16, &var_17);
  checksum();
}
