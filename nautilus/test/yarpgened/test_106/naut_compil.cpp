/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 106
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=106
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
void test(val<unsigned short> var_11, val<int> zero, val<int*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<int>) ((val<bool>) min((((/* implicit */val<unsigned short>) (val<signed char>)8)), (max((((/* implicit */val<unsigned short>) (val<unsigned char>)93)), (var_11))))));
    *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (((/* implicit */val<unsigned int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)2738;
int zero = 0;
int var_20 = -1107629268;
unsigned int var_21 = 3323052854U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_20, &var_21);
  checksum();
}
