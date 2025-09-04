/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4094
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4094
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
void test(val<unsigned int> var_4, val<unsigned short> var_7, val<long long int> var_9, val<int> zero, val<short*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)30)) | (((/* implicit */val<int>) (val<short>)10365))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) var_9)))) : (((((/* implicit */val<bool>) (val<short>)-7046)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (var_4))))))));
    *var_19 |= ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2509258763U;
unsigned short var_7 = (unsigned short)57189;
long long int var_9 = 8884224187057200434LL;
int zero = 0;
short var_18 = (short)-7257;
long long int var_19 = 623774282013172852LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 623774282013212533LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_9, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
