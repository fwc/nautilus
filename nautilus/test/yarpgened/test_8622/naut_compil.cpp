/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8622
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8622
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
void test(val<unsigned short> var_4, val<short> var_5, val<short> var_6, val<int> var_8, val<long long int> var_10, val<unsigned int> var_12, val<int> zero, val<short*> var_13, val<short*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = var_6;
    *var_14 = ((/* implicit */val<short>) ((val<int>) ((val<short>) max((var_12), (((/* implicit */val<unsigned int>) var_8))))));
    *var_15 += ((((val<long long int>) (-(((/* implicit */val<int>) var_5))))) >= ((-((+(var_10))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) max((max((((/* implicit */val<long long int>) var_5)), (max((-9223372036854775782LL), (((/* implicit */val<long long int>) var_6)))))), (((/* implicit */val<long long int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)20654;
short var_5 = (short)12298;
short var_6 = (short)-1009;
int var_8 = -720541846;
long long int var_10 = 7654456498189798159LL;
unsigned int var_12 = 890966576U;
int zero = 0;
short var_13 = (short)5244;
short var_14 = (short)10343;
bool var_15 = (bool)0;
unsigned long long int var_16 = 15023020256250583904ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-1009;
    value_mismatch |= var_14 != (short)26474;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 20654ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_8, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
