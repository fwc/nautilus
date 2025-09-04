/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6464
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6464
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
void test(val<unsigned short> var_6, val<unsigned long long int> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) ((val<unsigned short>) ((val<short>) var_11)));
    *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_6)) << (((((val<unsigned int>) ((val<unsigned int>) 402977359))) - (402977359U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)50203;
unsigned long long int var_11 = 3298013278525667284ULL;
int zero = 0;
long long int var_12 = 1279127948278991167LL;
signed char var_13 = (signed char)123;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 14292LL;
    value_mismatch |= var_13 != (signed char)123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
