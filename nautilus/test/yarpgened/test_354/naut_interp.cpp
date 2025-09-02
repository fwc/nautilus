/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 354
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=354
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
void test(val<bool> var_4, val<short> var_9, val<bool> var_12, val<unsigned short> var_14, val<unsigned int> var_15, val<int> zero, val<long long int*> var_16, val<int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) var_14);
    *var_17 = ((/* implicit */val<int>) max((*var_17), (((/* implicit */val<int>) (!(var_12))))));
    *var_18 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((9143474044585895868ULL) + (((/* implicit */val<unsigned long long int>) -1797702644))))) ? (((((/* implicit */val<bool>) -1797702634)) ? (((/* implicit */val<unsigned long long int>) -1797702648)) : (18077077925167147028ULL))) : (((/* implicit */val<unsigned long long int>) -7900885991189201566LL)))) >= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) == (var_15)))) + (((/* implicit */val<int>) var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
short var_9 = (short)-31464;
bool var_12 = (bool)0;
unsigned short var_14 = (unsigned short)56934;
unsigned int var_15 = 823821295U;
int zero = 0;
long long int var_16 = 1157784256647364204LL;
int var_17 = 636864519;
signed char var_18 = (signed char)87;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 56934LL;
    value_mismatch |= var_17 != 636864519;
    value_mismatch |= var_18 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, var_12, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
