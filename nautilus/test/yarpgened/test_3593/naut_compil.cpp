/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3593
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3593
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
void test(val<unsigned short> var_1, val<unsigned long long int> var_2, val<unsigned int> var_3, val<unsigned int> var_6, val<long long int> var_8, val<int> zero, val<int*> var_14, val<unsigned char*> var_15, val<int*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 6355879601321034911ULL)) ? (((/* implicit */val<unsigned long long int>) var_6)) : (6355879601321034911ULL))))) : ((-(((/* implicit */val<int>) (val<signed char>)22)))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max(((val<unsigned short>)6567), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_3)) && ((val<bool>)0)))))))) * (min((((/* implicit */val<unsigned long long int>) var_6)), (((((/* implicit */val<bool>) var_2)) ? (var_2) : (((/* implicit */val<unsigned long long int>) var_8))))))));
    *var_16 = ((/* implicit */val<int>) max((*var_16), (((/* implicit */val<int>) var_1))));
    *var_17 &= ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19216;
unsigned long long int var_2 = 9089567760001271135ULL;
unsigned int var_3 = 1252711736U;
unsigned int var_6 = 3305297493U;
long long int var_8 = -5707926975538517983LL;
int zero = 0;
int var_14 = -982391255;
unsigned char var_15 = (unsigned char)188;
int var_16 = -1764264173;
unsigned short var_17 = (unsigned short)26066;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 85;
    value_mismatch |= var_15 != (unsigned char)115;
    value_mismatch |= var_16 != 19216;
    value_mismatch |= var_17 != (unsigned short)17680;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_8, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
