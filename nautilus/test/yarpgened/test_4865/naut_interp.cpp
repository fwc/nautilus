/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4865
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4865
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
void test(val<bool> var_1, val<int> var_3, val<unsigned char> var_4, val<signed char> var_5, val<unsigned int> var_6, val<unsigned char> var_8, val<int> var_11, val<signed char> var_12, val<short> var_14, val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_17, val<unsigned char*> var_18, val<short*> var_19, val<signed char*> var_20, val<int*> var_21) {
    *var_17 = ((/* implicit */val<unsigned short>) min((*var_17), (((/* implicit */val<unsigned short>) var_8))));
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) var_11))));
    *var_19 -= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_14)), (var_15)))) ? (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_4))))) : (((((/* implicit */val<bool>) var_11)) ? (var_15) : (((/* implicit */val<unsigned int>) var_3))))))) ? (((/* implicit */val<int>) ((val<short>) (~(((/* implicit */val<int>) var_1)))))) : (((/* implicit */val<int>) ((val<unsigned char>) (val<short>)18730)))));
    *var_20 = ((/* implicit */val<signed char>) var_8);
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_14)))) ? (((val<long long int>) var_12)) : (((/* implicit */val<long long int>) var_6))))) || (((/* implicit */val<bool>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
int var_3 = -1326346449;
unsigned char var_4 = (unsigned char)75;
signed char var_5 = (signed char)0;
unsigned int var_6 = 2470610665U;
unsigned char var_8 = (unsigned char)28;
int var_11 = -759380229;
signed char var_12 = (signed char)-89;
short var_14 = (short)-18133;
unsigned int var_15 = 817256546U;
int zero = 0;
unsigned short var_17 = (unsigned short)8933;
unsigned char var_18 = (unsigned char)186;
short var_19 = (short)-26747;
signed char var_20 = (signed char)-124;
int var_21 = 588567553;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)28;
    value_mismatch |= var_18 != (unsigned char)251;
    value_mismatch |= var_19 != (short)-26746;
    value_mismatch |= var_20 != (signed char)28;
    value_mismatch |= var_21 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_8, var_11, var_12, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
