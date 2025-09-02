/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8806
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8806
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
void test(val<unsigned int> var_1, val<bool> var_2, val<bool> var_4, val<bool> var_5, val<short> var_6, val<unsigned char> var_7, val<bool> var_8, val<unsigned short> var_11, val<short> var_15, val<int> zero, val<short*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_4)), (var_7))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_2))))) - (var_1)))));
    *var_20 = ((/* implicit */val<signed char>) ((val<int>) (+(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_8)))))));
    *var_21 += ((/* implicit */val<signed char>) (!((!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_5)), (var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1271746998U;
bool var_2 = (bool)0;
bool var_4 = (bool)0;
bool var_5 = (bool)0;
short var_6 = (short)-15486;
unsigned char var_7 = (unsigned char)126;
bool var_8 = (bool)1;
unsigned short var_11 = (unsigned short)2316;
short var_15 = (short)-12215;
int zero = 0;
short var_19 = (short)-24065;
signed char var_20 = (signed char)85;
signed char var_21 = (signed char)-116;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (signed char)-126;
    value_mismatch |= var_21 != (signed char)-115;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_11, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
