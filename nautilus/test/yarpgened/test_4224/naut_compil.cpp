/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4224
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4224
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
void test(val<long long int> var_9, val<int> zero, val<long long int*> var_10, val<short*> var_11, val<unsigned short*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<long long int>) max((*var_10), (max((((/* implicit */val<long long int>) (val<bool>)1)), (-1148078866997672612LL)))));
    *var_11 = ((/* implicit */val<short>) 3022894636U);
    *var_12 = ((/* implicit */val<unsigned short>) (val<bool>)0);
    *var_13 = ((/* implicit */val<unsigned long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -3708239840372422202LL;
int zero = 0;
long long int var_10 = -6713756630561464475LL;
short var_11 = (short)1153;
unsigned short var_12 = (unsigned short)51650;
unsigned long long int var_13 = 437785931100709953ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != (short)-18900;
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != 14738504233337129414ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
