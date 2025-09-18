/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1880
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1880
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
void test(val<short> var_11, val<int> zero, val<unsigned long long int*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((val<unsigned long long int>) (-(((/* implicit */val<int>) var_11))));
    *var_16 = ((/* implicit */val<unsigned int>) 10076796377755063569ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)25092;
int zero = 0;
unsigned long long int var_15 = 4435085886802508928ULL;
unsigned int var_16 = 2196697778U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073709526524ULL;
    value_mismatch |= var_16 != 2584253713U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_15, &var_16);
  checksum();
}
