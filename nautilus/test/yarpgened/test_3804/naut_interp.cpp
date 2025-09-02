/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3804
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3804
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
void test(val<unsigned short> var_4, val<unsigned int> var_7, val<signed char> var_8, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned long long int*> var_12) {
    *var_11 *= ((/* implicit */val<unsigned int>) var_8);
    *var_12 = ((/* implicit */val<unsigned long long int>) min((*var_12), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<short>) var_4)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)108))) : ((((~(var_10))) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) var_7)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16164;
unsigned int var_7 = 3614421979U;
signed char var_8 = (signed char)-111;
unsigned int var_10 = 3603501109U;
int zero = 0;
unsigned int var_11 = 2361519686U;
unsigned long long int var_12 = 10804714926206423252ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4159287206U;
    value_mismatch |= var_12 != 108ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
