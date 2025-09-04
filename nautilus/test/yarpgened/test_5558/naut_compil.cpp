/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5558
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5558
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
void test(val<bool> var_6, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 10239825850968208571ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)23960))) : (8206918222741343045ULL)))) ? (((((/* implicit */val<bool>) 8206918222741343059ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-64))) : (10239825850968208581ULL))) : (((/* implicit */val<unsigned long long int>) 14U))))));
    *var_12 &= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) ((9223372036854775807LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)126)))))) < ((~(((/* implicit */val<int>) (val<signed char>)97)))))))));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
int zero = 0;
long long int var_11 = -247449763592697137LL;
unsigned short var_12 = (unsigned short)45158;
short var_13 = (short)-13105;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 63LL;
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
