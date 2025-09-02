/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6435
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6435
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
void test(val<unsigned int> var_3, val<short> var_8, val<unsigned short> var_9, val<unsigned char> var_11, val<unsigned long long int> var_12, val<int> var_13, val<bool> var_14, val<unsigned long long int> var_16, val<unsigned long long int> var_17, val<int> zero, val<unsigned char*> var_18, val<unsigned short*> var_19, val<unsigned int*> var_20, val<bool*> var_21, val<signed char*> var_22) {
    *var_18 = ((/* implicit */val<unsigned char>) var_9);
    *var_19 = ((/* implicit */val<unsigned short>) var_11);
    *var_20 ^= ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) var_3)) ? (var_17) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)127))))))))));
    *var_21 *= ((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<unsigned long long int>) 4350180175594439892LL)) * (var_17))) : (max((((/* implicit */val<unsigned long long int>) var_14)), (var_12))))));
    *var_22 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((var_16) | (var_16))) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)0)) >> (((1053334346) - (1053334337))))))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 346170977U;
short var_8 = (short)-27893;
unsigned short var_9 = (unsigned short)2060;
unsigned char var_11 = (unsigned char)42;
unsigned long long int var_12 = 15758608512003013700ULL;
int var_13 = -1853108265;
bool var_14 = (bool)1;
unsigned long long int var_16 = 13478130881762606519ULL;
unsigned long long int var_17 = 8441952761423606693ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)109;
unsigned short var_19 = (unsigned short)10849;
unsigned int var_20 = 1806801568U;
bool var_21 = (bool)0;
signed char var_22 = (signed char)-56;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)12;
    value_mismatch |= var_19 != (unsigned short)42;
    value_mismatch |= var_20 != 3070646010U;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (signed char)-41;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, var_11, var_12, var_13, var_14, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
