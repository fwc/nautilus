/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1273
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1273
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
void test(val<bool> var_0, val<int> var_2, val<short> var_5, val<unsigned int> var_6, val<short> var_8, val<bool> var_9, val<signed char> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_13, val<unsigned char*> var_14) {
    *var_13 |= ((/* implicit */val<unsigned char>) var_2);
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (min((var_6), (((/* implicit */val<unsigned int>) var_0)))) : (((/* implicit */val<unsigned int>) ((var_0) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_11)))))))) ? (max((((((/* implicit */val<bool>) var_5)) ? (1829163537) : (var_2))), (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) min((var_10), (((/* implicit */val<signed char>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_2 = -1344710046;
short var_5 = (short)-30362;
unsigned int var_6 = 1047498592U;
short var_8 = (short)5428;
bool var_9 = (bool)1;
signed char var_10 = (signed char)110;
unsigned short var_11 = (unsigned short)17956;
int zero = 0;
unsigned char var_13 = (unsigned char)118;
unsigned char var_14 = (unsigned char)118;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)118;
    value_mismatch |= var_14 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_8, var_9, var_10, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
