/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1052
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1052
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
void test(val<unsigned int> var_6, val<int> var_8, val<long long int> var_12, val<long long int> var_13, val<bool> var_17, val<int> zero, val<bool*> var_20, val<long long int*> var_21, val<signed char*> var_22, val<long long int*> var_23, val<unsigned short*> var_24) {
    *var_20 = ((var_12) > (((((/* implicit */val<bool>) (+(-6275120099201501726LL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) var_17)))) : (-6275120099201501705LL))));
    *var_21 = min((((((/* implicit */val<bool>) min((-6275120099201501702LL), (2032742817282594855LL)))) ? (((-6275120099201501726LL) + (var_12))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)50))))), (-6275120099201501740LL));
    *var_22 = ((/* implicit */val<signed char>) ((var_13) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17)))));
    *var_23 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<signed char>) -2089516966417256338LL))) > (var_8))))));
    *var_24 = ((/* implicit */val<unsigned short>) max((-6275120099201501724LL), (((/* implicit */val<long long int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3982614485U;
int var_8 = -1724544430;
long long int var_12 = 2330760352269511503LL;
long long int var_13 = -5631364146460097146LL;
bool var_17 = (bool)1;
int zero = 0;
bool var_20 = (bool)0;
long long int var_21 = 1087642757786657113LL;
signed char var_22 = (signed char)-111;
long long int var_23 = 2196787730674771304LL;
unsigned short var_24 = (unsigned short)63038;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != -6275120099201501740LL;
    value_mismatch |= var_22 != (signed char)-122;
    value_mismatch |= var_23 != 1LL;
    value_mismatch |= var_24 != (unsigned short)57301;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_12, var_13, var_17, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
