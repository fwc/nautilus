/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6236
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6236
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
void test(val<bool> var_1, val<int> var_9, val<int> zero, val<unsigned long long int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned long long int>) min((var_9), (((/* implicit */val<int>) var_1))));
    *var_12 = (~(((/* implicit */val<int>) ((val<unsigned char>) (+(((/* implicit */val<int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
int var_9 = -1185112045;
int zero = 0;
unsigned long long int var_11 = 13988186311316344764ULL;
int var_12 = -532491826;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 18446744072524439571ULL;
    value_mismatch |= var_12 != -2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_11, &var_12);
  checksum();
}
