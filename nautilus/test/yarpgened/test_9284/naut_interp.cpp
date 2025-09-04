/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9284
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9284
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
void test(val<long long int> var_2, val<unsigned char> var_5, val<int> var_7, val<short> var_9, val<unsigned long long int> var_11, val<long long int> var_12, val<unsigned short> var_13, val<unsigned short> var_16, val<int> var_17, val<long long int> var_18, val<int> zero, val<long long int*> var_19, val<long long int*> var_20, val<bool*> var_21, val<unsigned short*> var_22, val<unsigned short*> var_23) {
    *var_19 = (~(((((/* implicit */val<bool>) var_9)) ? (var_12) : (var_18))));
    *var_20 |= var_12;
    *var_21 = ((/* implicit */val<bool>) (+(var_12)));
    *var_22 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((var_11), (((/* implicit */val<unsigned long long int>) var_16))))) ? (max((((((/* implicit */val<bool>) var_17)) ? (var_18) : (((/* implicit */val<long long int>) 2147483647)))), (((/* implicit */val<long long int>) var_13)))) : (min((max((var_12), (((/* implicit */val<long long int>) 268435455U)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) (val<bool>)1)) : (var_7))))))));
    *var_23 = ((/* implicit */val<unsigned short>) max((*var_23), (((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) var_5)), (var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 315022743505388087LL;
unsigned char var_5 = (unsigned char)103;
int var_7 = 1931666685;
short var_9 = (short)-28771;
unsigned long long int var_11 = 17214780112032761355ULL;
long long int var_12 = -587017834556681585LL;
unsigned short var_13 = (unsigned short)45979;
unsigned short var_16 = (unsigned short)2370;
int var_17 = 1475511638;
long long int var_18 = 8480814447273205051LL;
int zero = 0;
long long int var_19 = 1565667045538377266LL;
long long int var_20 = -5012056182923927486LL;
bool var_21 = (bool)0;
unsigned short var_22 = (unsigned short)9947;
unsigned short var_23 = (unsigned short)8906;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 587017834556681584LL;
    value_mismatch |= var_20 != -1126484040289585LL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned short)32763;
    value_mismatch |= var_23 != (unsigned short)49719;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_9, var_11, var_12, var_13, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
