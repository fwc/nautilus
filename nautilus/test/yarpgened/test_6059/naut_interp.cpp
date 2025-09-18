/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6059
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6059
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
void test(val<short> var_3, val<signed char> var_4, val<unsigned short> var_5, val<unsigned long long int> var_6, val<long long int> var_8, val<short> var_11, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_5)) * ((~(((/* implicit */val<int>) var_4))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_5)), (var_6)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (1525918106) : (((/* implicit */val<int>) var_11))))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) / (var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22876;
signed char var_4 = (signed char)-97;
unsigned short var_5 = (unsigned short)28043;
unsigned long long int var_6 = 2112200952980547329ULL;
long long int var_8 = -7471750239766945184LL;
short var_11 = (short)-10460;
int zero = 0;
unsigned int var_18 = 2101890640U;
unsigned int var_19 = 2528379297U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2692128U;
    value_mismatch |= var_19 != 4294967199U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_8, var_11, zero, &var_18, &var_19);
  checksum();
}
