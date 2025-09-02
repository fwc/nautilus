/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4572
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4572
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
void test(val<bool> var_0, val<unsigned long long int> var_3, val<signed char> var_4, val<unsigned long long int> var_9, val<long long int> var_12, val<int> zero, val<int*> var_13, val<signed char*> var_14, val<unsigned char*> var_15, val<bool*> var_16) {
    *var_13 = ((/* implicit */val<int>) (((!(((/* implicit */val<bool>) ((10291989546079586539ULL) - (((/* implicit */val<unsigned long long int>) 1806308901))))))) ? (((/* implicit */val<unsigned long long int>) (-(7253649721498912137LL)))) : (((max((((/* implicit */val<unsigned long long int>) var_12)), (var_9))) / (var_3)))));
    *var_14 = ((/* implicit */val<signed char>) var_12);
    *var_15 = ((/* implicit */val<unsigned char>) var_0);
    *var_16 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_3 = 16262692345814974228ULL;
signed char var_4 = (signed char)73;
unsigned long long int var_9 = 435732687937972170ULL;
long long int var_12 = -4718926521974705030LL;
int zero = 0;
int var_13 = 1680964038;
signed char var_14 = (signed char)108;
unsigned char var_15 = (unsigned char)230;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (signed char)122;
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
