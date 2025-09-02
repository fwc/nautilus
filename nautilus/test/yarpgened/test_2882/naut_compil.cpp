/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2882
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2882
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
void test(val<unsigned char> var_4, val<unsigned char> var_8, val<int> zero, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15) {
    *var_13 += ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<bool>)1))));
    *var_14 = ((/* implicit */val<unsigned long long int>) var_4);
    *var_15 *= ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)112;
unsigned char var_8 = (unsigned char)247;
int zero = 0;
unsigned long long int var_13 = 10480871602422495457ULL;
unsigned long long int var_14 = 16777501573670138010ULL;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 10480871602422495458ULL;
    value_mismatch |= var_14 != 112ULL;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
