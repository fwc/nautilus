/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4701
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4701
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
void test(val<short> var_0, val<long long int> var_18, val<int> zero, val<short*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<short>) ((val<unsigned long long int>) ((val<unsigned short>) var_18)));
    *var_20 = ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22364;
long long int var_18 = 1808664033740533924LL;
int zero = 0;
short var_19 = (short)-6478;
unsigned long long int var_20 = 9348273830961520016ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)12452;
    value_mismatch |= var_20 != 18446744073709529252ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
