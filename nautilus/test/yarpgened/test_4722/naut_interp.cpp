/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4722
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4722
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
void test(val<short> var_3, val<short> var_9, val<unsigned int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned int*> var_15) {
    *var_14 = max((((val<unsigned char>) (val<signed char>)-94)), (((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((val<unsigned char>) var_3))) > (((((/* implicit */val<int>) var_9)) % (((/* implicit */val<int>) var_9))))))));
    *var_15 &= var_13;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11563;
short var_9 = (short)14376;
unsigned int var_13 = 3230185696U;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
unsigned int var_15 = 1786812764U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)162;
    value_mismatch |= var_15 != 1082169408U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
