/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6595
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6595
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_2, val<unsigned int> var_4, val<bool> var_6, val<unsigned long long int> var_9, val<short> var_10, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_15, val<int*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) 6804745867634663129ULL)))));
    *var_16 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))));
    *var_17 = ((/* implicit */val<unsigned short>) (+(var_1)));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_2))))), ((-(4055733379U))))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((val<signed char>) var_12))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16917986310878678593ULL;
unsigned char var_2 = (unsigned char)13;
unsigned int var_4 = 1648495613U;
bool var_6 = (bool)0;
unsigned long long int var_9 = 9089850120472766614ULL;
short var_10 = (short)-3956;
signed char var_12 = (signed char)-121;
int zero = 0;
unsigned long long int var_15 = 8809267574294625292ULL;
int var_16 = 1968372999;
unsigned short var_17 = (unsigned short)33154;
unsigned long long int var_18 = 13554528511976919517ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (unsigned short)20033;
    value_mismatch |= var_18 != 239233917ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_9, var_10, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
