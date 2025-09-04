/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7035
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7035
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
void test(val<int> var_2, val<unsigned int> var_10, val<unsigned int> var_13, val<int> zero, val<long long int*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) ((((((/* implicit */val<unsigned int>) var_2)) * (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)18779))) / (917366613U))))) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_10) < (((var_13) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)43152))))))))))))));
    *var_17 = ((/* implicit */val<int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1379052486;
unsigned int var_10 = 15673595U;
unsigned int var_13 = 3282856322U;
int zero = 0;
long long int var_16 = -231771325841703136LL;
int var_17 = 1318775611;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -231771325841703136LL;
    value_mismatch |= var_17 != -1012110974;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
