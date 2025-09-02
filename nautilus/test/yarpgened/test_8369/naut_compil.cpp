/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8369
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8369
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
void test(val<long long int> var_3, val<short> var_9, val<unsigned long long int> var_12, val<short> var_15, val<unsigned short> var_18, val<int> zero, val<long long int*> var_19, val<long long int*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) (+(((((/* implicit */val<bool>) ((val<unsigned long long int>) var_3))) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_15))))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)57344)) ? (((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) var_9)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-1865))))))) : (((/* implicit */val<int>) var_9))));
    *var_21 -= ((/* implicit */val<bool>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7086700033269132659LL;
short var_9 = (short)-9726;
unsigned long long int var_12 = 16741244287827657138ULL;
short var_15 = (short)406;
unsigned short var_18 = (unsigned short)52361;
int zero = 0;
long long int var_19 = -5562457960497898861LL;
long long int var_20 = 6862018916774461597LL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 52361LL;
    value_mismatch |= var_20 != 16818LL;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_12, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
