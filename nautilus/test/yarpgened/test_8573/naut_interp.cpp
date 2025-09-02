/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8573
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8573
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
void test(val<unsigned short> var_2, val<long long int> var_5, val<unsigned short> var_9, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((var_9), (var_9)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (min((var_12), (((/* implicit */val<unsigned int>) (val<signed char>)-1))))))), (8325014026043014259LL)));
    *var_14 = ((/* implicit */val<signed char>) (+(min((var_5), (min((((/* implicit */val<long long int>) var_12)), (var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26867;
long long int var_5 = 6226447360930872389LL;
unsigned short var_9 = (unsigned short)33782;
unsigned int var_12 = 607715764U;
int zero = 0;
unsigned short var_13 = (unsigned short)38375;
signed char var_14 = (signed char)-66;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)26867;
    value_mismatch |= var_14 != (signed char)-76;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
