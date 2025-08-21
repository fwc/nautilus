/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 860
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=860
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
void test(val<long long int> var_4, val<short> var_5, val<unsigned int> var_6, val<signed char> var_7, val<unsigned int> var_8, val<signed char> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) min((var_8), (((/* implicit */val<unsigned int>) var_7))));
    *var_12 = ((/* implicit */val<unsigned char>) max((*var_12), (((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) (val<bool>)1)))) : (((var_4) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))))) >= (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1022699999274555635LL;
short var_5 = (short)28512;
unsigned int var_6 = 784756940U;
signed char var_7 = (signed char)47;
unsigned int var_8 = 2915974935U;
signed char var_10 = (signed char)96;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
unsigned char var_12 = (unsigned char)127;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)47;
    value_mismatch |= var_12 != (unsigned char)127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
