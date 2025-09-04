/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5811
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5811
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
void test(val<long long int> var_5, val<unsigned char> var_12, val<int> zero, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = min((max((min((18446744073709551601ULL), (((/* implicit */val<unsigned long long int>) (val<bool>)1)))), (max((((/* implicit */val<unsigned long long int>) 155033675)), (3969052927092730449ULL))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) ((val<signed char>) var_5))), (((((-67108864) + (2147483647))) >> (((-1854631377) + (1854631390)))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4735920907820394915LL;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
unsigned long long int var_20 = 18407136774837932468ULL;
unsigned long long int var_21 = 4306375020825898780ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 253951ULL;
    value_mismatch |= var_21 != 238ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
