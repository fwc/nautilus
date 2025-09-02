/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6651
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6651
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
void test(val<unsigned short> var_1, val<unsigned short> var_5, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned short> var_9, val<signed char> var_12, val<int> zero, val<int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15) {
    *var_13 += ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_9))))) : (((((/* implicit */val<bool>) 16259888448281877811ULL)) ? (var_8) : (var_7))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((16259888448281877808ULL) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_14 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_1))));
    *var_15 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) min((((/* implicit */val<unsigned long long int>) var_12)), (((((/* implicit */val<bool>) var_5)) ? (16259888448281877811ULL) : (((/* implicit */val<unsigned long long int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16078;
unsigned short var_5 = (unsigned short)19024;
unsigned int var_7 = 684493286U;
unsigned int var_8 = 1938106845U;
unsigned short var_9 = (unsigned short)24854;
signed char var_12 = (signed char)60;
int zero = 0;
int var_13 = 990897937;
unsigned int var_14 = 1194921533U;
unsigned int var_15 = 888083366U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 990873082;
    value_mismatch |= var_14 != 4294951217U;
    value_mismatch |= var_15 != 60U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_8, var_9, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
