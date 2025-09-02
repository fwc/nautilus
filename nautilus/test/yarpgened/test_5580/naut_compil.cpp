/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5580
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5580
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
void test(val<bool> var_0, val<signed char> var_4, val<short> var_7, val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_12, val<short*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_10)) ? (var_10) : (((/* implicit */val<unsigned int>) (((+(((/* implicit */val<int>) (val<unsigned char>)8)))) * ((~(((/* implicit */val<int>) var_7)))))))));
    *var_13 &= ((/* implicit */val<short>) ((((/* implicit */val<int>) max((((((/* implicit */val<bool>) (val<unsigned char>)255)) && (((/* implicit */val<bool>) var_7)))), (var_0)))) >= (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_0))))) < (((((/* implicit */val<bool>) 7020919820048177321ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (4294967288U))))))));
    *var_14 -= ((/* implicit */val<unsigned char>) (~(7020919820048177321ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
signed char var_4 = (signed char)7;
short var_7 = (short)24952;
unsigned int var_10 = 3035800345U;
int zero = 0;
unsigned char var_12 = (unsigned char)121;
short var_13 = (short)8511;
unsigned char var_14 = (unsigned char)218;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)25;
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != (unsigned char)132;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
