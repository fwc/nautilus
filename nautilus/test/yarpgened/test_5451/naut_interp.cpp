/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5451
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5451
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<short> var_3, val<unsigned char> var_4, val<unsigned long long int> var_5, val<short> var_6, val<int> var_7, val<short> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned short*> var_10, val<short*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(var_0)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)121)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_8)))) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<unsigned char>)123)) : (((/* implicit */val<int>) var_8))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)-35)) + (((/* implicit */val<int>) (val<unsigned char>)98))))) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) var_0)) * (var_9))) == ((~(var_9)))))))));
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 12340159277818205923ULL)) ? (((/* implicit */val<int>) (val<short>)-5332)) : (var_7)))) ? ((+(var_5))) : (((/* implicit */val<unsigned long long int>) ((var_0) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))))) ? (((/* implicit */val<unsigned long long int>) max(((~(((/* implicit */val<int>) (val<short>)5329)))), (((/* implicit */val<int>) (!((val<bool>)1))))))) : ((~((~(var_5)))))));
    *var_12 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4063050863U;
signed char var_1 = (signed char)-48;
short var_3 = (short)-21706;
unsigned char var_4 = (unsigned char)211;
unsigned long long int var_5 = 16846540768687751229ULL;
short var_6 = (short)-21817;
int var_7 = 1980431297;
short var_8 = (short)4319;
unsigned long long int var_9 = 4650373930245525434ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)54895;
short var_11 = (short)13460;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)61;
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
