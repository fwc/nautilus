/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1694
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
void test(val<int> zero, val<bool*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((max((((/* implicit */val<long long int>) (val<unsigned short>)9921)), (2588716673961051809LL))) >= (((((/* implicit */val<bool>) (val<unsigned short>)21586)) ? (5657868447377835041LL) : (252580349924167437LL))))))) ^ (((val<long long int>) min((((/* implicit */val<long long int>) (val<unsigned short>)24327)), (750701734206827128LL))))));
    *var_17 = ((/* implicit */val<long long int>) ((val<unsigned char>) max((((/* implicit */val<long long int>) min((1641801463U), (((/* implicit */val<unsigned int>) (val<unsigned short>)2))))), (min((2696832897482897412LL), (((/* implicit */val<long long int>) (val<unsigned short>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_16 = (bool)0;
long long int var_17 = -5515064844551722721LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 2LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_16, &var_17);
  checksum();
}
