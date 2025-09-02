/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3109
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3109
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
void test(val<unsigned int> var_7, val<unsigned char> var_9, val<unsigned long long int> var_10, val<short> var_11, val<bool> var_14, val<bool> var_16, val<int> zero, val<signed char*> var_17, val<signed char*> var_18, val<unsigned long long int*> var_19) {
    *var_17 = ((/* implicit */val<signed char>) (~(((val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_11)))))));
    *var_18 = ((/* implicit */val<signed char>) min((((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<int>) var_14)) % (((/* implicit */val<int>) var_16)))))), ((+(((/* implicit */val<int>) max(((val<signed char>)97), ((val<signed char>)(-127 - 1)))))))));
    *var_19 = var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1182291364U;
unsigned char var_9 = (unsigned char)29;
unsigned long long int var_10 = 4412502383694378952ULL;
short var_11 = (short)13859;
bool var_14 = (bool)1;
bool var_16 = (bool)1;
int zero = 0;
signed char var_17 = (signed char)-104;
signed char var_18 = (signed char)38;
unsigned long long int var_19 = 13278935380807985225ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-30;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != 4412502383694378952ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_10, var_11, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
