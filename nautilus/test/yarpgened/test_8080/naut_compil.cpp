/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8080
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8080
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
void test(val<signed char> var_1, val<unsigned long long int> var_3, val<bool> var_6, val<bool> var_8, val<int> var_16, val<int> zero, val<bool*> var_18, val<long long int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<bool>) min((*var_18), (((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1)))))));
    *var_19 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_1)) ? (min((((/* implicit */val<int>) (val<short>)-30222)), (2147483647))) : (((((/* implicit */val<int>) var_8)) << (((-1057196155090935083LL) + (1057196155090935094LL))))))) * (((((/* implicit */val<int>) (val<bool>)1)) >> (((((val<unsigned long long int>) -651544911)) - (18446744073058006675ULL)))))));
    *var_20 = ((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_16)) ? (((val<unsigned long long int>) var_3)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) var_6)))))), ((+(18446744073709551613ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned long long int var_3 = 12857304598348682777ULL;
bool var_6 = (bool)1;
bool var_8 = (bool)1;
int var_16 = -1381451893;
int zero = 0;
bool var_18 = (bool)1;
long long int var_19 = 2373582565978820584LL;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
