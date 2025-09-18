/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7951
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7951
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<unsigned short> var_2, val<signed char> var_3, val<signed char> var_4, val<unsigned short> var_10, val<short> var_13, val<bool> var_15, val<int> zero, val<unsigned short*> var_17, val<bool*> var_18, val<unsigned short*> var_19, val<signed char*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) ((var_0) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))))));
    *var_18 = ((/* implicit */val<bool>) max((*var_18), (((/* implicit */val<bool>) var_4))));
    *var_19 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) var_2))))), (((((/* implicit */val<int>) var_10)) % (((/* implicit */val<int>) var_10))))))) && (((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)4095)))))));
    *var_20 *= ((val<signed char>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) min((var_13), (((/* implicit */val<short>) var_15))))) : (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3416277293U;
unsigned short var_1 = (unsigned short)25950;
unsigned short var_2 = (unsigned short)11029;
signed char var_3 = (signed char)-93;
signed char var_4 = (signed char)102;
unsigned short var_10 = (unsigned short)55702;
short var_13 = (short)4391;
bool var_15 = (bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)21423;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)5179;
signed char var_20 = (signed char)-98;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)21423;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned short)5179;
    value_mismatch |= var_20 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_10, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
