/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2286
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2286
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
void test(val<int> var_0, val<unsigned long long int> var_3, val<signed char> var_4, val<short> var_6, val<int> var_7, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -2702566110170992390LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (162337071U)))) ? (((((/* implicit */val<bool>) var_4)) ? (var_0) : (var_7))) : (((((/* implicit */val<bool>) var_3)) ? (2147483647) : (131072)))))));
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) min((var_6), (var_6))))));
    *var_13 |= ((/* implicit */val<signed char>) 266231090U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1021737821;
unsigned long long int var_3 = 17605409077730390135ULL;
signed char var_4 = (signed char)-31;
short var_6 = (short)-38;
int var_7 = -352668349;
bool var_9 = (bool)1;
int zero = 0;
unsigned long long int var_11 = 9003814330768493348ULL;
long long int var_12 = 284418663668630361LL;
signed char var_13 = (signed char)89;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1021737821ULL;
    value_mismatch |= var_12 != -38LL;
    value_mismatch |= var_13 != (signed char)123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
