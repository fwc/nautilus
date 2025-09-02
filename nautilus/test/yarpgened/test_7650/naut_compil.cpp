/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7650
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7650
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
void test(val<unsigned short> var_4, val<signed char> var_5, val<unsigned long long int> var_7, val<long long int> var_10, val<int> zero, val<int*> var_12, val<int*> var_13, val<unsigned short*> var_14) {
    *var_12 += ((/* implicit */val<int>) min((((((/* implicit */val<bool>) 1863396137)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_4), (var_4))))) : (max((((/* implicit */val<unsigned long long int>) var_10)), (var_7))))), (((/* implicit */val<unsigned long long int>) var_5))));
    *var_13 = ((/* implicit */val<int>) (val<unsigned short>)0);
    *var_14 = ((/* implicit */val<unsigned short>) -1863396137);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7792;
signed char var_5 = (signed char)-22;
unsigned long long int var_7 = 2841220154948555345ULL;
long long int var_10 = -3710745923776076875LL;
int zero = 0;
int var_12 = 441955845;
int var_13 = 1693953072;
unsigned short var_14 = (unsigned short)11517;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 441963637;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (unsigned short)54487;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
