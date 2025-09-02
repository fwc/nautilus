/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1974
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
void test(val<unsigned int> var_0, val<short> var_1, val<unsigned short> var_2, val<int> var_3, val<bool> var_5, val<unsigned char> var_8, val<unsigned short> var_9, val<short> var_10, val<unsigned int> var_11, val<int> zero, val<signed char*> var_13, val<unsigned short*> var_14, val<short*> var_15, val<unsigned short*> var_16, val<bool*> var_17) {
    *var_13 = ((/* implicit */val<signed char>) max((max((var_11), (((/* implicit */val<unsigned int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)-117)) : (((/* implicit */val<int>) var_2))))))), (min((3279266395U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) var_5)))))))));
    *var_14 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) max((((/* implicit */val<short>) (val<unsigned char>)6)), (var_10))))));
    *var_15 = ((/* implicit */val<short>) var_8);
    *var_16 = ((/* implicit */val<unsigned short>) var_0);
    *var_17 -= ((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<signed char>)-47))))) : (((((/* implicit */val<bool>) var_3)) ? (3079263725U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)116)))))))), (13451813438148714803ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3795596283U;
short var_1 = (short)4743;
unsigned short var_2 = (unsigned short)12347;
int var_3 = 1040807139;
bool var_5 = (bool)0;
unsigned char var_8 = (unsigned char)244;
unsigned short var_9 = (unsigned short)16209;
short var_10 = (short)-30938;
unsigned int var_11 = 2756259951U;
int zero = 0;
signed char var_13 = (signed char)62;
unsigned short var_14 = (unsigned short)1205;
short var_15 = (short)9710;
unsigned short var_16 = (unsigned short)38056;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-117;
    value_mismatch |= var_14 != (unsigned short)6;
    value_mismatch |= var_15 != (short)244;
    value_mismatch |= var_16 != (unsigned short)13307;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
