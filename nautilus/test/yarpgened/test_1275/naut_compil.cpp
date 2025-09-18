/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1275
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1275
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
void test(val<short> var_7, val<int> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned int*> var_14, val<short*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((val<long long int>) -1063963579))))))));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (var_8) : (((/* implicit */val<int>) var_9)))))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)251))))) : (((((/* implicit */val<bool>) (val<unsigned char>)222)) ? (-16777216LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-32564)))))));
    *var_16 = ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)31554;
int var_8 = 1992837109;
unsigned char var_9 = (unsigned char)96;
int zero = 0;
unsigned int var_14 = 1652444025U;
short var_15 = (short)-19301;
long long int var_16 = -8970336454667144970LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1652444025U;
    value_mismatch |= var_15 != (short)251;
    value_mismatch |= var_16 != 31554LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_9, zero, &var_14, &var_15, &var_16);
  checksum();
}
