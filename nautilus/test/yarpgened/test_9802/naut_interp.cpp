/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9802
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9802
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
void test(val<long long int> var_4, val<long long int> var_13, val<int> zero, val<signed char*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) min((var_13), (((/* implicit */val<long long int>) (val<unsigned short>)32381))));
    *var_15 = ((/* implicit */val<unsigned short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7823220260930021351LL;
long long int var_13 = 3663685518901641876LL;
int zero = 0;
signed char var_14 = (signed char)-13;
unsigned short var_15 = (unsigned short)47955;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)125;
    value_mismatch |= var_15 != (unsigned short)38937;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
