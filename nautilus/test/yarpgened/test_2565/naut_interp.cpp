/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2565
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2565
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
void test(val<short> var_4, val<unsigned char> var_10, val<unsigned char> var_14, val<int> zero, val<short*> var_17, val<signed char*> var_18, val<int*> var_19) {
    *var_17 &= ((/* implicit */val<short>) var_14);
    *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) var_10)), (5048732341935317670ULL))))));
    *var_19 = ((/* implicit */val<int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5835;
unsigned char var_10 = (unsigned char)197;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
short var_17 = (short)-28531;
signed char var_18 = (signed char)-65;
int var_19 = -1637507786;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (signed char)-65;
    value_mismatch |= var_19 != 5835;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
