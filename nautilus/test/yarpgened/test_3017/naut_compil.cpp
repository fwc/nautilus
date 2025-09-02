/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3017
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3017
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
void test(val<long long int> var_1, val<unsigned int> var_4, val<unsigned char> var_6, val<long long int> var_10, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) max((*var_15), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_4)) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (-2147483647 - 1))), (var_1)))))))))))));
    *var_16 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6234574206628615774LL;
unsigned int var_4 = 3770958566U;
unsigned char var_6 = (unsigned char)227;
long long int var_10 = -1652723188214824387LL;
int zero = 0;
unsigned char var_15 = (unsigned char)248;
unsigned char var_16 = (unsigned char)245;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)248;
    value_mismatch |= var_16 != (unsigned char)227;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
