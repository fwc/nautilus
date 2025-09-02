/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6193
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<int> var_3, val<int> var_6, val<bool> var_7, val<unsigned long long int> var_10, val<unsigned char> var_11, val<unsigned char> var_12, val<unsigned int> var_16, val<int> zero, val<int*> var_20, val<unsigned long long int*> var_21, val<bool*> var_22) {
    *var_20 = ((/* implicit */val<int>) max((max((((/* implicit */val<long long int>) (+(var_0)))), (5500644824966273816LL))), (((/* implicit */val<long long int>) (+(165056143))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) == ((-(587234970U))))))) % ((+(min((-5500644824966273816LL), (((/* implicit */val<long long int>) var_7))))))));
    *var_22 |= ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_6)), (var_10)))) ? ((+(var_3))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) <= (var_1))))))) == (((min((var_16), (var_1))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4038311798U;
unsigned int var_1 = 4129968694U;
int var_3 = 2115587968;
int var_6 = -2040705768;
bool var_7 = (bool)1;
unsigned long long int var_10 = 10637651302309637662ULL;
unsigned char var_11 = (unsigned char)240;
unsigned char var_12 = (unsigned char)45;
unsigned int var_16 = 1869829326U;
int zero = 0;
int var_20 = -1510751885;
unsigned long long int var_21 = 15279787279376239004ULL;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 464821016;
    value_mismatch |= var_21 != 0ULL;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_7, var_10, var_11, var_12, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
