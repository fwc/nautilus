/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7756
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7756
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
void test(val<long long int> var_4, val<unsigned int> var_9, val<int> zero, val<bool*> var_10, val<unsigned short*> var_11) {
    *var_10 = ((/* implicit */val<bool>) var_9);
    *var_11 = ((/* implicit */val<unsigned short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4225380710127493974LL;
unsigned int var_9 = 2553837263U;
int zero = 0;
bool var_10 = (bool)1;
unsigned short var_11 = (unsigned short)6675;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (unsigned short)7338;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, zero, &var_10, &var_11);
  checksum();
}
