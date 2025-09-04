/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5933
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5933
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
void test(val<unsigned char> var_3, val<short> var_13, val<int> zero, val<short*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 13054177159668615122ULL))))) + ((+(((/* implicit */val<int>) var_13)))))))));
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)50;
short var_13 = (short)-28151;
int zero = 0;
short var_15 = (short)-7210;
long long int var_16 = -6910891927704843963LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != -6910891927704843963LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
