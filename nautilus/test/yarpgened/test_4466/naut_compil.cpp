/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4466
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4466
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
void test(val<unsigned short> var_10, val<short> var_17, val<bool> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) min((*var_19), (((/* implicit */val<unsigned short>) max((((val<bool>) (val<unsigned char>)100)), ((!(((/* implicit */val<bool>) ((val<int>) (val<unsigned char>)179))))))))));
    *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) (val<unsigned char>)50)) ? (((/* implicit */val<int>) (val<unsigned char>)179)) : (((/* implicit */val<int>) var_17)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)221)))))))) ? (((/* implicit */val<int>) ((val<unsigned short>) ((val<long long int>) (val<unsigned char>)34)))) : (((/* implicit */val<int>) ((val<short>) var_18))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)65092;
short var_17 = (short)1069;
bool var_18 = (bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)13218;
unsigned short var_20 = (unsigned short)54329;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != (unsigned short)34;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_17, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
