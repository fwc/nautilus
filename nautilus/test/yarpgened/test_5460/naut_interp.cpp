/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5460
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5460
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
void test(val<long long int> var_4, val<short> var_7, val<signed char> var_12, val<unsigned char> var_18, val<int> zero, val<short*> var_19, val<long long int*> var_20) {
    *var_19 &= ((/* implicit */val<short>) var_18);
    *var_20 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<short>) ((val<unsigned char>) var_4))), (min((((/* implicit */val<short>) var_12)), (var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7956133137415548664LL;
short var_7 = (short)5065;
signed char var_12 = (signed char)17;
unsigned char var_18 = (unsigned char)37;
int zero = 0;
short var_19 = (short)-1877;
long long int var_20 = 1437896303993741994LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)33;
    value_mismatch |= var_20 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_12, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
