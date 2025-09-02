/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9561
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
void test(val<signed char> var_1, val<unsigned int> var_3, val<int> zero, val<unsigned long long int*> var_15, val<unsigned char*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)42);
    *var_16 = ((/* implicit */val<unsigned char>) var_1);
    *var_17 = ((/* implicit */val<unsigned short>) (-(((val<unsigned int>) ((((/* implicit */val<bool>) 909692277U)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)54))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
unsigned int var_3 = 362219817U;
int zero = 0;
unsigned long long int var_15 = 4045336246386835595ULL;
unsigned char var_16 = (unsigned char)140;
unsigned short var_17 = (unsigned short)54444;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 42ULL;
    value_mismatch |= var_16 != (unsigned char)215;
    value_mismatch |= var_17 != (unsigned short)63191;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
