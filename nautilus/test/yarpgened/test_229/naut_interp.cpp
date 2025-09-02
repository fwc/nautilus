/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 229
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=229
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_7, val<short> var_8, val<long long int> var_11, val<long long int> var_12, val<int> zero, val<long long int*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) max(((~(7696582471741492908LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))))), (min((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)79))) : (0ULL))), (max((var_3), (var_7)))))));
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)32)) ? (-6605030146844041853LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)28631)))))) == (min((((/* implicit */val<unsigned long long int>) var_12)), (((((/* implicit */val<unsigned long long int>) var_12)) + (var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2258229783U;
unsigned long long int var_3 = 12613547802353316263ULL;
unsigned long long int var_5 = 822940491041510079ULL;
unsigned long long int var_7 = 2908532715209340421ULL;
short var_8 = (short)-14239;
long long int var_11 = -312095654674837382LL;
long long int var_12 = -8990245580839688729LL;
int zero = 0;
long long int var_13 = -3389941656972268736LL;
long long int var_14 = -9163947690055511037LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2258229783LL;
    value_mismatch |= var_14 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_8, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
