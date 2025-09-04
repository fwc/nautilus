/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1677
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1677
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
void test(val<int> var_0, val<long long int> var_3, val<unsigned char> var_5, val<unsigned short> var_10, val<int> zero, val<int*> var_18, val<signed char*> var_19, val<int*> var_20) {
    *var_18 = ((/* implicit */val<int>) min((*var_18), (((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 643691377U)) != (((((/* implicit */val<bool>) (val<short>)-23478)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)61))) : (7ULL)))))) | ((((-(391792614))) % (((/* implicit */val<int>) (val<short>)23658))))))));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) 1079787045)) & (-7LL)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_3) - (var_3)))) ? (((val<unsigned int>) var_5)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_10), (((/* implicit */val<unsigned short>) var_5)))))))))));
    *var_20 += var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 597880488;
long long int var_3 = -5352878124704671836LL;
unsigned char var_5 = (unsigned char)101;
unsigned short var_10 = (unsigned short)29458;
int zero = 0;
int var_18 = 1946040921;
signed char var_19 = (signed char)-80;
int var_20 = -1182573956;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -16133;
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != -584693468;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_10, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
