/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5065
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5065
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
void test(val<signed char> var_4, val<int> var_10, val<signed char> var_11, val<int> zero, val<long long int*> var_13, val<int*> var_14, val<int*> var_15, val<long long int*> var_16) {
    *var_13 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)13755))));
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)252))))) : (var_10)))) ? (((/* implicit */val<long long int>) (-((~(((/* implicit */val<int>) (val<unsigned char>)234))))))) : ((~(9223372036854775807LL)))));
    *var_15 = (~(((/* implicit */val<int>) (((!(((/* implicit */val<bool>) 304137358)))) && (((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)3)))))))));
    *var_16 = ((/* implicit */val<long long int>) ((304137358) == (((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)21;
int var_10 = 1106547037;
signed char var_11 = (signed char)5;
int zero = 0;
long long int var_13 = -3176497565766194936LL;
int var_14 = -2123421480;
int var_15 = -130557041;
long long int var_16 = -7989798046597717956LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -13756LL;
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != -1;
    value_mismatch |= var_16 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
