/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8266
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8266
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
void test(val<bool> var_0, val<bool> var_2, val<long long int> var_8, val<long long int> var_10, val<unsigned short> var_13, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16, val<unsigned short*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (val<short>)19)) ^ (((/* implicit */val<int>) var_13))));
    *var_16 = ((/* implicit */val<unsigned long long int>) 4294967295U);
    *var_17 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) ^ (((4503599627370495LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)248))))))))));
    *var_18 = ((/* implicit */val<long long int>) ((val<unsigned short>) max((var_10), (var_8))));
    *var_19 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_2 = (bool)0;
long long int var_8 = -3411158988515608054LL;
long long int var_10 = 7672914749515330933LL;
unsigned short var_13 = (unsigned short)46427;
int zero = 0;
short var_15 = (short)-20992;
unsigned long long int var_16 = 2705741040522108868ULL;
unsigned short var_17 = (unsigned short)23605;
long long int var_18 = 2825745903478052160LL;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-19128;
    value_mismatch |= var_16 != 4294967295ULL;
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != 30069LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_10, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
