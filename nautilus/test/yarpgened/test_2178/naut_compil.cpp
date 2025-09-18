/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2178
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2178
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
void test(val<int> zero, val<unsigned long long int*> var_18, val<short*> var_19) {
    *var_18 -= ((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<int>) (val<short>)-30060)) & (((/* implicit */val<int>) (val<unsigned char>)152))))));
    *var_19 = ((/* implicit */val<short>) (~(9223372036854775807LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_18 = 4667653134104226411ULL;
short var_19 = (short)19005;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4667653134104226267ULL;
    value_mismatch |= var_19 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19);
  checksum();
}
