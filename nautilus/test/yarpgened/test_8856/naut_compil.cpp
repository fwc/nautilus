/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8856
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8856
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
void test(val<short> var_6, val<unsigned short> var_8, val<unsigned long long int> var_10, val<long long int> var_16, val<int> zero, val<short*> var_19, val<unsigned int*> var_20) {
    *var_19 *= ((/* implicit */val<short>) var_8);
    *var_20 += (((!(((/* implicit */val<bool>) var_16)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max(((!(((/* implicit */val<bool>) var_16)))), (((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_10)))))))) : (3821640773U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-32263;
unsigned short var_8 = (unsigned short)49904;
unsigned long long int var_10 = 17397407111486675965ULL;
long long int var_16 = -7362614231558887834LL;
int zero = 0;
short var_19 = (short)-2131;
unsigned int var_20 = 1887567034U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)19504;
    value_mismatch |= var_20 != 1414240511U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_10, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
