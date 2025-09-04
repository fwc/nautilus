/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 970
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=970
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
void test(val<unsigned int> var_0, val<signed char> var_2, val<long long int> var_11, val<int> zero, val<bool*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<bool>) var_0);
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) var_2)) ? (9084677658265284781LL) : (2648628731863688577LL)))))) ? (((((/* implicit */val<bool>) (~(var_11)))) ? (((/* implicit */val<int>) (val<unsigned short>)44060)) : (((/* implicit */val<int>) (val<short>)9493)))) : (((/* implicit */val<int>) (val<short>)9477))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2327405959U;
signed char var_2 = (signed char)127;
long long int var_11 = -2376251367532000910LL;
int zero = 0;
bool var_19 = (bool)0;
short var_20 = (short)13116;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (short)-21476;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_11, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
