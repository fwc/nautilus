/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8181
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8181
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
void test(val<short> var_0, val<unsigned char> var_1, val<signed char> var_2, val<unsigned long long int> var_3, val<short> var_4, val<unsigned char> var_7, val<int> var_8, val<short> var_9, val<unsigned long long int> var_12, val<long long int> var_13, val<int> zero, val<bool*> var_14, val<signed char*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) 16057755557461983413ULL)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_7))))))) && (((/* implicit */val<bool>) var_12)));
    *var_15 = ((/* implicit */val<signed char>) var_0);
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_4)), (var_12)))) ? (((((/* implicit */val<bool>) min((var_13), (((/* implicit */val<long long int>) (val<unsigned short>)52253))))) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))) : (((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_1)) : (var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19230;
unsigned char var_1 = (unsigned char)94;
signed char var_2 = (signed char)-100;
unsigned long long int var_3 = 11145255996478088916ULL;
short var_4 = (short)-4965;
unsigned char var_7 = (unsigned char)166;
int var_8 = -490917730;
short var_9 = (short)24920;
unsigned long long int var_12 = 8093133667346610164ULL;
long long int var_13 = 6828192593197753198LL;
int zero = 0;
bool var_14 = (bool)0;
signed char var_15 = (signed char)-10;
unsigned char var_16 = (unsigned char)228;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (signed char)-30;
    value_mismatch |= var_16 != (unsigned char)212;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_9, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
