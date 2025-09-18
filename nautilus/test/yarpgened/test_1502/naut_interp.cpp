/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1502
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1502
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
void test(val<long long int> var_5, val<signed char> var_7, val<int> zero, val<long long int*> var_10, val<signed char*> var_11) {
    *var_10 &= ((/* implicit */val<long long int>) (+(3050771423746227522ULL)));
    *var_11 = ((/* implicit */val<signed char>) (~(min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 1881359112U)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7))))), (var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5449817590376788949LL;
signed char var_7 = (signed char)-95;
int zero = 0;
long long int var_10 = 6435054924118543963LL;
signed char var_11 = (signed char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 595742141100477506LL;
    value_mismatch |= var_11 != (signed char)-44;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, zero, &var_10, &var_11);
  checksum();
}
