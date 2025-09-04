/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4741
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4741
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
void test(val<unsigned int> var_1, val<long long int> var_2, val<long long int> var_3, val<unsigned int> var_4, val<int> var_5, val<unsigned int> var_6, val<int> var_7, val<unsigned int> var_8, val<bool> var_9, val<int> zero, val<long long int*> var_10, val<int*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) var_7);
    *var_11 &= ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) ? (var_3) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<bool>) var_1))) + (((/* implicit */val<int>) ((var_7) < (((/* implicit */val<int>) var_9))))))))));
    *var_12 = ((((/* implicit */val<bool>) max((var_8), (var_1)))) ? (((((/* implicit */val<int>) ((val<short>) var_4))) * (((var_7) / (var_5))))) : (((/* implicit */val<int>) min((((/* implicit */val<signed char>) ((var_5) < (var_7)))), (((val<signed char>) var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4209755647U;
long long int var_2 = -7938435715310698332LL;
long long int var_3 = 8431706519146542493LL;
unsigned int var_4 = 6972579U;
int var_5 = -243795153;
unsigned int var_6 = 937790137U;
int var_7 = -127673457;
unsigned int var_8 = 2527774942U;
bool var_9 = (bool)0;
int zero = 0;
long long int var_10 = -7811421545069462565LL;
int var_11 = 862258633;
int var_12 = -2125037949;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -127673457LL;
    value_mismatch |= var_11 != 805373321;
    value_mismatch |= var_12 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
