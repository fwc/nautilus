/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3745
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3745
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
void test(val<unsigned char> var_5, val<unsigned char> var_6, val<int> var_11, val<unsigned int> var_17, val<int> zero, val<int*> var_19, val<long long int*> var_20) {
    *var_19 ^= ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) var_6)))));
    *var_20 |= ((/* implicit */val<long long int>) ((((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) + (var_17))) + (((/* implicit */val<unsigned int>) -1)))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)141;
unsigned char var_6 = (unsigned char)172;
int var_11 = 27937176;
unsigned int var_17 = 3462423059U;
int zero = 0;
int var_19 = -134985745;
long long int var_20 = -1192989343890271745LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -134986026;
    value_mismatch |= var_20 != -1192989340427829761LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_11, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
