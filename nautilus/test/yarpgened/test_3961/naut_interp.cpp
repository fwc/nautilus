/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3961
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3961
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
void test(val<unsigned short> var_0, val<unsigned short> var_6, val<unsigned short> var_7, val<int> zero, val<bool*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<bool>) var_7);
    *var_11 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<long long int>) 9223372036854775807LL))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (140733193388032LL))))))), (var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4919;
unsigned short var_6 = (unsigned short)63757;
unsigned short var_7 = (unsigned short)15679;
int zero = 0;
bool var_10 = (bool)1;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
