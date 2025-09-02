/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9774
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9774
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
void test(val<unsigned char> var_5, val<unsigned int> var_10, val<unsigned long long int> var_12, val<int> var_13, val<unsigned int> var_17, val<int> zero, val<unsigned long long int*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2012620377104307957LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (var_10)))) ? (var_13) : (((/* implicit */val<int>) (val<short>)-12907))))));
    *var_21 |= ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((val<short>) (val<unsigned char>)157)))))), (((var_12) - (((/* implicit */val<unsigned long long int>) ((val<int>) var_17)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)97;
unsigned int var_10 = 1684142896U;
unsigned long long int var_12 = 26789044313546551ULL;
int var_13 = -1827943979;
unsigned int var_17 = 3477127939U;
int zero = 0;
unsigned long long int var_20 = 11644137372340077765ULL;
unsigned char var_21 = (unsigned char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1827943979ULL;
    value_mismatch |= var_21 != (unsigned char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, var_12, var_13, var_17, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
