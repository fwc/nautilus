/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7184
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7184
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
void test(val<unsigned short> var_2, val<unsigned long long int> var_9, val<short> var_16, val<int> var_17, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19, val<unsigned int*> var_20, val<long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned char>) var_17);
    *var_19 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)255))));
    *var_20 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) min((((/* implicit */val<short>) ((((/* implicit */val<int>) var_2)) > (((/* implicit */val<int>) (val<unsigned char>)1))))), (var_16))))));
    *var_21 = ((/* implicit */val<long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10100;
unsigned long long int var_9 = 12586851025007307600ULL;
short var_16 = (short)-19667;
int var_17 = -683956562;
int zero = 0;
unsigned char var_18 = (unsigned char)119;
long long int var_19 = 4531414597576728342LL;
unsigned int var_20 = 2604136302U;
long long int var_21 = 8592271611278202141LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)174;
    value_mismatch |= var_19 != 255LL;
    value_mismatch |= var_20 != 19667U;
    value_mismatch |= var_21 != -5859893048702244016LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
