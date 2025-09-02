/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9232
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9232
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
void test(val<long long int> var_4, val<signed char> var_9, val<unsigned short> var_10, val<int> zero, val<unsigned short*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) var_4);
    *var_21 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned short>) var_9)), (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5213314785738964457LL;
signed char var_9 = (signed char)91;
unsigned short var_10 = (unsigned short)29812;
int zero = 0;
unsigned short var_20 = (unsigned short)15472;
unsigned char var_21 = (unsigned char)118;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)15849;
    value_mismatch |= var_21 != (unsigned char)116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, var_10, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
