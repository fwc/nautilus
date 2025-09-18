/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7743
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7743
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
void test(val<bool> var_8, val<short> var_9, val<int> zero, val<long long int*> var_14, val<unsigned int*> var_15, val<unsigned char*> var_16) {
    *var_14 ^= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_9))));
    *var_15 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<unsigned short>)0))));
    *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) ((val<short>) -740132932))), ((val<unsigned short>)38961)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : ((+(14299517577433703284ULL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)1;
short var_9 = (short)-9712;
int zero = 0;
long long int var_14 = 8536204466110170119LL;
unsigned int var_15 = 1493617678U;
unsigned char var_16 = (unsigned char)54;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 8536204466110170119LL;
    value_mismatch |= var_15 != 4294967295U;
    value_mismatch |= var_16 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_14, &var_15, &var_16);
  checksum();
}
