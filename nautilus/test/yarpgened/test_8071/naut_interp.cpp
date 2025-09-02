/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8071
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8071
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
void test(val<short> var_5, val<short> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (!(((((/* implicit */val<int>) var_5)) > (((/* implicit */val<int>) var_10)))))))));
    *var_13 = ((/* implicit */val<unsigned int>) (-9223372036854775807LL - 1LL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5547;
short var_10 = (short)15050;
int zero = 0;
unsigned long long int var_12 = 11555766600618610696ULL;
unsigned int var_13 = 1328491002U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 18446744073709551615ULL;
    value_mismatch |= var_13 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
