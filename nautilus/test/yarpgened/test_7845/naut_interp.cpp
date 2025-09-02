/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7845
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7845
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_6, val<unsigned long long int> var_7, val<signed char> var_8, val<int> zero, val<bool*> var_10, val<signed char*> var_11, val<short*> var_12) {
    *var_10 ^= ((/* implicit */val<bool>) var_7);
    *var_11 = ((/* implicit */val<signed char>) var_6);
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((var_0) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)6391))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))) ? (((((/* implicit */val<bool>) 18160087016041035295ULL)) ? (((((/* implicit */val<int>) var_8)) % (((/* implicit */val<int>) (val<signed char>)24)))) : (((/* implicit */val<int>) (val<short>)-6391)))) : (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<int>) (val<unsigned short>)16383)) != (((/* implicit */val<int>) (val<unsigned short>)49153))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8592310522746555680ULL;
unsigned int var_6 = 122537317U;
unsigned long long int var_7 = 8879631554773290831ULL;
signed char var_8 = (signed char)-90;
int zero = 0;
bool var_10 = (bool)1;
signed char var_11 = (signed char)-44;
short var_12 = (short)32002;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != (signed char)101;
    value_mismatch |= var_12 != (short)-18;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
