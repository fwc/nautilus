/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1708
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1708
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
void test(val<unsigned char> var_2, val<signed char> var_5, val<int> var_6, val<unsigned long long int> var_15, val<int> zero, val<signed char*> var_16, val<unsigned char*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((val<int>) (!(((/* implicit */val<bool>) var_5)))))) - (4503263509476066884ULL)));
    *var_17 = ((/* implicit */val<unsigned char>) max((*var_17), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_5)) ? (max((min((((/* implicit */val<unsigned long long int>) var_6)), (16003472505121078101ULL))), ((~(16003472505121078101ULL))))) : ((-(var_15))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((((/* implicit */val<bool>) var_2)) ? (var_15) : (13943480564233484703ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
signed char var_5 = (signed char)54;
int var_6 = 615333729;
unsigned long long int var_15 = 15140006810183644446ULL;
int zero = 0;
signed char var_16 = (signed char)63;
unsigned char var_17 = (unsigned char)66;
unsigned long long int var_18 = 643820528048941256ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-68;
    value_mismatch |= var_17 != (unsigned char)170;
    value_mismatch |= var_18 != 643820528048941256ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
