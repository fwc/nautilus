/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7857
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7857
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
void test(val<int> var_5, val<unsigned int> var_10, val<unsigned short> var_12, val<short> var_13, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18, val<signed char*> var_19) {
    *var_17 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned int>) var_12)), (var_10)));
    *var_18 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_13)), (var_5)));
    *var_19 = ((/* implicit */val<signed char>) 7536361569244095522LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1321121835;
unsigned int var_10 = 4289416940U;
unsigned short var_12 = (unsigned short)54256;
short var_13 = (short)23574;
int zero = 0;
unsigned char var_17 = (unsigned char)83;
unsigned int var_18 = 1374700807U;
signed char var_19 = (signed char)-65;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)240;
    value_mismatch |= var_18 != 1321121835U;
    value_mismatch |= var_19 != (signed char)34;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, var_12, var_13, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
