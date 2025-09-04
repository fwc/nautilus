/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1328
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1328
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
void test(val<unsigned long long int> var_0, val<long long int> var_8, val<long long int> var_9, val<bool> var_10, val<int> zero, val<bool*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) var_9);
    *var_19 = (+(max((((/* implicit */val<unsigned long long int>) max((var_10), ((val<bool>)1)))), (max((var_0), (((/* implicit */val<unsigned long long int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 388478344972114884ULL;
long long int var_8 = 6673433686914507966LL;
long long int var_9 = -5562738974010724666LL;
bool var_10 = (bool)1;
int zero = 0;
bool var_18 = (bool)0;
unsigned long long int var_19 = 2080113239612990578ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 6673433686914507966ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, var_10, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
