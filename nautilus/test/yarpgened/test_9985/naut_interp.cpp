/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9985
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9985
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
void test(val<unsigned int> var_14, val<int> zero, val<short*> var_19, val<int*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<short>) (+(((((/* implicit */val<bool>) ((-9223372036854775799LL) - (((/* implicit */val<long long int>) 7))))) ? (((/* implicit */val<long long int>) 4294967293U)) : (((3176075122392922786LL) | (((/* implicit */val<long long int>) 2832866739U))))))));
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 9223372036854775798LL)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<long long int>) var_14)) : (((((/* implicit */val<bool>) 972957436U)) ? (9223372036854775799LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)16)))))))) ^ (min((((/* implicit */val<unsigned long long int>) (val<bool>)0)), (4727403006160064727ULL)))));
    *var_21 = ((/* implicit */val<bool>) 4402912509996912912ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_14 = 2956308542U;
int zero = 0;
short var_19 = (short)-6866;
int var_20 = -763550602;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-3;
    value_mismatch |= var_20 != -1338658754;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
