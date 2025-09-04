/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7200
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7200
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
void test(val<signed char> var_0, val<int> zero, val<unsigned long long int*> var_17, val<unsigned char*> var_18) {
    *var_17 += ((/* implicit */val<unsigned long long int>) var_0);
    *var_18 = ((/* implicit */val<unsigned char>) min((*var_18), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (-((+(((/* implicit */val<int>) var_0))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
int zero = 0;
unsigned long long int var_17 = 12699937265446086763ULL;
unsigned char var_18 = (unsigned char)251;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 12699937265446086676ULL;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
