/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7270
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7270
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
void test(val<unsigned long long int> var_1, val<unsigned int> var_3, val<unsigned short> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_17 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(var_3)))) || (((/* implicit */val<bool>) min(((val<unsigned short>)30518), (var_16))))))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)233))) < (4712797598819951772ULL))))));
    *var_18 = ((/* implicit */val<unsigned int>) max((*var_18), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<bool>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1051371293865706581ULL;
unsigned int var_3 = 3338169374U;
unsigned short var_16 = (unsigned short)21611;
int zero = 0;
unsigned long long int var_17 = 4179299841548517476ULL;
unsigned int var_18 = 1861515315U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4179299841548517475ULL;
    value_mismatch |= var_18 != 1861515315U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
