/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3239
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3239
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
void test(val<long long int> var_0, val<long long int> var_2, val<long long int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) (-((+(var_17)))))))))));
    *var_19 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7526194414692027108LL;
long long int var_2 = -1461969580901044556LL;
long long int var_17 = -8709741957103430405LL;
int zero = 0;
unsigned long long int var_18 = 294860348164410782ULL;
short var_19 = (short)6336;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 294860348164410782ULL;
    value_mismatch |= var_19 != (short)-19172;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
