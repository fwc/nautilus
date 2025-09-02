/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2709
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2709
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
void test(val<int> var_4, val<unsigned long long int> var_5, val<bool> var_6, val<unsigned short> var_7, val<bool> var_8, val<short> var_9, val<int> zero, val<unsigned char*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) var_9))));
    *var_15 = ((((/* implicit */val<bool>) var_4)) ? (((((((/* implicit */val<int>) var_9)) < (((/* implicit */val<int>) var_8)))) ? (max((var_5), (((/* implicit */val<unsigned long long int>) var_4)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (-5056281732450081729LL)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1920294484;
unsigned long long int var_5 = 6373625858260098146ULL;
bool var_6 = (bool)0;
unsigned short var_7 = (unsigned short)43891;
bool var_8 = (bool)1;
short var_9 = (short)-8694;
int zero = 0;
unsigned char var_14 = (unsigned char)87;
unsigned long long int var_15 = 14990063245332699850ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)10;
    value_mismatch |= var_15 != 6373625858260098146ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
