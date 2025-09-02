/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 381
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=381
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
void test(val<short> var_2, val<unsigned char> var_4, val<int> var_7, val<short> var_9, val<int> zero, val<unsigned int*> var_12, val<int*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned int>) ((0ULL) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))));
    *var_13 = ((/* implicit */val<int>) var_9);
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) (~(max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (5161838324825317354ULL))))))));
    *var_15 = ((/* implicit */val<unsigned char>) ((val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) min((var_9), (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31865;
unsigned char var_4 = (unsigned char)217;
int var_7 = 325166934;
short var_9 = (short)-13907;
int zero = 0;
unsigned int var_12 = 677583422U;
int var_13 = -1046444350;
unsigned char var_14 = (unsigned char)194;
unsigned char var_15 = (unsigned char)79;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1U;
    value_mismatch |= var_13 != -13907;
    value_mismatch |= var_14 != (unsigned char)194;
    value_mismatch |= var_15 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_9, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
