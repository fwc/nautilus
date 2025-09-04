/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2845
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2845
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
void test(val<unsigned short> var_0, val<short> var_2, val<bool> var_3, val<long long int> var_6, val<long long int> var_7, val<short> var_9, val<int> zero, val<long long int*> var_10, val<int*> var_11, val<signed char*> var_12) {
    *var_10 = var_6;
    *var_11 = ((/* implicit */val<int>) max((var_7), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<int>) var_9)) : ((-(((/* implicit */val<int>) var_3)))))))));
    *var_12 = ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32357;
short var_2 = (short)-12018;
bool var_3 = (bool)1;
long long int var_6 = 5920816710762313372LL;
long long int var_7 = 1711279930645186533LL;
short var_9 = (short)14126;
int zero = 0;
long long int var_10 = -2376962792448072984LL;
int var_11 = -236208036;
signed char var_12 = (signed char)-103;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 5920816710762313372LL;
    value_mismatch |= var_11 != -1185118235;
    value_mismatch |= var_12 != (signed char)14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
