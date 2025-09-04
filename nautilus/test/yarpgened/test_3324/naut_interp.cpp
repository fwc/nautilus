/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3324
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3324
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
void test(val<unsigned long long int> var_2, val<unsigned char> var_3, val<short> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<short> var_7, val<bool> var_11, val<bool> var_14, val<signed char> var_15, val<unsigned short> var_16, val<int> zero, val<int*> var_17, val<unsigned short*> var_18, val<unsigned int*> var_19) {
    *var_17 = ((/* implicit */val<int>) var_6);
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_14)) / (((((/* implicit */val<int>) var_11)) + (((/* implicit */val<int>) var_7))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_16)) ? ((-(((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) var_4))))) : (((((/* implicit */val<bool>) ((val<unsigned short>) var_11))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_2) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))))) : (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (var_5)))))));
    *var_19 = ((/* implicit */val<unsigned int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8948050792459669792ULL;
unsigned char var_3 = (unsigned char)116;
short var_4 = (short)969;
unsigned long long int var_5 = 618036717553141002ULL;
unsigned long long int var_6 = 4620350411392140812ULL;
short var_7 = (short)22746;
bool var_11 = (bool)1;
bool var_14 = (bool)0;
signed char var_15 = (signed char)-102;
unsigned short var_16 = (unsigned short)7508;
int zero = 0;
int var_17 = 886781057;
unsigned short var_18 = (unsigned short)45727;
unsigned int var_19 = 3181698408U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 819709452;
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, var_11, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
