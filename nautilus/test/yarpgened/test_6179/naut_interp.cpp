/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6179
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6179
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
void test(val<long long int> var_4, val<long long int> var_7, val<int> zero, val<signed char*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) (+(((((/* implicit */val<bool>) 9223372036854775807LL)) ? (5544947233879571671LL) : (((/* implicit */val<long long int>) 2147483647))))));
    *var_19 = ((/* implicit */val<unsigned int>) (((-(var_7))) << (((var_4) - (8300990054857271019LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8300990054857271022LL;
long long int var_7 = -1904195249115180950LL;
int zero = 0;
signed char var_18 = (signed char)-91;
unsigned int var_19 = 173937764U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-41;
    value_mismatch |= var_19 != 4093213872U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
