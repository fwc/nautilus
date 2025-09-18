/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1599
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1599
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
void test(val<signed char> var_0, val<unsigned long long int> var_6, val<long long int> var_12, val<int> zero, val<int*> var_13, val<unsigned int*> var_14, val<signed char*> var_15, val<unsigned int*> var_16) {
    *var_13 = ((/* implicit */val<int>) min((*var_13), (((/* implicit */val<int>) var_6))));
    *var_14 -= ((/* implicit */val<unsigned int>) var_6);
    *var_15 = ((/* implicit */val<signed char>) min((var_12), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (+(783004803U)))) || (((/* implicit */val<bool>) 2039968059U)))))));
    *var_16 = (~(((val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)13883)) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned long long int var_6 = 17543239404879295655ULL;
long long int var_12 = -2096775894185373021LL;
int zero = 0;
int var_13 = 155783690;
unsigned int var_14 = 1844019983U;
signed char var_15 = (signed char)-79;
unsigned int var_16 = 4080619561U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 155783690;
    value_mismatch |= var_14 != 74600040U;
    value_mismatch |= var_15 != (signed char)-93;
    value_mismatch |= var_16 != 176516444U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
