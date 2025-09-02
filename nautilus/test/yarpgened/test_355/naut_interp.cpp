/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 355
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=355
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
void test(val<unsigned int> var_5, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<int*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<short>)5070))))) ? (((/* implicit */val<unsigned long long int>) var_5)) : (((((val<bool>) 1176356980)) ? (max((((/* implicit */val<unsigned long long int>) var_5)), (0ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (var_10) : (var_9))))))));
    *var_13 = ((/* implicit */val<unsigned char>) max((1091284122168447607LL), (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)5075))) < (((val<unsigned long long int>) 11567120908017936147ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2145152506U;
long long int var_9 = -6915462338902332705LL;
long long int var_10 = 3096707674194210002LL;
int zero = 0;
int var_12 = 69133087;
unsigned char var_13 = (unsigned char)234;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2145152506;
    value_mismatch |= var_13 != (unsigned char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
