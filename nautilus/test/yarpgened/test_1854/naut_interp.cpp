/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1854
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1854
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
void test(val<unsigned short> var_7, val<signed char> var_11, val<int> zero, val<short*> var_15, val<long long int*> var_16) {
    *var_15 |= ((/* implicit */val<short>) var_7);
    *var_16 = ((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_11))))))) && (((/* implicit */val<bool>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)7109;
signed char var_11 = (signed char)2;
int zero = 0;
short var_15 = (short)-27093;
long long int var_16 = 6627436305134163181LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-24593;
    value_mismatch |= var_16 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, zero, &var_15, &var_16);
  checksum();
}
