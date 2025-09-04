/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4330
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4330
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
void test(val<unsigned int> var_0, val<long long int> var_2, val<unsigned int> var_3, val<int> var_12, val<signed char> var_15, val<int> zero, val<signed char*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((2798236680U), (1496730616U)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))) : (((val<int>) 1496730609U))))), (((((/* implicit */val<bool>) max((10242200310276845473ULL), (((/* implicit */val<unsigned long long int>) -284507678507424559LL))))) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))) : (var_2))) : (((((/* implicit */val<bool>) 1496730615U)) ? (-2364201193177798295LL) : (((/* implicit */val<long long int>) var_0))))))));
    *var_17 = ((/* implicit */val<unsigned int>) min((*var_17), (((/* implicit */val<unsigned int>) max((-1920141174), (((/* implicit */val<int>) (val<unsigned short>)65531)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1206928982U;
long long int var_2 = -7230306437775764593LL;
unsigned int var_3 = 3292587113U;
int var_12 = -2102751093;
signed char var_15 = (signed char)-82;
int zero = 0;
signed char var_16 = (signed char)80;
unsigned int var_17 = 1518553384U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-82;
    value_mismatch |= var_17 != 65531U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_12, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
