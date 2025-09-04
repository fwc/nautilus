/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3966
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3966
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
void test(val<unsigned short> var_2, val<bool> var_3, val<unsigned char> var_5, val<unsigned long long int> var_6, val<unsigned short> var_8, val<unsigned int> var_10, val<unsigned char> var_12, val<int> zero, val<short*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) * (max((((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned short>) var_12)), (var_8)))), (min((var_10), (((/* implicit */val<unsigned int>) var_12))))))));
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) (~(((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_5))))) ? (max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)0)), (var_6))) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_2))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35801;
bool var_3 = (bool)1;
unsigned char var_5 = (unsigned char)197;
unsigned long long int var_6 = 9504651839542784668ULL;
unsigned short var_8 = (unsigned short)34286;
unsigned int var_10 = 3205005539U;
unsigned char var_12 = (unsigned char)55;
int zero = 0;
short var_17 = (short)8218;
unsigned char var_18 = (unsigned char)85;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)55;
    value_mismatch |= var_18 != (unsigned char)99;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_8, var_10, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
