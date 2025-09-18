/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4961
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4961
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
void test(val<int> var_3, val<int> var_5, val<long long int> var_7, val<unsigned char> var_8, val<signed char> var_9, val<long long int> var_11, val<unsigned long long int> var_12, val<int> var_14, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_20 = ((/* implicit */val<unsigned long long int>) min((*var_20), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) max((((var_14) + (((/* implicit */val<int>) (val<unsigned char>)11)))), (((/* implicit */val<int>) var_9))))) : (var_7))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) max((*var_21), (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)32)) ? (var_11) : (var_7)))) ? (var_3) : (var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1532061405;
int var_5 = -1036908640;
long long int var_7 = 4000360694009389087LL;
unsigned char var_8 = (unsigned char)56;
signed char var_9 = (signed char)-38;
long long int var_11 = -6095380052927583771LL;
unsigned long long int var_12 = 2504261174835480050ULL;
int var_14 = 712556040;
int zero = 0;
unsigned long long int var_19 = 17039061542492134273ULL;
unsigned long long int var_20 = 11978021286958306110ULL;
unsigned long long int var_21 = 5384641426526986784ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 56ULL;
    value_mismatch |= var_20 != 712556051ULL;
    value_mismatch |= var_21 != 5384641426526986784ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_8, var_9, var_11, var_12, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
}
