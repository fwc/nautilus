/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5996
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5996
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
void test(val<unsigned int> var_0, val<long long int> var_3, val<int> zero, val<signed char*> var_15, val<long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) var_3);
    *var_16 = ((/* implicit */val<long long int>) var_0);
    *var_17 *= ((/* implicit */val<unsigned long long int>) (val<signed char>)-87);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 867619487U;
long long int var_3 = 8303901165472442621LL;
int zero = 0;
signed char var_15 = (signed char)68;
long long int var_16 = -2462729894847498390LL;
unsigned long long int var_17 = 10532834513712381955ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-3;
    value_mismatch |= var_16 != 867619487LL;
    value_mismatch |= var_17 != 5980600992500350715ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
