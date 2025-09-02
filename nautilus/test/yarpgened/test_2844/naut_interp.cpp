/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2844
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2844
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_4, val<unsigned int> var_8, val<int> zero, val<unsigned short*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) ((val<int>) (val<unsigned char>)53));
    *var_15 = ((/* implicit */val<unsigned int>) min((*var_15), (min((((val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) var_8)) : (var_4)))), (((/* implicit */val<unsigned int>) var_1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
unsigned long long int var_4 = 16657078022253030632ULL;
unsigned int var_8 = 1931635672U;
int zero = 0;
unsigned short var_14 = (unsigned short)49851;
unsigned int var_15 = 2802447720U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)53;
    value_mismatch |= var_15 != 206U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
