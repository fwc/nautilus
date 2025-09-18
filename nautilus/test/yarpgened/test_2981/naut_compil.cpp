/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2981
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2981
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
void test(val<bool> var_1, val<unsigned char> var_4, val<bool> var_8, val<unsigned char> var_9, val<unsigned char> var_11, val<unsigned char> var_12, val<unsigned int> var_14, val<bool> var_15, val<unsigned char> var_16, val<long long int> var_17, val<int> zero, val<unsigned short*> var_19, val<unsigned long long int*> var_20, val<short*> var_21, val<unsigned long long int*> var_22) {
    *var_19 += ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_16))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))) != (var_17))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(((var_15) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_8))))))) ? ((+(var_14))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) var_15))))))))));
    *var_22 = ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_1))))))) ? (((((3283070205800494719ULL) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)127))))) + (((/* implicit */val<unsigned long long int>) var_14)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned char var_4 = (unsigned char)178;
bool var_8 = (bool)0;
unsigned char var_9 = (unsigned char)22;
unsigned char var_11 = (unsigned char)221;
unsigned char var_12 = (unsigned char)161;
unsigned int var_14 = 1794001307U;
bool var_15 = (bool)1;
unsigned char var_16 = (unsigned char)32;
long long int var_17 = 132296963176968551LL;
int zero = 0;
unsigned short var_19 = (unsigned short)26608;
unsigned long long int var_20 = 16520060017435038612ULL;
short var_21 = (short)-23725;
unsigned long long int var_22 = 10054216556751491483ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)26608;
    value_mismatch |= var_20 != 18446744073709551614ULL;
    value_mismatch |= var_21 != (short)-1;
    value_mismatch |= var_22 != 3283070207594496153ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_9, var_11, var_12, var_14, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
