/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7894
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7894
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
void test(val<int> var_1, val<unsigned char> var_3, val<short> var_4, val<unsigned char> var_5, val<unsigned int> var_6, val<unsigned long long int> var_7, val<unsigned char> var_9, val<int> var_10, val<int> zero, val<unsigned int*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) (!((val<bool>)1)))), (var_3)))) ? (((/* implicit */val<unsigned int>) ((var_10) >> (((max((((/* implicit */val<unsigned int>) (val<unsigned short>)64512)), (var_6))) - (2461321193U)))))) : (((((/* implicit */val<bool>) ((var_7) - (var_7)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : ((~(var_6))))));
    *var_13 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) max((131071U), (((/* implicit */val<unsigned int>) var_9))))) ? (((/* implicit */val<int>) var_4)) : (var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -960063340;
unsigned char var_3 = (unsigned char)57;
short var_4 = (short)-1238;
unsigned char var_5 = (unsigned char)53;
unsigned int var_6 = 2461321217U;
unsigned long long int var_7 = 5810830764242353918ULL;
unsigned char var_9 = (unsigned char)11;
int var_10 = 1338407809;
int zero = 0;
unsigned int var_12 = 873786476U;
unsigned short var_13 = (unsigned short)41537;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1833646078U;
    value_mismatch |= var_13 != (unsigned short)64298;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_10, zero, &var_12, &var_13);
  checksum();
}
