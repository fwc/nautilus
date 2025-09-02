/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5157
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
void test(val<long long int> var_4, val<int> var_8, val<short> var_11, val<int> zero, val<unsigned long long int*> var_16, val<short*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_17 = ((/* implicit */val<short>) var_4);
    *var_18 = ((/* implicit */val<unsigned char>) ((((val<long long int>) var_4)) % (((/* implicit */val<long long int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7130810918947629057LL;
int var_8 = 1740245521;
short var_11 = (short)-8013;
int zero = 0;
unsigned long long int var_16 = 2859681467804697268ULL;
short var_17 = (short)-15351;
unsigned char var_18 = (unsigned char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 18446744073709543603ULL;
    value_mismatch |= var_17 != (short)22527;
    value_mismatch |= var_18 != (unsigned char)15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_11, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
