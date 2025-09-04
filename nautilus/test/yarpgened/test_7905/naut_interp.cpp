/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7905
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7905
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
void test(val<unsigned short> var_2, val<long long int> var_4, val<short> var_7, val<unsigned char> var_8, val<unsigned long long int> var_13, val<unsigned int> var_15, val<unsigned long long int> var_16, val<int> zero, val<int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<unsigned long long int>) var_4)) : (var_13)))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) / (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (8384962689163251970ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) max((*var_19), (var_16)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39166;
long long int var_4 = -6582368557593047250LL;
short var_7 = (short)-18763;
unsigned char var_8 = (unsigned char)172;
unsigned long long int var_13 = 970127315736102016ULL;
unsigned int var_15 = 3131955257U;
unsigned long long int var_16 = 2558301846063570764ULL;
int zero = 0;
int var_18 = -1772134409;
unsigned long long int var_19 = 6098542871308895030ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 39166;
    value_mismatch |= var_19 != 6098542871308895030ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_13, var_15, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
