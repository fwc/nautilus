/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4250
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4250
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<unsigned short> var_3, val<unsigned int> var_4, val<unsigned short> var_5, val<short> var_7, val<unsigned short> var_8, val<bool> var_10, val<long long int> var_11, val<long long int> var_12, val<long long int> var_15, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<unsigned short*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) (((((!(((/* implicit */val<bool>) var_12)))) ? (((((/* implicit */val<bool>) var_5)) ? (var_1) : (((/* implicit */val<long long int>) var_4)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) var_18)))))) > (((((/* implicit */val<bool>) 4LL)) ? (((var_15) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) var_7))))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_11);
    *var_21 = ((/* implicit */val<signed char>) ((((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_10))))) >= (((((/* implicit */val<bool>) -2LL)) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))) ? (((/* implicit */val<int>) ((val<short>) ((val<signed char>) var_11)))) : (min((((/* implicit */val<int>) var_0)), ((+(((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
long long int var_1 = 5619611298680064533LL;
unsigned short var_3 = (unsigned short)16296;
unsigned int var_4 = 423113529U;
unsigned short var_5 = (unsigned short)4521;
short var_7 = (short)-24804;
unsigned short var_8 = (unsigned short)37923;
bool var_10 = (bool)0;
long long int var_11 = -6852935879662238802LL;
long long int var_12 = 5014576066313565058LL;
long long int var_15 = 8852883359192134632LL;
signed char var_18 = (signed char)69;
int zero = 0;
signed char var_19 = (signed char)95;
unsigned short var_20 = (unsigned short)49676;
signed char var_21 = (signed char)-54;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (unsigned short)942;
    value_mismatch |= var_21 != (signed char)-82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
