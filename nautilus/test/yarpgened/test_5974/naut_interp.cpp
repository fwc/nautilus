/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5974
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
void test(val<unsigned long long int> var_6, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12) {
    *var_11 &= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)59)) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(var_6)))))))));
    *var_12 = ((/* implicit */val<unsigned short>) (val<signed char>)-58);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5970094690304675140ULL;
int zero = 0;
long long int var_11 = -3145739015698106648LL;
unsigned short var_12 = (unsigned short)16847;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0LL;
    value_mismatch |= var_12 != (unsigned short)65478;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
