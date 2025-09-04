/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8575
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8575
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
void test(val<short> var_0, val<short> var_2, val<unsigned char> var_6, val<signed char> var_7, val<bool> var_9, val<bool> var_11, val<bool> var_13, val<int> zero, val<long long int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) var_11);
    *var_17 = ((/* implicit */val<short>) max((max((((/* implicit */val<long long int>) var_2)), (((var_13) ? (-863795927774418998LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))), (((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (-863795927774418998LL))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31195;
short var_2 = (short)-12877;
unsigned char var_6 = (unsigned char)182;
signed char var_7 = (signed char)14;
bool var_9 = (bool)0;
bool var_11 = (bool)1;
bool var_13 = (bool)0;
int zero = 0;
long long int var_16 = 7255648575619779799LL;
short var_17 = (short)-28005;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1LL;
    value_mismatch |= var_17 != (short)182;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_9, var_11, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
