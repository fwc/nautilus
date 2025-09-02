/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6707
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<unsigned int> var_2, val<int> var_4, val<unsigned int> var_6, val<unsigned int> var_7, val<unsigned char> var_8, val<bool> var_9, val<bool> var_10, val<unsigned int> var_11, val<unsigned char> var_14, val<signed char> var_15, val<signed char> var_16, val<int> zero, val<unsigned int*> var_17, val<unsigned char*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) var_1);
    *var_18 = ((/* implicit */val<unsigned char>) ((var_9) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (((val<bool>)0) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_8))))) ? (var_4) : (((/* implicit */val<int>) var_8))))) : (var_11)));
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) var_4)) : (2644118217U)))))) ? (var_2) : (((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) var_6)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))))) : (var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
unsigned long long int var_1 = 13508078448024178231ULL;
unsigned int var_2 = 4201413179U;
int var_4 = 701483210;
unsigned int var_6 = 618964423U;
unsigned int var_7 = 1500418807U;
unsigned char var_8 = (unsigned char)178;
bool var_9 = (bool)1;
bool var_10 = (bool)1;
unsigned int var_11 = 3931284694U;
unsigned char var_14 = (unsigned char)105;
signed char var_15 = (signed char)-122;
signed char var_16 = (signed char)-53;
int zero = 0;
unsigned int var_17 = 4246102944U;
unsigned char var_18 = (unsigned char)38;
short var_19 = (short)9252;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 2492943927U;
    value_mismatch |= var_18 != (unsigned char)202;
    value_mismatch |= var_19 != (short)31291;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
