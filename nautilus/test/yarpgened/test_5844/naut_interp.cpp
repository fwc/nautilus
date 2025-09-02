/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5844
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5844
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
void test(val<unsigned int> var_4, val<long long int> var_5, val<signed char> var_10, val<int> var_15, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21) {
    *var_20 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)37735))) > (max((var_5), (((/* implicit */val<long long int>) var_10))))))) >= (var_15)));
    *var_21 = ((/* implicit */val<long long int>) max((*var_21), (((/* implicit */val<long long int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3818257166U;
long long int var_5 = 7783465739196818768LL;
signed char var_10 = (signed char)61;
int var_15 = 706998607;
int zero = 0;
unsigned long long int var_20 = 949036083705773432ULL;
long long int var_21 = -4868051485338057922LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != 3818257166LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_10, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
