/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7501
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7501
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
void test(val<unsigned char> var_4, val<unsigned int> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned char>) var_9);
    *var_17 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_9))));
    *var_18 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (3385457683U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)226;
unsigned int var_9 = 664703055U;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned char var_16 = (unsigned char)55;
unsigned long long int var_17 = 5345737013816200226ULL;
unsigned long long int var_18 = 4143618254561127212ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)79;
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 4ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, var_10, zero, &var_16, &var_17, &var_18);
  checksum();
}
