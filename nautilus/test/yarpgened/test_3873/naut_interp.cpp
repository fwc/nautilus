/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3873
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
void test(val<signed char> var_0, val<unsigned char> var_3, val<long long int> var_7, val<int> zero, val<unsigned char*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) max((*var_19), (((/* implicit */val<unsigned char>) var_7))));
    *var_20 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) & (((/* implicit */val<int>) (val<short>)19539))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<signed char>)-62)) : (((/* implicit */val<int>) (val<short>)-2148))))) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (570347127U))))) > (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned char var_3 = (unsigned char)62;
long long int var_7 = 5624017046527078533LL;
int zero = 0;
unsigned char var_19 = (unsigned char)62;
signed char var_20 = (signed char)-74;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)133;
    value_mismatch |= var_20 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
