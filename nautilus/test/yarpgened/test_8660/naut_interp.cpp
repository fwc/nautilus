/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8660
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8660
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
void test(val<signed char> var_0, val<unsigned short> var_3, val<short> var_5, val<unsigned char> var_8, val<long long int> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11, val<int*> var_12, val<unsigned short*> var_13) {
    *var_10 = ((/* implicit */val<short>) (val<unsigned short>)16368);
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((12087395925991313660ULL) == (((/* implicit */val<unsigned long long int>) var_9))))) + (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<unsigned short>)512)) : (((/* implicit */val<int>) var_3))))))) ? (((/* implicit */val<int>) var_3)) : (((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned char>)120)))) << ((((+(((/* implicit */val<int>) var_5)))) - (25673)))))));
    *var_12 = (+(((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)134))) >= (var_9))) ? (((((/* implicit */val<int>) (val<unsigned char>)158)) >> (((((/* implicit */val<int>) (val<unsigned char>)136)) - (115))))) : (((/* implicit */val<int>) (val<unsigned char>)145)))));
    *var_13 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (val<unsigned char>)122))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned short var_3 = (unsigned short)60530;
short var_5 = (short)25686;
unsigned char var_8 = (unsigned char)76;
long long int var_9 = -8023339543877699982LL;
int zero = 0;
short var_10 = (short)-26737;
signed char var_11 = (signed char)79;
int var_12 = -1554473538;
unsigned short var_13 = (unsigned short)31365;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)16368;
    value_mismatch |= var_11 != (signed char)114;
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != (unsigned short)65414;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
