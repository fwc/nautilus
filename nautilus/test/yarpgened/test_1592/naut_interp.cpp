/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1592
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1592
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<short> var_3, val<int> var_6, val<unsigned int> var_7, val<unsigned char> var_8, val<unsigned short> var_9, val<unsigned char> var_10, val<int> var_12, val<int> zero, val<int*> var_13, val<long long int*> var_14, val<unsigned int*> var_15, val<unsigned char*> var_16, val<unsigned short*> var_17) {
    *var_13 = ((((/* implicit */val<int>) (val<short>)-26933)) + (((/* implicit */val<int>) (val<unsigned short>)65535)));
    *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_7))) ? (((/* implicit */val<unsigned long long int>) max((var_12), (((/* implicit */val<int>) var_8))))) : (((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) ^ (6ULL))) | (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_9))))))))))));
    *var_15 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))) + (((((/* implicit */val<unsigned int>) var_12)) & (var_1))))));
    *var_16 = ((/* implicit */val<unsigned char>) var_9);
    *var_17 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)241)) | (((/* implicit */val<int>) (val<short>)12880))))) * (((((/* implicit */val<bool>) var_10)) ? (var_1) : (var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1403234622U;
unsigned int var_2 = 2176942780U;
short var_3 = (short)23472;
int var_6 = -1025007268;
unsigned int var_7 = 395930651U;
unsigned char var_8 = (unsigned char)58;
unsigned short var_9 = (unsigned short)41031;
unsigned char var_10 = (unsigned char)145;
int var_12 = 1020807686;
int zero = 0;
int var_13 = -845644614;
long long int var_14 = 8834756853396926256LL;
unsigned int var_15 = 559760878U;
unsigned char var_16 = (unsigned char)177;
unsigned short var_17 = (unsigned short)47033;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 38602;
    value_mismatch |= var_14 != 8834756853396926256LL;
    value_mismatch |= var_15 != 2054U;
    value_mismatch |= var_16 != (unsigned char)71;
    value_mismatch |= var_17 != (unsigned short)28510;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_7, var_8, var_9, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
