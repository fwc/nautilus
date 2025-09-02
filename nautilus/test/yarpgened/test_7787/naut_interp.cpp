/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7787
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7787
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
void test(val<bool> var_0, val<bool> var_4, val<long long int> var_6, val<long long int> var_8, val<bool> var_9, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_15, val<unsigned char*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) ((((min((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<unsigned short>)56410)) : (((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) (val<short>)-1)))) + (2147483647))) >> (((var_6) + (7302351128656718995LL)))));
    *var_16 = ((/* implicit */val<unsigned char>) (val<unsigned short>)32272);
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((var_4) ? (((((/* implicit */val<int>) var_9)) * (((/* implicit */val<int>) (val<unsigned short>)15214)))) : (((((/* implicit */val<bool>) (val<short>)-11)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_9))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)48346))) : (((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)4604)), (var_12)))) / (var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_4 = (bool)0;
long long int var_6 = -7302351128656718979LL;
long long int var_8 = 4542110293693568466LL;
bool var_9 = (bool)0;
unsigned int var_12 = 1045635821U;
int zero = 0;
unsigned short var_15 = (unsigned short)42161;
unsigned char var_16 = (unsigned char)212;
int var_17 = -304531566;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)32767;
    value_mismatch |= var_16 != (unsigned char)16;
    value_mismatch |= var_17 != 48346;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_8, var_9, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
