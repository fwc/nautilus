/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3076
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3076
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
void test(val<int> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_6, val<unsigned long long int> var_10, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) max((*var_12), (((/* implicit */val<unsigned short>) var_2))));
    *var_13 = ((/* implicit */val<bool>) var_0);
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (((/* implicit */val<int>) (val<short>)25644)) : (((/* implicit */val<int>) (val<signed char>)53))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) : (((/* implicit */val<int>) (val<unsigned char>)40))))) : (var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 71084791;
unsigned long long int var_2 = 7965729183267807586ULL;
unsigned long long int var_6 = 10787231881522321923ULL;
unsigned long long int var_10 = 17400302712273730072ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)10579;
bool var_13 = (bool)0;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)57698;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
