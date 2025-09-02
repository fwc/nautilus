/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2957
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2957
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_1, val<unsigned short> var_2, val<unsigned long long int> var_6, val<unsigned short> var_9, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14) {
    *var_13 -= ((/* implicit */val<unsigned char>) var_0);
    *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_0) : (var_1)))) ? (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_12)))) : (((/* implicit */val<int>) var_12))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10707890727017804662ULL;
unsigned long long int var_1 = 16546031003364123388ULL;
unsigned short var_2 = (unsigned short)63915;
unsigned long long int var_6 = 18103968626500991883ULL;
unsigned short var_9 = (unsigned short)40846;
unsigned char var_12 = (unsigned char)205;
int zero = 0;
unsigned char var_13 = (unsigned char)76;
unsigned long long int var_14 = 4978742440567329969ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)214;
    value_mismatch |= var_14 != 4978742440567329969ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_9, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
