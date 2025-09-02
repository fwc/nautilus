/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5129
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5129
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
void test(val<short> var_1, val<short> var_2, val<int> var_4, val<unsigned long long int> var_5, val<short> var_6, val<long long int> var_8, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) var_8))));
    *var_14 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) var_6)) + (var_4))) + (((((/* implicit */val<int>) var_1)) + (((/* implicit */val<int>) (val<signed char>)-3))))))), (((((/* implicit */val<bool>) max((925310561U), (((/* implicit */val<unsigned int>) (val<short>)6432))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_2)) ^ (((/* implicit */val<int>) var_2))))) : (var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10242;
short var_2 = (short)-1991;
int var_4 = -1854186744;
unsigned long long int var_5 = 11024526899692163227ULL;
short var_6 = (short)15376;
long long int var_8 = 4024029791871645099LL;
int zero = 0;
unsigned short var_13 = (unsigned short)59132;
unsigned short var_14 = (unsigned short)43257;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)59132;
    value_mismatch |= var_14 != (unsigned short)28435;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
