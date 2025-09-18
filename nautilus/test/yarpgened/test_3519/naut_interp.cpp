/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3519
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3519
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
void test(val<unsigned char> var_2, val<unsigned char> var_5, val<long long int> var_7, val<long long int> var_8, val<long long int> var_14, val<int> zero, val<unsigned char*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) var_8);
    *var_17 = ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned short>)52274)), (var_7)))) ? (((((/* implicit */val<bool>) (val<unsigned short>)13287)) ? (((/* implicit */val<int>) (val<unsigned short>)52274)) : (((/* implicit */val<int>) (val<unsigned short>)26291)))) : (((/* implicit */val<int>) var_5))))) - (((((((/* implicit */val<bool>) (val<unsigned short>)13266)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_14))) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)13262))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
unsigned char var_5 = (unsigned char)150;
long long int var_7 = 7960254970890553600LL;
long long int var_8 = 3142286687988797815LL;
long long int var_14 = -4820795326397835667LL;
int zero = 0;
unsigned char var_16 = (unsigned char)238;
long long int var_17 = 759237876429636195LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)119;
    value_mismatch |= var_17 != 38908LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_14, zero, &var_16, &var_17);
  checksum();
}
