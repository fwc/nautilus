/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 778
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=778
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
void test(val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<bool>)1)) / (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))) <= (((/* implicit */val<int>) ((-909903494) < (((/* implicit */val<int>) (val<signed char>)107)))))))) | (((((-542563284) + (((/* implicit */val<int>) (val<unsigned short>)0)))) - (((((/* implicit */val<int>) (val<signed char>)-124)) + (((/* implicit */val<int>) (val<unsigned char>)249))))))));
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((542563284) & (((((/* implicit */val<int>) (val<short>)32767)) & (((/* implicit */val<int>) (val<unsigned short>)55889))))))) ^ (((((/* implicit */val<unsigned long long int>) ((-542563284) | (2011738181)))) ^ (1059280202820446803ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_15 = (unsigned short)48283;
unsigned short var_16 = (unsigned short)14393;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)9135;
    value_mismatch |= var_16 != (unsigned short)33902;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
