/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6666
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6666
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
void test(val<long long int> var_6, val<unsigned short> var_9, val<int> zero, val<short*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<short>) var_6);
    *var_17 = ((/* implicit */val<long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5385525622989077417LL;
unsigned short var_9 = (unsigned short)28022;
int zero = 0;
short var_16 = (short)-3398;
long long int var_17 = 6085409360090910425LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-15273;
    value_mismatch |= var_17 != 28022LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
