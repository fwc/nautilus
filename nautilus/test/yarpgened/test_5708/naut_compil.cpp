/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5708
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5708
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
void test(val<unsigned char> var_1, val<unsigned char> var_2, val<long long int> var_6, val<unsigned short> var_8, val<unsigned long long int> var_9, val<bool> var_11, val<unsigned long long int> var_12, val<unsigned short> var_13, val<signed char> var_16, val<unsigned long long int> var_18, val<unsigned short> var_19, val<int> zero, val<signed char*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) (val<unsigned short>)65531)))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_12) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (((val<long long int>) var_6))))) : (min((((/* implicit */val<unsigned long long int>) min(((val<unsigned char>)255), (((/* implicit */val<unsigned char>) var_16))))), (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_19))) : (var_18)))))));
    *var_21 = ((min((((((/* implicit */val<bool>) var_9)) ? (0ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))), (((((/* implicit */val<bool>) var_12)) ? (var_18) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))))))) >> (((((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) != (((/* implicit */val<int>) var_2))))) & ((~(((/* implicit */val<int>) (val<bool>)1)))))));
    *var_22 = 11565623310006929730ULL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
unsigned char var_2 = (unsigned char)105;
long long int var_6 = -5177629189427696919LL;
unsigned short var_8 = (unsigned short)47586;
unsigned long long int var_9 = 5591234417285609966ULL;
bool var_11 = (bool)1;
unsigned long long int var_12 = 425611968172585193ULL;
unsigned short var_13 = (unsigned short)53420;
signed char var_16 = (signed char)33;
unsigned long long int var_18 = 7386268435752774662ULL;
unsigned short var_19 = (unsigned short)20493;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned long long int var_21 = 1335238706228165551ULL;
unsigned long long int var_22 = 9692453503256676933ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-84;
    value_mismatch |= var_21 != 0ULL;
    value_mismatch |= var_22 != 11565623310006929730ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_8, var_9, var_11, var_12, var_13, var_16, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
