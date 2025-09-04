/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4138
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4138
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
void test(val<unsigned short> var_4, val<signed char> var_5, val<int> var_6, val<unsigned short> var_8, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) max(((-(((/* implicit */val<int>) var_5)))), (((((/* implicit */val<bool>) var_5)) ? (var_6) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) >= (((/* implicit */val<int>) var_4)))))))));
    *var_14 = ((/* implicit */val<bool>) (val<signed char>)-116);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18750;
signed char var_5 = (signed char)-32;
int var_6 = 1912009608;
unsigned short var_8 = (unsigned short)35254;
int zero = 0;
unsigned short var_13 = (unsigned short)56962;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)62344;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
