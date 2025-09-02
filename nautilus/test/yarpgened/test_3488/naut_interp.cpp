/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3488
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3488
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
void test(val<short> var_1, val<unsigned char> var_2, val<signed char> var_4, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) ((val<signed char>) (+(((/* implicit */val<int>) var_10)))));
    *var_12 &= ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) (val<signed char>)17)) & (((/* implicit */val<int>) var_4)))) & (((/* implicit */val<int>) ((((/* implicit */val<int>) var_1)) <= (((/* implicit */val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29703;
unsigned char var_2 = (unsigned char)60;
signed char var_4 = (signed char)-49;
unsigned char var_10 = (unsigned char)106;
int zero = 0;
unsigned char var_11 = (unsigned char)204;
long long int var_12 = -3530573244754457425LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)106;
    value_mismatch |= var_12 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
