/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7709
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7709
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
void test(val<unsigned int> var_1, val<long long int> var_6, val<int> zero, val<long long int*> var_10, val<unsigned long long int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) 13020998990604914029ULL);
    *var_11 = ((/* implicit */val<unsigned long long int>) max((*var_11), (((val<unsigned long long int>) var_1))));
    *var_12 = ((/* implicit */val<unsigned int>) (~(var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 325951880U;
long long int var_6 = -888751671171158869LL;
int zero = 0;
long long int var_10 = 5776939663148173663LL;
unsigned long long int var_11 = 6034515082400103515ULL;
unsigned int var_12 = 2356998748U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -5425745083104637587LL;
    value_mismatch |= var_11 != 6034515082400103515ULL;
    value_mismatch |= var_12 != 2779845460U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
