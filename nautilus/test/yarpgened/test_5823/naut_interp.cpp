/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5823
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5823
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
void test(val<int> var_1, val<unsigned char> var_2, val<int> var_4, val<int> var_5, val<bool> var_7, val<unsigned long long int> var_12, val<bool> var_13, val<unsigned char> var_14, val<int> zero, val<int*> var_18, val<int*> var_19) {
    *var_18 += ((((/* implicit */val<bool>) var_14)) ? (242304215) : (((/* implicit */val<int>) var_2)));
    *var_19 = min((((max((((/* implicit */val<int>) var_7)), (var_4))) / (var_5))), (((((/* implicit */val<bool>) var_12)) ? (((((/* implicit */val<int>) var_14)) + (var_1))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) == (var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1120067720;
unsigned char var_2 = (unsigned char)113;
int var_4 = 2131270303;
int var_5 = -1293620609;
bool var_7 = (bool)1;
unsigned long long int var_12 = 9977723459640842684ULL;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)114;
int zero = 0;
int var_18 = -2030734530;
int var_19 = 936537111;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1788430315;
    value_mismatch |= var_19 != -1120067606;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_7, var_12, var_13, var_14, zero, &var_18, &var_19);
  checksum();
}
