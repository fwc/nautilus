/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8368
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8368
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
void test(val<unsigned short> var_0, val<signed char> var_3, val<int> var_4, val<bool> var_5, val<int> var_6, val<unsigned char> var_9, val<long long int> var_10, val<unsigned long long int> var_11, val<bool> var_12, val<bool> var_13, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15) {
    *var_14 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) * (((((/* implicit */val<bool>) var_3)) ? (var_10) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (var_4) : (((/* implicit */val<int>) var_12)))))))));
    *var_15 = ((/* implicit */val<int>) ((var_11) > (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_13))) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_13)), (var_9)))) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31513;
signed char var_3 = (signed char)-94;
int var_4 = -799406642;
bool var_5 = (bool)1;
int var_6 = -2116438596;
unsigned char var_9 = (unsigned char)83;
long long int var_10 = -4177483364529595644LL;
unsigned long long int var_11 = 3079275642736269578ULL;
bool var_12 = (bool)0;
bool var_13 = (bool)1;
int zero = 0;
unsigned long long int var_14 = 7060588747008287474ULL;
int var_15 = 1044252218;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 6919799997871034824ULL;
    value_mismatch |= var_15 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
