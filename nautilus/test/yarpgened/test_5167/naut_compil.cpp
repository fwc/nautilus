/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5167
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5167
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
void test(val<signed char> var_3, val<bool> var_4, val<unsigned char> var_6, val<unsigned char> var_8, val<long long int> var_9, val<unsigned char> var_10, val<unsigned int> var_14, val<int> zero, val<bool*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<bool>) max((((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (val<signed char>)3)), (-9075277685367392563LL)))) ? ((+(var_14))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) var_10)))))), (((/* implicit */val<unsigned int>) var_4))));
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_8)) ? ((~(((/* implicit */val<int>) var_6)))) : ((((~(((/* implicit */val<int>) var_3)))) / (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-56;
bool var_4 = (bool)0;
unsigned char var_6 = (unsigned char)4;
unsigned char var_8 = (unsigned char)116;
long long int var_9 = -6766981674482179959LL;
unsigned char var_10 = (unsigned char)33;
unsigned int var_14 = 79422660U;
int zero = 0;
bool var_15 = (bool)1;
unsigned short var_16 = (unsigned short)48343;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned short)65531;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_8, var_9, var_10, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
