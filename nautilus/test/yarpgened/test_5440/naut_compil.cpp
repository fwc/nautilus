/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5440
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5440
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
void test(val<long long int> var_0, val<bool> var_1, val<signed char> var_2, val<signed char> var_9, val<short> var_10, val<int> zero, val<int*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) var_9)), (var_0)));
    *var_12 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) | (((/* implicit */val<int>) var_1))))), (min((913164529U), (((/* implicit */val<unsigned int>) var_2))))))), (((((/* implicit */val<bool>) (~(1460223535)))) ? (min((((/* implicit */val<long long int>) (val<signed char>)75)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7563145379428512176LL;
bool var_1 = (bool)1;
signed char var_2 = (signed char)-47;
signed char var_9 = (signed char)109;
short var_10 = (short)463;
int zero = 0;
int var_11 = 220748412;
signed char var_12 = (signed char)-5;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 109;
    value_mismatch |= var_12 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
