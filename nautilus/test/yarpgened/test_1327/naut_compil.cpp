/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1327
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1327
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<unsigned char> var_3, val<short> var_6, val<unsigned int> var_7, val<long long int> var_11, val<int> zero, val<unsigned long long int*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) (+(max((var_7), (((/* implicit */val<unsigned int>) var_2))))))) : (((((((/* implicit */val<long long int>) var_0)) / (var_11))) * (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_3)))))))));
    *var_19 = ((/* implicit */val<long long int>) max((*var_19), ((+((+(var_11)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2729029171U;
unsigned char var_2 = (unsigned char)58;
unsigned char var_3 = (unsigned char)176;
short var_6 = (short)-19824;
unsigned int var_7 = 1999924943U;
long long int var_11 = 8730198864741201881LL;
int zero = 0;
unsigned long long int var_18 = 13907510996012586719ULL;
long long int var_19 = -2505722138799751017LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1999924943ULL;
    value_mismatch |= var_19 != 8730198864741201881LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
