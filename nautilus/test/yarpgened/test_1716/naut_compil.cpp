/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1716
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1716
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
void test(val<bool> var_0, val<short> var_1, val<short> var_2, val<int> var_3, val<bool> var_5, val<unsigned int> var_7, val<short> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13, val<signed char*> var_14, val<unsigned short*> var_15) {
    *var_11 += ((/* implicit */val<unsigned int>) ((val<unsigned short>) min((((/* implicit */val<int>) ((2613099226U) != (((/* implicit */val<unsigned int>) 10))))), (((var_3) | (((/* implicit */val<int>) (val<unsigned char>)89)))))));
    *var_12 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (-(min((var_7), (((/* implicit */val<unsigned int>) var_10)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) (val<signed char>)127);
    *var_14 = ((/* implicit */val<signed char>) (val<unsigned short>)65532);
    *var_15 = ((/* implicit */val<unsigned short>) max((*var_15), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_1)), (var_7)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_10), (var_1))))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) | (2613099223U)))))) ? (((val<unsigned long long int>) var_7)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_1)))) != ((((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_0)))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_1 = (short)-7537;
short var_2 = (short)-2757;
int var_3 = 2055138344;
bool var_5 = (bool)0;
unsigned int var_7 = 4156941245U;
short var_10 = (short)11281;
int zero = 0;
unsigned int var_11 = 4387011U;
unsigned char var_12 = (unsigned char)158;
unsigned char var_13 = (unsigned char)178;
signed char var_14 = (signed char)122;
unsigned short var_15 = (unsigned short)63648;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4387012U;
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != (unsigned char)127;
    value_mismatch |= var_14 != (signed char)-4;
    value_mismatch |= var_15 != (unsigned short)63648;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
