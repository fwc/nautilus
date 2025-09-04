/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1388
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1388
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
void test(val<bool> var_5, val<unsigned short> var_8, val<long long int> var_11, val<short> var_13, val<int> zero, val<unsigned char*> var_19, val<unsigned long long int*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) ((var_11) >> (((((/* implicit */val<int>) var_13)) + (24369)))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) min((20ULL), (((/* implicit */val<unsigned long long int>) var_8)))))));
    *var_21 = ((/* implicit */val<unsigned int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)0;
unsigned short var_8 = (unsigned short)46597;
long long int var_11 = 9156468899161161598LL;
short var_13 = (short)-24351;
int zero = 0;
unsigned char var_19 = (unsigned char)231;
unsigned long long int var_20 = 10471601132811776308ULL;
unsigned int var_21 = 1608542012U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)218;
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_11, var_13, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
