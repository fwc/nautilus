/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6761
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6761
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
void test(val<unsigned int> var_10, val<unsigned char> var_13, val<int> zero, val<long long int*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) max((((14760709753447923393ULL) / (3686034320261628223ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned int>) 1492462320U))) ? (((((-5108940910939850251LL) + (9223372036854775807LL))) >> (((14760709753447923390ULL) - (14760709753447923378ULL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 14760709753447923390ULL))))))))))))));
    *var_15 |= ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((1708501352U) >= (((/* implicit */val<unsigned int>) -1944024741)))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((7548919232185177455LL) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-117))))))) + (var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3419529204U;
unsigned char var_13 = (unsigned char)254;
int zero = 0;
long long int var_14 = -3671660938786733266LL;
unsigned int var_15 = 1601760937U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1004499786600323LL;
    value_mismatch |= var_15 != 1601761023U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
