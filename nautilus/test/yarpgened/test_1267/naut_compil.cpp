/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1267
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1267
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
void test(val<short> var_0, val<unsigned long long int> var_7, val<int> zero, val<unsigned long long int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_11 -= ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2545;
unsigned long long int var_7 = 8994673887134493421ULL;
int zero = 0;
unsigned long long int var_10 = 1729089287102897278ULL;
long long int var_11 = 6286287602167542758LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2545ULL;
    value_mismatch |= var_11 != -2708386284966950663LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, zero, &var_10, &var_11);
  checksum();
}
