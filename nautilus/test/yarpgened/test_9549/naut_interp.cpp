/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9549
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9549
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
void test(val<unsigned char> var_11, val<int> zero, val<bool*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<bool>) var_11);
    *var_18 ^= ((/* implicit */val<unsigned short>) ((min((((/* implicit */val<long long int>) (val<unsigned char>)104)), (((((/* implicit */val<bool>) (val<unsigned char>)164)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)152))) : (3608036578099515793LL))))) >> (((3526741856U) - (3526741816U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)158;
int zero = 0;
bool var_17 = (bool)0;
unsigned short var_18 = (unsigned short)10259;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned short)10259;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_17, &var_18);
  checksum();
}
