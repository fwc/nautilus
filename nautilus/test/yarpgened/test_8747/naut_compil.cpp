/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8747
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8747
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
void test(val<bool> var_2, val<unsigned char> var_3, val<bool> var_4, val<bool> var_6, val<short> var_8, val<unsigned long long int> var_11, val<bool> var_13, val<int> zero, val<unsigned char*> var_14, val<short*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) (((!(var_13))) || (var_2)));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) ^ (var_11)))) ? (((((/* implicit */val<bool>) var_8)) ? (var_11) : (max((11983289014994573192ULL), (((/* implicit */val<unsigned long long int>) var_3)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))));
    *var_16 ^= ((/* implicit */val<int>) ((min((11758959106280116812ULL), (max((var_11), (((/* implicit */val<unsigned long long int>) var_3)))))) >> (((((((/* implicit */val<int>) (val<unsigned short>)53363)) & (1869217139))) - (53348)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)16;
bool var_4 = (bool)1;
bool var_6 = (bool)0;
short var_8 = (short)17547;
unsigned long long int var_11 = 18381306386936070245ULL;
bool var_13 = (bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)116;
short var_15 = (short)-25159;
int var_16 = -1090496395;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != (short)-32667;
    value_mismatch |= var_16 != -788362206;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_8, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
