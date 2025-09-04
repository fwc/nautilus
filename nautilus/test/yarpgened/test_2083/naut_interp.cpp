/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2083
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2083
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
void test(val<int> zero, val<long long int*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) (-(min((((((/* implicit */val<bool>) (val<unsigned short>)4095)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)13951))) : (576460752303423488ULL))), (((/* implicit */val<unsigned long long int>) 2487206361U))))));
    *var_21 *= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (val<signed char>)-28))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_20 = -6094050787481798549LL;
signed char var_21 = (signed char)78;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -13951LL;
    value_mismatch |= var_21 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
