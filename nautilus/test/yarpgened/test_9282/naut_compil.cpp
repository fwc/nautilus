/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9282
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9282
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
void test(val<unsigned short> var_0, val<unsigned int> var_1, val<unsigned char> var_2, val<short> var_6, val<signed char> var_7, val<unsigned int> var_9, val<unsigned char> var_11, val<short> var_13, val<bool> var_14, val<int> zero, val<short*> var_15, val<unsigned short*> var_16, val<unsigned long long int*> var_17, val<short*> var_18, val<unsigned int*> var_19) {
    *var_15 = ((/* implicit */val<short>) min((*var_15), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_13), (((/* implicit */val<short>) var_7))))) ? (((/* implicit */val<int>) max(((val<short>)(-32767 - 1)), (((/* implicit */val<short>) var_7))))) : (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (3205697087U))))));
    *var_16 |= ((/* implicit */val<unsigned short>) (~((((!(((/* implicit */val<bool>) var_6)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_1)))));
    *var_17 += ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 *= ((/* implicit */val<short>) var_11);
    *var_19 = ((/* implicit */val<unsigned int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55487;
unsigned int var_1 = 3031654832U;
unsigned char var_2 = (unsigned char)32;
short var_6 = (short)15780;
signed char var_7 = (signed char)43;
unsigned int var_9 = 996232303U;
unsigned char var_11 = (unsigned char)167;
short var_13 = (short)10010;
bool var_14 = (bool)0;
int zero = 0;
short var_15 = (short)5911;
unsigned short var_16 = (unsigned short)63340;
unsigned long long int var_17 = 13645362415568349766ULL;
short var_18 = (short)17752;
unsigned int var_19 = 1193083508U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-10049;
    value_mismatch |= var_16 != (unsigned short)65391;
    value_mismatch |= var_17 != 13645362416564582069ULL;
    value_mismatch |= var_18 != (short)15464;
    value_mismatch |= var_19 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_9, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
