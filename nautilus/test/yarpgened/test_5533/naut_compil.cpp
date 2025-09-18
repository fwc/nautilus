/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5533
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5533
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
void test(val<unsigned long long int> var_0, val<bool> var_2, val<unsigned short> var_5, val<long long int> var_6, val<bool> var_7, val<long long int> var_9, val<unsigned short> var_13, val<unsigned int> var_14, val<signed char> var_16, val<long long int> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned short*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) (((+(((var_18) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16))))))) ^ (((((/* implicit */val<bool>) ((0U) * (var_14)))) ? ((+(-4162691937439646874LL))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 8775983476656090604ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)65535)) : (((/* implicit */val<int>) (val<unsigned short>)20365)))))))));
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_2)) >= (((/* implicit */val<int>) var_13))))), (((val<unsigned short>) (val<unsigned short>)45170)))))) < (((((/* implicit */val<bool>) (val<short>)0)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))))))))));
    *var_21 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15794446103366225384ULL;
bool var_2 = (bool)0;
unsigned short var_5 = (unsigned short)42888;
long long int var_6 = -625860119912140461LL;
bool var_7 = (bool)1;
long long int var_9 = -2716935974552124047LL;
unsigned short var_13 = (unsigned short)40329;
unsigned int var_14 = 48918915U;
signed char var_16 = (signed char)100;
long long int var_18 = 2037293123928742610LL;
int zero = 0;
unsigned int var_19 = 1830302952U;
unsigned short var_20 = (unsigned short)54188;
long long int var_21 = 7021029648511619109LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1528734921U;
    value_mismatch |= var_20 != (unsigned short)54188;
    value_mismatch |= var_21 != 42888LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_7, var_9, var_13, var_14, var_16, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
