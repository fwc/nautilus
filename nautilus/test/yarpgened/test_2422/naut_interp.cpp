/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2422
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2422
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
void test(val<unsigned int> var_0, val<int> var_2, val<unsigned int> var_3, val<int> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned long long int*> var_19, val<long long int*> var_20) {
    *var_19 = ((((val<unsigned long long int>) max((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)24445)))) % (((/* implicit */val<unsigned long long int>) var_15)));
    *var_20 = ((/* implicit */val<long long int>) (+(max((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) : (var_3))), (((/* implicit */val<unsigned int>) ((3995388924U) <= (var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4100421656U;
int var_2 = 1721989606;
unsigned int var_3 = 2812919607U;
int var_15 = 1783157391;
unsigned char var_16 = (unsigned char)193;
int zero = 0;
unsigned long long int var_19 = 633384039737780880ULL;
long long int var_20 = 785542591193026916LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 24445ULL;
    value_mismatch |= var_20 != 193LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_15, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
