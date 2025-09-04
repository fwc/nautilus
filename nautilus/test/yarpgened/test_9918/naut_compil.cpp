/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9918
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9918
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
void test(val<int> var_8, val<unsigned char> var_10, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15) {
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) (val<unsigned char>)84)) ? (3266197464U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)85)))))))) ? (((/* implicit */val<int>) (val<unsigned char>)171)) : (((/* implicit */val<int>) var_10))));
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_11), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)145))))))))) * (-5502976609870620241LL)));
    *var_14 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) ((max((var_8), (((/* implicit */val<int>) (val<unsigned char>)171)))) < (var_8))))));
    *var_15 = ((/* implicit */val<unsigned int>) (val<unsigned char>)84);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 308104913;
unsigned char var_10 = (unsigned char)60;
unsigned long long int var_11 = 15779494408264872299ULL;
int zero = 0;
unsigned int var_12 = 170712278U;
unsigned int var_13 = 3802301318U;
unsigned int var_14 = 4005562127U;
unsigned int var_15 = 845265362U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 171U;
    value_mismatch |= var_13 != 0U;
    value_mismatch |= var_14 != 4294967295U;
    value_mismatch |= var_15 != 84U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
