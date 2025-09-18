/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2002
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2002
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
void test(val<bool> var_1, val<unsigned int> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) max((*var_10), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((-4939253955637147457LL) < (((/* implicit */val<long long int>) min((((/* implicit */val<int>) (val<unsigned short>)27282)), (-285953382))))))) / (((/* implicit */val<int>) (val<bool>)1)))))));
    *var_11 ^= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (!(var_1)))) : ((+(max((256), (((/* implicit */val<int>) (val<signed char>)100))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned int var_9 = 1032898337U;
int zero = 0;
unsigned short var_10 = (unsigned short)26381;
unsigned long long int var_11 = 2324533668492357356ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)26381;
    value_mismatch |= var_11 != 2324533668492357356ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_10, &var_11);
  checksum();
}
