/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1754
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1754
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
void test(val<bool> var_0, val<short> var_1, val<short> var_4, val<unsigned char> var_6, val<short> var_7, val<unsigned short> var_9, val<short> var_12, val<unsigned char> var_13, val<bool> var_14, val<int> zero, val<unsigned long long int*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_0)) > (((/* implicit */val<int>) var_9))))), (((((/* implicit */val<bool>) var_4)) ? (0LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))))) ? (min((((((/* implicit */val<bool>) var_9)) ? (-1236744450) : (((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) ((val<bool>) 0LL))))) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) ((val<short>) -1236744443))), (var_9))))));
    *var_16 = ((/* implicit */val<int>) min((*var_16), (((/* implicit */val<int>) ((val<short>) ((val<unsigned long long int>) var_12))))));
    *var_17 = ((/* implicit */val<short>) min((((min((((/* implicit */val<long long int>) var_12)), (0LL))) ^ ((((val<bool>)1) ? (-1LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))), (((/* implicit */val<long long int>) min(((((val<bool>)1) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<signed char>)-58)))), (((/* implicit */val<int>) var_14)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_1 = (short)-25964;
short var_4 = (short)-14658;
unsigned char var_6 = (unsigned char)31;
short var_7 = (short)-17247;
unsigned short var_9 = (unsigned short)1525;
short var_12 = (short)4927;
unsigned char var_13 = (unsigned char)168;
bool var_14 = (bool)0;
int zero = 0;
unsigned long long int var_15 = 11558026510566410871ULL;
int var_16 = 986859797;
short var_17 = (short)-17784;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1525ULL;
    value_mismatch |= var_16 != 4927;
    value_mismatch |= var_17 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_7, var_9, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
}
