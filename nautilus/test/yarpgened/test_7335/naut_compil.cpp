/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7335
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7335
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
void test(val<long long int> var_0, val<int> var_2, val<unsigned int> var_8, val<int> zero, val<short*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<short>) (-(((max((var_0), (((/* implicit */val<long long int>) var_2)))) % (((/* implicit */val<long long int>) max((374538793U), (var_8))))))));
    *var_11 = ((/* implicit */val<long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8601319928243524094LL;
int var_2 = -753854692;
unsigned int var_8 = 2723401618U;
int zero = 0;
short var_10 = (short)27050;
long long int var_11 = -1219395930162428430LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-5916;
    value_mismatch |= var_11 != -753854692LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
