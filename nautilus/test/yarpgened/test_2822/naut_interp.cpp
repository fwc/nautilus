/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2822
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2822
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
void test(val<unsigned long long int> var_1, val<short> var_4, val<unsigned short> var_15, val<int> zero, val<bool*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = (!(((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) ((val<unsigned char>) (val<bool>)1))) : (((/* implicit */val<int>) (val<bool>)1))))));
    *var_21 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) ((3661220449U) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-9056))))))))) ? (var_1) : (16475116454607023603ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 909412381992952975ULL;
short var_4 = (short)-7223;
unsigned short var_15 = (unsigned short)11190;
int zero = 0;
bool var_20 = (bool)1;
unsigned long long int var_21 = 3011766842498513928ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 909412381992952975ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_15, zero, &var_20, &var_21);
  checksum();
}
