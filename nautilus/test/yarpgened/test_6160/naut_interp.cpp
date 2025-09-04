/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6160
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6160
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<signed char> var_7, val<int> var_8, val<int> zero, val<unsigned int*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) (val<short>)0);
    *var_11 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_7))))) >> (((/* implicit */val<int>) ((val<bool>) var_7)))))) ? (var_8) : (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_0))))) ? ((((val<bool>)1) ? (-1) : (-355751161))) : (((/* implicit */val<int>) (val<short>)-32744))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-651;
unsigned long long int var_2 = 16110033625886473227ULL;
signed char var_7 = (signed char)-122;
int var_8 = 1766908063;
int zero = 0;
unsigned int var_10 = 1921004068U;
signed char var_11 = (signed char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0U;
    value_mismatch |= var_11 != (signed char)120;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
