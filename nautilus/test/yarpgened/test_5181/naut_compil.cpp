/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5181
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5181
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
void test(val<signed char> var_2, val<short> var_4, val<unsigned short> var_5, val<int> var_6, val<int> zero, val<long long int*> var_13, val<bool*> var_14, val<long long int*> var_15, val<long long int*> var_16) {
    *var_13 = ((/* implicit */val<long long int>) var_2);
    *var_14 = ((/* implicit */val<bool>) max((*var_14), (((/* implicit */val<bool>) max(((+(max((((/* implicit */val<unsigned int>) var_4)), (0U))))), (((/* implicit */val<unsigned int>) var_5)))))));
    *var_15 = ((/* implicit */val<long long int>) var_6);
    *var_16 = ((/* implicit */val<long long int>) -1135703487);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-39;
short var_4 = (short)29235;
unsigned short var_5 = (unsigned short)57699;
int var_6 = -1628857957;
int zero = 0;
long long int var_13 = 2925885486467254165LL;
bool var_14 = (bool)1;
long long int var_15 = 4022114691965460313LL;
long long int var_16 = -1686974075008988022LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -39LL;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != -1628857957LL;
    value_mismatch |= var_16 != -1135703487LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
