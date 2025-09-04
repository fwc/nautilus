/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1721
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1721
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
void test(val<signed char> var_12, val<int> zero, val<unsigned short*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) var_12);
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)1)) >> (((1299342021) - (1299342020)))))) || (((/* implicit */val<bool>) min(((val<unsigned short>)62066), (((/* implicit */val<unsigned short>) (val<signed char>)3)))))))) <= (((/* implicit */val<int>) (val<unsigned char>)11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-21;
int zero = 0;
unsigned short var_20 = (unsigned short)10538;
unsigned long long int var_21 = 7116367360258277127ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)65515;
    value_mismatch |= var_21 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
