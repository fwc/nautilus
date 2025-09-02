/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6021
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6021
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
void test(val<unsigned char> var_2, val<unsigned char> var_7, val<unsigned char> var_10, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) min((*var_15), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<unsigned char>)0)) ? (((/* implicit */val<int>) (val<unsigned char>)0)) : (((/* implicit */val<int>) var_2)))), (((((/* implicit */val<int>) (val<unsigned char>)0)) / (((/* implicit */val<int>) var_7))))))) ? (((/* implicit */val<int>) var_12)) : (((((/* implicit */val<bool>) min((var_10), ((val<unsigned char>)117)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)85)) ? (((/* implicit */val<int>) (val<unsigned char>)117)) : (((/* implicit */val<int>) (val<unsigned char>)117)))) : (((/* implicit */val<int>) (val<unsigned char>)138)))))))));
    *var_16 = ((/* implicit */val<unsigned char>) max(((+((~(((/* implicit */val<int>) (val<unsigned char>)178)))))), (((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<int>) (val<unsigned char>)0)) : (((/* implicit */val<int>) (val<unsigned char>)80))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)15;
unsigned char var_7 = (unsigned char)232;
unsigned char var_10 = (unsigned char)24;
unsigned char var_12 = (unsigned char)158;
int zero = 0;
unsigned char var_15 = (unsigned char)117;
unsigned char var_16 = (unsigned char)170;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)117;
    value_mismatch |= var_16 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_10, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
