/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2162
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
void test(val<bool> var_1, val<bool> var_4, val<unsigned long long int> var_5, val<int> var_6, val<signed char> var_9, val<int> var_10, val<unsigned char> var_14, val<unsigned long long int> var_15, val<unsigned long long int> var_16, val<unsigned long long int> var_17, val<int> zero, val<signed char*> var_18, val<unsigned int*> var_19, val<int*> var_20) {
    *var_18 -= ((/* implicit */val<signed char>) ((val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) (val<short>)-7791)) + (2147483647))) << (((/* implicit */val<int>) (val<bool>)0))))) % (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)14358))) : (var_5))))));
    *var_19 += ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned long long int>) ((var_1) ? (((/* implicit */val<int>) (val<unsigned char>)5)) : (((/* implicit */val<int>) var_1))))) : (var_15))) > (max((((((/* implicit */val<bool>) var_14)) ? (var_16) : (((/* implicit */val<unsigned long long int>) var_6)))), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (var_15)))))));
    *var_20 &= var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
bool var_4 = (bool)0;
unsigned long long int var_5 = 16632020187117058166ULL;
int var_6 = -964485280;
signed char var_9 = (signed char)110;
int var_10 = -239613963;
unsigned char var_14 = (unsigned char)66;
unsigned long long int var_15 = 9569620377243172031ULL;
unsigned long long int var_16 = 755387942661403065ULL;
unsigned long long int var_17 = 16953110134189833617ULL;
int zero = 0;
signed char var_18 = (signed char)85;
unsigned int var_19 = 803691025U;
int var_20 = -589852681;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)25;
    value_mismatch |= var_19 != 803691025U;
    value_mismatch |= var_20 != -795375627;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_9, var_10, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
