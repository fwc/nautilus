/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6673
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6673
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
void test(val<bool> var_1, val<unsigned int> var_2, val<unsigned long long int> var_5, val<short> var_7, val<int> zero, val<unsigned int*> var_20, val<int*> var_21) {
    *var_20 *= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~((-(339237005)))))) ? ((+(((((/* implicit */val<bool>) var_5)) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))));
    *var_21 &= ((/* implicit */val<int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned int var_2 = 4107348066U;
unsigned long long int var_5 = 11483396185730661744ULL;
short var_7 = (short)-18472;
int zero = 0;
unsigned int var_20 = 4046999620U;
int var_21 = -333803572;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1832341952U;
    value_mismatch |= var_21 != -468711360;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
