/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6139
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6139
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
void test(val<int> var_2, val<unsigned char> var_7, val<int> var_9, val<unsigned char> var_10, val<int> var_12, val<int> var_14, val<int> zero, val<int*> var_16, val<int*> var_17, val<int*> var_18, val<int*> var_19) {
    *var_16 = (-(((8191) * (-8173))));
    *var_17 = ((((/* implicit */val<bool>) ((var_2) / (((((/* implicit */val<bool>) var_10)) ? (var_9) : (-8191)))))) ? (((/* implicit */val<int>) var_7)) : (var_14));
    *var_18 &= (+(var_12));
    *var_19 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_12), (min((8191), (var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2084995723;
unsigned char var_7 = (unsigned char)2;
int var_9 = -1190506648;
unsigned char var_10 = (unsigned char)167;
int var_12 = -1118739160;
int var_14 = 629820397;
int zero = 0;
int var_16 = -1637775734;
int var_17 = 1251913905;
int var_18 = -187583384;
int var_19 = 484327482;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 66945043;
    value_mismatch |= var_17 != 2;
    value_mismatch |= var_18 != -1269750744;
    value_mismatch |= var_19 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, var_10, var_12, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
