/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3350
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3350
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
void test(val<unsigned short> var_0, val<unsigned short> var_3, val<unsigned int> var_8, val<int> var_12, val<unsigned short> var_16, val<int> zero, val<bool*> var_17, val<int*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((((val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_16))))) == (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<signed char>) var_12))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_8)) >= (6290619056265590109ULL))))))));
    *var_18 *= ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)76)) && ((val<bool>)1)));
    *var_19 = ((/* implicit */val<unsigned short>) max(((-(((/* implicit */val<int>) (((val<bool>)1) && ((val<bool>)1)))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(1040458706U)))) && (((/* implicit */val<bool>) var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18108;
unsigned short var_3 = (unsigned short)57648;
unsigned int var_8 = 542191404U;
int var_12 = -907965075;
unsigned short var_16 = (unsigned short)36016;
int zero = 0;
bool var_17 = (bool)0;
int var_18 = 208126413;
unsigned short var_19 = (unsigned short)23062;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 208126413;
    value_mismatch |= var_19 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, var_12, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
}
