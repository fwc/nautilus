/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2963
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2963
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
void test(val<signed char> var_1, val<unsigned long long int> var_11, val<signed char> var_15, val<int> zero, val<signed char*> var_19, val<unsigned long long int*> var_20) {
    *var_19 += ((/* implicit */val<signed char>) ((val<unsigned int>) var_11));
    *var_20 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_1), (var_15)))) ? (((/* implicit */val<int>) ((val<signed char>) 17695069617192209035ULL))) : (((val<int>) (val<signed char>)-24)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)76;
unsigned long long int var_11 = 2331862409784537664ULL;
signed char var_15 = (signed char)50;
int zero = 0;
signed char var_19 = (signed char)110;
unsigned long long int var_20 = 7316918845123366533ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-82;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_15, zero, &var_19, &var_20);
  checksum();
}
