/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6119
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6119
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
void test(val<short> var_7, val<unsigned short> var_9, val<int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) var_9))));
    *var_16 = min((var_14), (((/* implicit */val<int>) var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)32281;
unsigned short var_9 = (unsigned short)43051;
int var_14 = -1111635956;
int zero = 0;
unsigned long long int var_15 = 8398548890366220438ULL;
int var_16 = -1939242133;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 8398548890366220438ULL;
    value_mismatch |= var_16 != -1111635956;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
