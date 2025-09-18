/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3018
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3018
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
void test(val<unsigned int> var_3, val<unsigned char> var_4, val<unsigned short> var_5, val<unsigned char> var_6, val<long long int> var_8, val<unsigned short> var_9, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14) {
    *var_13 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<long long int>) ((val<int>) (val<unsigned short>)60079)))) ? (((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) var_4))))) : (var_8)));
    *var_14 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_5)), (var_12)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)150)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)103))) : (var_3))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_4)) << (((-800482671) + (800482693))))))))) ? (((/* implicit */val<long long int>) max((var_3), (((/* implicit */val<unsigned int>) ((val<int>) (val<unsigned char>)214)))))) : (max((((((/* implicit */val<bool>) (val<unsigned char>)135)) ? (((/* implicit */val<long long int>) var_3)) : (-4457076455800588465LL))), (min((var_8), (((/* implicit */val<long long int>) (val<unsigned char>)20))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4148025914U;
unsigned char var_4 = (unsigned char)146;
unsigned short var_5 = (unsigned short)54356;
unsigned char var_6 = (unsigned char)140;
long long int var_8 = -3106844451062665814LL;
unsigned short var_9 = (unsigned short)8872;
unsigned int var_12 = 2539098273U;
int zero = 0;
unsigned short var_13 = (unsigned short)54754;
unsigned char var_14 = (unsigned char)71;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)54638;
    value_mismatch |= var_14 != (unsigned char)13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_8, var_9, var_12, zero, &var_13, &var_14);
  checksum();
}
