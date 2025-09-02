/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9462
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9462
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
void test(val<long long int> var_10, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = (val<signed char>)-30;
    *var_12 *= ((/* implicit */val<unsigned long long int>) 357032369890915521LL);
    *var_13 = ((/* implicit */val<unsigned long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -1254978337920607793LL;
int zero = 0;
signed char var_11 = (signed char)29;
unsigned long long int var_12 = 4885736178480653190ULL;
unsigned long long int var_13 = 14219182509060031341ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-30;
    value_mismatch |= var_12 != 1324290806014115846ULL;
    value_mismatch |= var_13 != 17191765735788943823ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
