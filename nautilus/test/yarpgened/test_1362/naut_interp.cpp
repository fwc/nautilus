/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1362
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1362
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
void test(val<int> zero, val<long long int*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) -24);
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) (val<signed char>)-88)) ? (((/* implicit */val<int>) (val<signed char>)-72)) : (((/* implicit */val<int>) (val<signed char>)-64))))))) ? ((+(max((((/* implicit */val<long long int>) (val<unsigned short>)22805)), (-2182828292474958737LL))))) : (((/* implicit */val<long long int>) ((((2097151) > (-1684458243))) ? ((~(((/* implicit */val<int>) (val<signed char>)-64)))) : ((+(((/* implicit */val<int>) (val<unsigned short>)42730)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_18 = 6984810788121675972LL;
unsigned short var_19 = (unsigned short)56235;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -24LL;
    value_mismatch |= var_19 != (unsigned short)22805;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19);
  checksum();
}
