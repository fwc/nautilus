/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 774
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=774
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
void test(val<unsigned int> var_0, val<int> var_1, val<unsigned char> var_2, val<long long int> var_6, val<int> zero, val<int*> var_14, val<long long int*> var_15, val<signed char*> var_16) {
    *var_14 -= ((/* implicit */val<int>) var_0);
    *var_15 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (+(max((var_6), (((/* implicit */val<long long int>) var_2)))))))));
    *var_16 &= ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1130755899U;
int var_1 = 1044986423;
unsigned char var_2 = (unsigned char)113;
long long int var_6 = -7440230712421363159LL;
int zero = 0;
int var_14 = 427785836;
long long int var_15 = -7212661248154701184LL;
signed char var_16 = (signed char)-104;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -702970063;
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != (signed char)16;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
