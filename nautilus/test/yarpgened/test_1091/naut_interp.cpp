/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1091
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1091
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
void test(val<int> var_2, val<unsigned long long int> var_3, val<unsigned char> var_4, val<short> var_6, val<int> var_7, val<long long int> var_8, val<short> var_9, val<bool> var_11, val<int> zero, val<long long int*> var_15, val<long long int*> var_16, val<bool*> var_17, val<short*> var_18, val<unsigned char*> var_19) {
    *var_15 = ((/* implicit */val<long long int>) ((var_7) * (((/* implicit */val<int>) (!(var_11))))));
    *var_16 = ((/* implicit */val<long long int>) (val<unsigned char>)152);
    *var_17 = ((((/* implicit */val<bool>) var_8)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2593685924347506362LL)) ? (min((var_3), (8ULL))) : (((/* implicit */val<unsigned long long int>) var_2))))));
    *var_18 = ((val<short>) min(((val<short>)30763), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_3)) && (((/* implicit */val<bool>) 1073479680)))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_4)) ? (var_8) : (var_8))), (((((/* implicit */val<bool>) var_9)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))))) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -164527287;
unsigned long long int var_3 = 11942438957803205592ULL;
unsigned char var_4 = (unsigned char)183;
short var_6 = (short)21549;
int var_7 = 845110407;
long long int var_8 = 2235086935000260180LL;
short var_9 = (short)-3517;
bool var_11 = (bool)1;
int zero = 0;
long long int var_15 = -7803087220630199388LL;
long long int var_16 = 8933030379593380638LL;
bool var_17 = (bool)1;
short var_18 = (short)6350;
unsigned char var_19 = (unsigned char)76;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 152LL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (short)1;
    value_mismatch |= var_19 != (unsigned char)45;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_11, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
