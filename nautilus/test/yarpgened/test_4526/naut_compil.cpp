/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4526
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4526
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
void test(val<unsigned long long int> var_1, val<long long int> var_2, val<unsigned int> var_7, val<long long int> var_18, val<int> zero, val<unsigned char*> var_20, val<short*> var_21, val<long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned char>) (~(min((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (14571759925777691747ULL))), (((/* implicit */val<unsigned long long int>) ((-9223372036854775780LL) == (((/* implicit */val<long long int>) 3676932851U)))))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (~(var_18)))) | (var_1)));
    *var_22 = ((/* implicit */val<long long int>) 618034427U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11085982621239856557ULL;
long long int var_2 = 2053854653182357021LL;
unsigned int var_7 = 923113464U;
long long int var_18 = 8581850176394220003LL;
int zero = 0;
unsigned char var_20 = (unsigned char)226;
short var_21 = (short)26813;
long long int var_22 = 6880697128719293625LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)255;
    value_mismatch |= var_21 != (short)-4163;
    value_mismatch |= var_22 != 618034427LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
