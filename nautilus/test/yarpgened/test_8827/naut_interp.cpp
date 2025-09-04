/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8827
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8827
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
void test(val<signed char> var_3, val<int> zero, val<unsigned short*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 768557215286476031ULL)) ? (((/* implicit */val<int>) (val<short>)4002)) : (((/* implicit */val<int>) (val<unsigned short>)40360))));
    *var_17 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)25175);
    *var_18 += var_3;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
int zero = 0;
unsigned short var_16 = (unsigned short)51029;
unsigned long long int var_17 = 6435351789531332047ULL;
signed char var_18 = (signed char)-126;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)4002;
    value_mismatch |= var_17 != 25175ULL;
    value_mismatch |= var_18 != (signed char)92;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
