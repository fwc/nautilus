/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6471
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6471
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
void test(val<unsigned short> var_1, val<unsigned short> var_3, val<int> var_6, val<unsigned int> var_8, val<long long int> var_9, val<bool> var_14, val<signed char> var_16, val<int> zero, val<unsigned int*> var_19, val<int*> var_20, val<unsigned short*> var_21, val<long long int*> var_22) {
    *var_19 -= ((/* implicit */val<unsigned int>) ((val<long long int>) ((((/* implicit */val<bool>) ((var_9) << (((/* implicit */val<int>) (val<unsigned char>)0))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)58068))) : (((var_8) >> (((var_9) - (1276768391485756974LL))))))));
    *var_20 = ((/* implicit */val<int>) (val<bool>)0);
    *var_21 = ((/* implicit */val<unsigned short>) ((((val<unsigned long long int>) var_14)) - (((/* implicit */val<unsigned long long int>) (+(var_6))))));
    *var_22 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<int>) var_16)) ^ (((/* implicit */val<int>) var_3))))))) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_1)) : (var_6))) : (min((((/* implicit */val<int>) (val<signed char>)-83)), ((~(var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47392;
unsigned short var_3 = (unsigned short)63168;
int var_6 = 1940556098;
unsigned int var_8 = 3151304677U;
long long int var_9 = 1276768391485757003LL;
bool var_14 = (bool)1;
signed char var_16 = (signed char)89;
int zero = 0;
unsigned int var_19 = 2446325585U;
int var_20 = 107528432;
unsigned short var_21 = (unsigned short)40721;
long long int var_22 = 8564921745888893101LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 2446267517U;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (unsigned short)30399;
    value_mismatch |= var_22 != 38944LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, var_9, var_14, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
