/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2323
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2323
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
void test(val<int> zero, val<long long int*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) ((13897026596927007689ULL) / (((/* implicit */val<unsigned long long int>) 576460752303423487LL))));
    *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) 63LL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_18 = -6542426802845664129LL;
short var_19 = (short)31014;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 24LL;
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
