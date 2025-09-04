/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2117
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2117
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
void test(val<short> var_2, val<short> var_3, val<long long int> var_4, val<short> var_5, val<signed char> var_6, val<signed char> var_7, val<signed char> var_10, val<unsigned short> var_11, val<signed char> var_13, val<signed char> var_14, val<int> zero, val<short*> var_15, val<short*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (262143U)))) ? (max((((/* implicit */val<long long int>) max(((val<short>)8), (var_5)))), (max((-450661037146180054LL), (((/* implicit */val<long long int>) var_7)))))) : (((/* implicit */val<long long int>) max((((((/* implicit */val<int>) (val<unsigned short>)9)) | (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) max(((val<signed char>)-32), (var_10)))))))));
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (val<short>)7952)) & (((((/* implicit */val<bool>) var_2)) ? ((-(((/* implicit */val<int>) var_14)))) : (((/* implicit */val<int>) max(((val<unsigned short>)9), (((/* implicit */val<unsigned short>) var_13)))))))));
    *var_17 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) (val<unsigned short>)0)), (((((((/* implicit */val<bool>) (val<signed char>)-17)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : ((-9223372036854775807LL - 1LL)))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_3), (((/* implicit */val<short>) (val<signed char>)0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3404;
short var_3 = (short)5271;
long long int var_4 = 8247980473352584921LL;
short var_5 = (short)-31389;
signed char var_6 = (signed char)38;
signed char var_7 = (signed char)117;
signed char var_10 = (signed char)-68;
unsigned short var_11 = (unsigned short)37275;
signed char var_13 = (signed char)-101;
signed char var_14 = (signed char)55;
int zero = 0;
short var_15 = (short)-5492;
short var_16 = (short)684;
signed char var_17 = (signed char)-4;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)117;
    value_mismatch |= var_16 != (short)7936;
    value_mismatch |= var_17 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
