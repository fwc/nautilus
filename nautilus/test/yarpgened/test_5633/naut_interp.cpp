/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5633
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5633
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
void test(val<short> var_9, val<unsigned char> var_11, val<int> zero, val<unsigned short*> var_13, val<short*> var_14) {
    *var_13 ^= ((/* implicit */val<unsigned short>) var_9);
    *var_14 = ((/* implicit */val<short>) (((!(((/* implicit */val<bool>) 8102170726232928626ULL)))) ? (((val<unsigned long long int>) (~(16355035436947782662ULL)))) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_11)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-29414;
unsigned char var_11 = (unsigned char)103;
int zero = 0;
unsigned short var_13 = (unsigned short)54809;
short var_14 = (short)-5952;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)23299;
    value_mismatch |= var_14 != (short)103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
