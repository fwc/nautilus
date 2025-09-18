/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8066
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8066
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
void test(val<unsigned long long int> var_0, val<bool> var_4, val<signed char> var_5, val<long long int> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_11, val<int*> var_12) {
    *var_11 ^= ((/* implicit */val<unsigned int>) ((((((var_9) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<unsigned char>)244), ((val<unsigned char>)242))))))) != (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) min(((val<unsigned char>)20), ((val<unsigned char>)127)))))))));
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) (val<unsigned char>)255)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned char>)30)) >> (((6979004559978526125ULL) - (6979004559978526096ULL)))))) : (((-1LL) + (((/* implicit */val<long long int>) var_10))))))) ? (((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) var_0)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min(((val<unsigned char>)143), ((val<unsigned char>)244))))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_5)) << (((var_10) - (796337257U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12945661950963928717ULL;
bool var_4 = (bool)1;
signed char var_5 = (signed char)94;
long long int var_9 = -8150769616082348492LL;
unsigned int var_10 = 796337271U;
int zero = 0;
unsigned int var_11 = 4219805210U;
int var_12 = -1459029410;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4219805211U;
    value_mismatch |= var_12 != -1853960563;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_9, var_10, zero, &var_11, &var_12);
  checksum();
}
