/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 236
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=236
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
void test(val<signed char> var_0, val<int> var_1, val<unsigned int> var_3, val<unsigned long long int> var_5, val<int> var_10, val<signed char> var_12, val<int> var_13, val<unsigned short> var_15, val<signed char> var_16, val<short> var_17, val<int> zero, val<unsigned int*> var_18, val<int*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) max((var_5), (((/* implicit */val<unsigned long long int>) var_12))));
    *var_19 = ((/* implicit */val<int>) min((((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_15)))))))), (var_17)));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_0)), (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) var_13)) : (var_3)))))) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
int var_1 = 768534432;
unsigned int var_3 = 2152105845U;
unsigned long long int var_5 = 14245050219402379131ULL;
int var_10 = 1038956362;
signed char var_12 = (signed char)94;
int var_13 = 2083014758;
unsigned short var_15 = (unsigned short)34723;
signed char var_16 = (signed char)88;
short var_17 = (short)27816;
int zero = 0;
unsigned int var_18 = 992656337U;
int var_19 = -1259969378;
long long int var_20 = 9209595517848554768LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1997815675U;
    value_mismatch |= var_19 != 0;
    value_mismatch |= var_20 != 27816LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_10, var_12, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
