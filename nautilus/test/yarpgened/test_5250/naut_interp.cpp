/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5250
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5250
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
void test(val<long long int> var_0, val<bool> var_1, val<unsigned short> var_3, val<long long int> var_6, val<signed char> var_8, val<signed char> var_9, val<long long int> var_13, val<unsigned char> var_14, val<int> zero, val<unsigned char*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18, val<short*> var_19, val<unsigned char*> var_20) {
    *var_16 = ((/* implicit */val<unsigned char>) max((*var_16), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14))) : (((((((/* implicit */val<bool>) var_9)) ? (var_0) : (var_13))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 521331190)) ? (((((((/* implicit */val<int>) (val<short>)-16)) - (((/* implicit */val<int>) (val<short>)-32761)))) - (((/* implicit */val<int>) (val<unsigned char>)219)))) : ((+(((/* implicit */val<int>) (val<unsigned short>)22))))));
    *var_18 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) min((var_3), (((/* implicit */val<unsigned short>) var_1))))) ^ (((/* implicit */val<int>) var_1))));
    *var_19 = ((/* implicit */val<short>) var_8);
    *var_20 *= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3862584325574415166LL;
bool var_1 = (bool)0;
unsigned short var_3 = (unsigned short)27970;
long long int var_6 = -6272354974606815602LL;
signed char var_8 = (signed char)-79;
signed char var_9 = (signed char)-98;
long long int var_13 = 2555808781782327155LL;
unsigned char var_14 = (unsigned char)74;
int zero = 0;
unsigned char var_16 = (unsigned char)58;
unsigned int var_17 = 4078988547U;
unsigned int var_18 = 3286345550U;
short var_19 = (short)-25576;
unsigned char var_20 = (unsigned char)66;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)74;
    value_mismatch |= var_17 != 32526U;
    value_mismatch |= var_18 != 3286345550U;
    value_mismatch |= var_19 != (short)-79;
    value_mismatch |= var_20 != (unsigned char)162;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_8, var_9, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
