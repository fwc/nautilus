/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1545
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1545
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
void test(val<short> var_0, val<unsigned int> var_1, val<short> var_2, val<unsigned int> var_3, val<signed char> var_4, val<long long int> var_8, val<int> zero, val<signed char*> var_10, val<unsigned int*> var_11) {
    *var_10 += ((/* implicit */val<signed char>) var_3);
    *var_11 = ((/* implicit */val<unsigned int>) max((*var_11), (((((var_8) == (((/* implicit */val<long long int>) min((3670016), (((/* implicit */val<int>) (val<unsigned char>)69))))))) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_0), (var_0))))) >= (((((/* implicit */val<bool>) var_4)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13535;
unsigned int var_1 = 3599940065U;
short var_2 = (short)25238;
unsigned int var_3 = 1419906261U;
signed char var_4 = (signed char)47;
long long int var_8 = 2018735922588016882LL;
int zero = 0;
signed char var_10 = (signed char)69;
unsigned int var_11 = 3687575395U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)26;
    value_mismatch |= var_11 != 3687575395U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
