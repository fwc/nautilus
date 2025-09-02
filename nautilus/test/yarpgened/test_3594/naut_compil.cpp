/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3594
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3594
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
void test(val<unsigned short> var_0, val<unsigned int> var_1, val<unsigned long long int> var_2, val<int> var_4, val<unsigned short> var_5, val<long long int> var_6, val<unsigned long long int> var_7, val<short> var_11, val<short> var_12, val<unsigned long long int> var_13, val<int> zero, val<unsigned char*> var_15, val<unsigned short*> var_16, val<bool*> var_17, val<unsigned long long int*> var_18, val<short*> var_19) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -5442530902833242239LL)) ? (((/* implicit */val<int>) (val<unsigned char>)159)) : (((/* implicit */val<int>) (val<signed char>)-93))))) ? (((val<int>) var_7)) : (((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<unsigned long long int>) max(((-(var_1))), (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_5)), (var_4))))))) : ((~(min((var_2), (var_13)))))));
    *var_16 = ((/* implicit */val<unsigned short>) var_2);
    *var_17 -= ((/* implicit */val<bool>) ((((/* implicit */val<int>) max((((/* implicit */val<short>) ((val<unsigned char>) var_6))), (var_12)))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_5)), (var_7)))))))));
    *var_18 *= ((/* implicit */val<unsigned long long int>) var_4);
    *var_19 = ((/* implicit */val<short>) min((((/* implicit */val<int>) var_11)), ((-((+(((/* implicit */val<int>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30643;
unsigned int var_1 = 2294578731U;
unsigned long long int var_2 = 16223396432340602975ULL;
int var_4 = 1767268417;
unsigned short var_5 = (unsigned short)62091;
long long int var_6 = -6456812328622366579LL;
unsigned long long int var_7 = 12300442370615757439ULL;
short var_11 = (short)-32065;
short var_12 = (short)649;
unsigned long long int var_13 = 10252196882576770525ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)180;
unsigned short var_16 = (unsigned short)58129;
bool var_17 = (bool)0;
unsigned long long int var_18 = 4901716370538042526ULL;
short var_19 = (short)-30976;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)213;
    value_mismatch |= var_16 != (unsigned short)20575;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 15228468661656714270ULL;
    value_mismatch |= var_19 != (short)-32065;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
