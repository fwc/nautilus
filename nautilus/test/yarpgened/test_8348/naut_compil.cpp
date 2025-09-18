/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8348
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8348
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<unsigned long long int> var_2, val<unsigned char> var_8, val<unsigned short> var_10, val<unsigned char> var_12, val<unsigned int> var_16, val<int> zero, val<bool*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<bool>) var_12)) ? ((+(((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) var_0)))));
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) (val<unsigned short>)65527)) || (((/* implicit */val<bool>) var_2)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (((((/* implicit */val<bool>) var_1)) ? (var_16) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))))))) + ((-(((val<unsigned long long int>) var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
signed char var_1 = (signed char)-10;
unsigned long long int var_2 = 5099227345623394611ULL;
unsigned char var_8 = (unsigned char)89;
unsigned short var_10 = (unsigned short)48304;
unsigned char var_12 = (unsigned char)154;
unsigned int var_16 = 3850255053U;
int zero = 0;
bool var_18 = (bool)1;
short var_19 = (short)-15712;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)54;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_10, var_12, var_16, zero, &var_18, &var_19);
  checksum();
}
