/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2381
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2381
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
void test(val<long long int> var_13, val<long long int> var_16, val<int> zero, val<unsigned short*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((val<signed char>) (+(var_13)))));
    *var_20 = var_16;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -4459302972627357450LL;
long long int var_16 = 2828653965815360396LL;
int zero = 0;
unsigned short var_19 = (unsigned short)13689;
long long int var_20 = -1891453644461872268LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)65526;
    value_mismatch |= var_20 != 2828653965815360396LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_16, zero, &var_19, &var_20);
  checksum();
}
