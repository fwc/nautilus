/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1768
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1768
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
void test(val<signed char> var_5, val<unsigned short> var_8, val<unsigned long long int> var_13, val<int> zero, val<unsigned char*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) ((val<signed char>) var_8));
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (~(((/* implicit */val<int>) var_5))))))) >= (var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)(-127 - 1);
unsigned short var_8 = (unsigned short)9489;
unsigned long long int var_13 = 5632097130490826264ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)118;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)17;
    value_mismatch |= var_17 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_13, zero, &var_16, &var_17);
  checksum();
}
