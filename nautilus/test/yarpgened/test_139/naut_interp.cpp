/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 139
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=139
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
void test(val<long long int> var_4, val<unsigned int> var_6, val<short> var_8, val<long long int> var_12, val<short> var_14, val<int> zero, val<int*> var_19, val<unsigned int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((/* implicit */val<int>) ((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) (val<unsigned char>)255)), (-844172842)))), (var_6)))) - (var_12))))));
    *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(var_12)))) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))), (var_4))))));
    *var_21 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 2392975916U)) >= (12357155290998502253ULL)))) >= (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8342674566118521192LL;
unsigned int var_6 = 4151935395U;
short var_8 = (short)-11702;
long long int var_12 = -4896937359207833596LL;
short var_14 = (short)-32724;
int zero = 0;
int var_19 = -1022214986;
unsigned int var_20 = 1892121693U;
unsigned long long int var_21 = 2956134330228479260ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1022214986;
    value_mismatch |= var_20 != 1892121693U;
    value_mismatch |= var_21 != 2956134330228479260ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_12, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
}
