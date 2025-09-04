/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5018
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5018
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
void test(val<long long int> var_0, val<unsigned char> var_2, val<int> var_4, val<int> var_6, val<unsigned char> var_7, val<long long int> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<bool> var_11, val<unsigned long long int> var_12, val<int> zero, val<short*> var_13, val<unsigned char*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) & (min((var_9), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)76))))))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) % (var_12))) : (((/* implicit */val<unsigned long long int>) var_6)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)76))))))));
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) ((((min((var_8), (((/* implicit */val<long long int>) (val<unsigned short>)18926)))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)180))))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_4)), (var_8)))) != (((((/* implicit */val<bool>) (val<unsigned char>)76)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (var_9)))))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)253))) % (var_0)))) != (var_12)))))))));
    *var_15 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7228185387331868605LL;
unsigned char var_2 = (unsigned char)119;
int var_4 = 1370584155;
int var_6 = 2115084045;
unsigned char var_7 = (unsigned char)86;
long long int var_8 = 206301109734169828LL;
unsigned long long int var_9 = 13916906926843050656ULL;
bool var_10 = (bool)1;
bool var_11 = (bool)0;
unsigned long long int var_12 = 13662134914501344598ULL;
int zero = 0;
short var_13 = (short)-9642;
unsigned char var_14 = (unsigned char)144;
int var_15 = 458275213;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-9642;
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != 2115084045;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
