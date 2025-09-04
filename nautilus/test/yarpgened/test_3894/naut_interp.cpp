/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3894
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3894
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
void test(val<unsigned long long int> var_2, val<signed char> var_7, val<int> zero, val<unsigned char*> var_16, val<unsigned long long int*> var_17) {
    *var_16 *= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) max((var_7), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (val<unsigned char>)14)))))))), (((((/* implicit */val<bool>) -5315468464313488662LL)) ? (4294967291U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))));
    *var_17 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14057722358045018283ULL;
signed char var_7 = (signed char)-118;
int zero = 0;
unsigned char var_16 = (unsigned char)169;
unsigned long long int var_17 = 17563590319553827174ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)179;
    value_mismatch |= var_17 != 14057722358045018283ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
