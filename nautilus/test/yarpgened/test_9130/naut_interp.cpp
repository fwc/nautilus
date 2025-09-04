/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9130
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9130
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
void test(val<int> var_2, val<signed char> var_6, val<short> var_13, val<short> var_14, val<int> zero, val<short*> var_20, val<int*> var_21, val<unsigned short*> var_22) {
    *var_20 = var_14;
    *var_21 &= ((/* implicit */val<int>) ((((/* implicit */val<int>) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */val<long long int>) var_6)))) >= (max((1443237495342937991LL), (((/* implicit */val<long long int>) var_2))))))) <= (((/* implicit */val<int>) var_14))));
    *var_22 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) ((1443237495342937998LL) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)29880)))))) ? (((1443237495342937986LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)24)) ^ (((/* implicit */val<int>) (val<short>)4096)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1399820278;
signed char var_6 = (signed char)-125;
short var_13 = (short)-9159;
short var_14 = (short)24519;
int zero = 0;
short var_20 = (short)-3779;
int var_21 = 1302173776;
unsigned short var_22 = (unsigned short)38146;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)24519;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != (unsigned short)37888;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_13, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
