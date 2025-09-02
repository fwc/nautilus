/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4477
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4477
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
void test(val<unsigned short> var_2, val<short> var_5, val<unsigned int> var_6, val<unsigned long long int> var_10, val<unsigned long long int> var_17, val<int> zero, val<unsigned int*> var_20, val<bool*> var_21, val<bool*> var_22, val<unsigned short*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<int>) (val<short>)18364)) | (((/* implicit */val<int>) (val<unsigned short>)47504))))))) | (min((max((((/* implicit */val<unsigned long long int>) var_5)), (var_17))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 3484283951858348241ULL)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<short>)(-32767 - 1)))))))))))));
    *var_21 = ((/* implicit */val<bool>) var_6);
    *var_22 = ((/* implicit */val<bool>) ((val<unsigned short>) var_2));
    *var_23 = ((/* implicit */val<unsigned short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55299;
short var_5 = (short)-17130;
unsigned int var_6 = 3501012033U;
unsigned long long int var_10 = 10153565204166422651ULL;
unsigned long long int var_17 = 14156848100648865538ULL;
int zero = 0;
unsigned int var_20 = 4017206412U;
bool var_21 = (bool)1;
bool var_22 = (bool)1;
unsigned short var_23 = (unsigned short)30119;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4017206412U;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned short)12411;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_10, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
