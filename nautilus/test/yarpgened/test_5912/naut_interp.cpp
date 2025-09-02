/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5912
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5912
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
void test(val<unsigned char> var_0, val<signed char> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned char> var_9, val<long long int> var_13, val<unsigned int> var_14, val<bool> var_15, val<int> zero, val<short*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18) {
    *var_16 = ((/* implicit */val<short>) min(((-(((((/* implicit */val<bool>) (val<signed char>)41)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned short>)17502)))))), (((((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_5)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_9))))) : (((/* implicit */val<int>) max((var_5), (var_0))))))));
    *var_17 -= ((/* implicit */val<unsigned short>) (((+(((/* implicit */val<int>) var_15)))) ^ (((/* implicit */val<int>) var_4))));
    *var_18 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) ((((/* implicit */val<bool>) (+(var_13)))) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
signed char var_4 = (signed char)21;
unsigned char var_5 = (unsigned char)149;
unsigned char var_6 = (unsigned char)161;
unsigned char var_9 = (unsigned char)46;
long long int var_13 = -3707880799532444813LL;
unsigned int var_14 = 3831147288U;
bool var_15 = (bool)1;
int zero = 0;
short var_16 = (short)-26183;
unsigned short var_17 = (unsigned short)26328;
unsigned short var_18 = (unsigned short)52263;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-1;
    value_mismatch |= var_17 != (unsigned short)26308;
    value_mismatch |= var_18 != (unsigned short)43800;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_9, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
