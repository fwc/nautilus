/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6384
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6384
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
void test(val<unsigned int> var_5, val<unsigned int> var_9, val<unsigned char> var_11, val<unsigned int> var_12, val<int> zero, val<unsigned long long int*> var_17, val<bool*> var_18) {
    *var_17 &= ((/* implicit */val<unsigned long long int>) ((var_12) << ((((+(((2813612013U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)18450))))))) - (2813612004U)))));
    *var_18 = ((/* implicit */val<bool>) ((var_9) | (((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_11))))) | ((~(var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 187786039U;
unsigned int var_9 = 2854670582U;
unsigned char var_11 = (unsigned char)202;
unsigned int var_12 = 1971482163U;
int zero = 0;
unsigned long long int var_17 = 4799748694738080394ULL;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 2550136832ULL;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, var_11, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
