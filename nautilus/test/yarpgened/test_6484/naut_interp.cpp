/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6484
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6484
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
void test(val<short> var_0, val<unsigned long long int> var_7, val<bool> var_9, val<bool> var_10, val<int> zero, val<bool*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_16 = ((/* implicit */val<bool>) var_0);
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) < (((/* implicit */val<int>) ((val<short>) 1567391502U)))));
    *var_18 ^= ((/* implicit */val<unsigned short>) var_9);
    *var_19 = min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) ^ (((var_7) ^ (((/* implicit */val<unsigned long long int>) 2727575793U)))))), (((/* implicit */val<unsigned long long int>) max((((val<int>) (val<unsigned short>)32768)), (((/* implicit */val<int>) ((2727575790U) > (2727575790U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32161;
unsigned long long int var_7 = 7894371750705964889ULL;
bool var_9 = (bool)1;
bool var_10 = (bool)0;
int zero = 0;
bool var_16 = (bool)1;
int var_17 = 543493291;
unsigned short var_18 = (unsigned short)58951;
unsigned long long int var_19 = 14921633178360941ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 1;
    value_mismatch |= var_18 != (unsigned short)58950;
    value_mismatch |= var_19 != 32768ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_9, var_10, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
