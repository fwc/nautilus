/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 125
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=125
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_0, val<unsigned short> var_2, val<unsigned int> var_3, val<unsigned int> var_6, val<unsigned int> var_8, val<long long int> var_10, val<long long int> var_11, val<signed char> var_12, val<unsigned int> var_14, val<int> zero, val<long long int*> var_15, val<unsigned int*> var_16, val<unsigned int*> var_17, val<signed char*> var_18) {
    *var_15 = ((/* implicit */val<long long int>) var_14);
    *var_16 = ((/* implicit */val<unsigned int>) min(((+(4551171530660593515LL))), (min((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<long long int>) var_6)) : (-678328372126982123LL))), (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_12)), (var_8))))))));
    *var_17 = ((/* implicit */val<unsigned int>) min((*var_17), (((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) var_2)), (var_11))))));
    *var_18 -= ((/* implicit */val<signed char>) (+((+(max((var_10), (var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3874078530903243726LL;
unsigned short var_2 = (unsigned short)53854;
unsigned int var_3 = 1789533041U;
unsigned int var_6 = 1851337705U;
unsigned int var_8 = 416532487U;
long long int var_10 = -6535575805070854556LL;
long long int var_11 = -2978874904079598686LL;
signed char var_12 = (signed char)-50;
unsigned int var_14 = 2632066504U;
int zero = 0;
long long int var_15 = -724001429083471368LL;
unsigned int var_16 = 34786491U;
unsigned int var_17 = 1128480834U;
signed char var_18 = (signed char)-41;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 2632066504LL;
    value_mismatch |= var_16 != 416532487U;
    value_mismatch |= var_17 != 1128480834U;
    value_mismatch |= var_18 != (signed char)9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_8, var_10, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
