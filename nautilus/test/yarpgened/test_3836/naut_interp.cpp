/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3836
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3836
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
void test(val<signed char> var_0, val<short> var_2, val<unsigned int> var_6, val<int> zero, val<signed char*> var_16, val<unsigned short*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_2)), (max((((val<long long int>) var_0)), (((/* implicit */val<long long int>) ((val<unsigned int>) var_6)))))));
    *var_17 = ((/* implicit */val<unsigned short>) min((*var_17), (((/* implicit */val<unsigned short>) ((val<signed char>) ((val<long long int>) ((((((/* implicit */val<int>) (val<signed char>)-49)) + (2147483647))) >> (((((/* implicit */val<int>) (val<signed char>)-72)) + (101))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
short var_2 = (short)14759;
unsigned int var_6 = 3078623748U;
int zero = 0;
signed char var_16 = (signed char)37;
unsigned short var_17 = (unsigned short)28466;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-89;
    value_mismatch |= var_17 != (unsigned short)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
