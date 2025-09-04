/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5030
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5030
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
void test(val<short> var_2, val<short> var_10, val<bool> var_11, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_15, val<signed char*> var_16) {
    *var_15 = max(((~(max((3284339959U), (((/* implicit */val<unsigned int>) var_10)))))), (((/* implicit */val<unsigned int>) (((~(((/* implicit */val<int>) var_14)))) ^ (((/* implicit */val<int>) var_11))))));
    *var_16 = ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)312;
short var_10 = (short)-9574;
bool var_11 = (bool)0;
unsigned char var_14 = (unsigned char)81;
int zero = 0;
unsigned int var_15 = 1975973308U;
signed char var_16 = (signed char)14;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4294967214U;
    value_mismatch |= var_16 != (signed char)56;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, var_11, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
