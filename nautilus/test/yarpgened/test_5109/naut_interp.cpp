/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5109
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5109
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
void test(val<unsigned long long int> var_1, val<long long int> var_11, val<int> zero, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) var_1);
    *var_14 = ((/* implicit */val<unsigned short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10086774276332826842ULL;
long long int var_11 = -669979752496956911LL;
int zero = 0;
long long int var_13 = 6449242143620210440LL;
unsigned short var_14 = (unsigned short)26931;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -8359969797376724774LL;
    value_mismatch |= var_14 != (unsigned short)64017;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
