/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7936
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7936
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
void test(val<unsigned char> var_4, val<short> var_6, val<bool> var_12, val<short> var_18, val<int> zero, val<long long int*> var_20, val<unsigned int*> var_21, val<signed char*> var_22, val<bool*> var_23) {
    *var_20 = ((/* implicit */val<long long int>) ((val<short>) ((val<short>) var_12)));
    *var_21 = ((/* implicit */val<unsigned int>) (val<bool>)1);
    *var_22 = ((/* implicit */val<signed char>) min((max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)8340))) % (-5848357257727288727LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) | (((/* implicit */val<int>) (val<short>)-32765))))))), (((/* implicit */val<long long int>) var_18))));
    *var_23 = ((/* implicit */val<bool>) max((*var_23), (((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_12))))) >= (max((((/* implicit */val<unsigned long long int>) ((-9198711456457722041LL) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)97)))))), (((val<unsigned long long int>) var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)204;
short var_6 = (short)-1837;
bool var_12 = (bool)0;
short var_18 = (short)25562;
int zero = 0;
long long int var_20 = -7049541927992117943LL;
unsigned int var_21 = 2204809151U;
signed char var_22 = (signed char)-86;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != 1U;
    value_mismatch |= var_22 != (signed char)-108;
    value_mismatch |= var_23 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_12, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
