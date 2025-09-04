/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1122
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1122
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
void test(val<signed char> var_2, val<long long int> var_4, val<long long int> var_7, val<long long int> var_9, val<signed char> var_14, val<int> zero, val<long long int*> var_18, val<int*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) min((*var_18), (var_7)));
    *var_19 = ((/* implicit */val<int>) (+(var_9)));
    *var_20 = ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -2141583559)) ? (0LL) : (-676551912685425456LL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14))) : (var_4))) >> (((((val<long long int>) ((((/* implicit */val<int>) (val<signed char>)-43)) & (((/* implicit */val<int>) var_2))))) - (59LL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
long long int var_4 = 7096318328402047094LL;
long long int var_7 = -8825262259484499639LL;
long long int var_9 = -7591333235961883686LL;
signed char var_14 = (signed char)-67;
int zero = 0;
long long int var_18 = -5631924141302358141LL;
int var_19 = -1036422058;
long long int var_20 = 3017135262493789211LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -8825262259484499639LL;
    value_mismatch |= var_19 != 2061505498;
    value_mismatch |= var_20 != 211486766588LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_9, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
