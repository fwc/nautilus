/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4573
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4573
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
void test(val<bool> var_5, val<signed char> var_11, val<signed char> var_14, val<int> zero, val<unsigned long long int*> var_16, val<long long int*> var_17, val<bool*> var_18, val<signed char*> var_19) {
    *var_16 -= ((/* implicit */val<unsigned long long int>) var_11);
    *var_17 = ((/* implicit */val<long long int>) max((var_14), (((/* implicit */val<signed char>) (val<bool>)1))));
    *var_18 = (!(((/* implicit */val<bool>) 8526535116227969828LL)));
    *var_19 = ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
signed char var_11 = (signed char)89;
signed char var_14 = (signed char)-109;
int zero = 0;
unsigned long long int var_16 = 5819458632916269411ULL;
long long int var_17 = 6794235636510385785LL;
bool var_18 = (bool)1;
signed char var_19 = (signed char)-85;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 5819458632916269322ULL;
    value_mismatch |= var_17 != 1LL;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
