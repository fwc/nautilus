/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1835
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1835
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
void test(val<bool> var_5, val<unsigned int> var_6, val<unsigned long long int> var_10, val<unsigned short> var_11, val<int> var_13, val<int> zero, val<unsigned long long int*> var_14, val<unsigned char*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) max((var_13), (((/* implicit */val<int>) var_5))));
    *var_15 *= ((/* implicit */val<unsigned char>) var_6);
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) var_6)))))))) <= (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) ^ (((/* implicit */val<int>) (val<short>)5368))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_11))))) : (var_10)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
unsigned int var_6 = 2452663945U;
unsigned long long int var_10 = 15900335312824270720ULL;
unsigned short var_11 = (unsigned short)29926;
int var_13 = -2031759802;
int zero = 0;
unsigned long long int var_14 = 7773787060601900331ULL;
unsigned char var_15 = (unsigned char)99;
short var_16 = (short)-26604;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1ULL;
    value_mismatch |= var_15 != (unsigned char)251;
    value_mismatch |= var_16 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
