/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5984
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5984
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
void test(val<signed char> var_0, val<unsigned long long int> var_1, val<short> var_4, val<unsigned int> var_7, val<unsigned int> var_9, val<int> zero, val<unsigned char*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) max((*var_10), (((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (((-(1993853264U))) < (var_7))))) == (((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) var_9)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-6735))))) : (var_1))))))));
    *var_11 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_4)) ^ (max((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<short>)-3156)))), (((((/* implicit */val<int>) (val<short>)24112)) << (((var_1) - (498114255120908956ULL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned long long int var_1 = 498114255120908957ULL;
short var_4 = (short)679;
unsigned int var_7 = 2355866567U;
unsigned int var_9 = 4064999136U;
int zero = 0;
unsigned char var_10 = (unsigned char)20;
unsigned int var_11 = 2354334751U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)20;
    value_mismatch |= var_11 != 48839U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_7, var_9, zero, &var_10, &var_11);
  checksum();
}
