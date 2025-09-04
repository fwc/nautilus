/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2755
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2755
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
void test(val<long long int> var_2, val<bool> var_4, val<short> var_7, val<unsigned short> var_8, val<unsigned char> var_10, val<int> zero, val<int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<int>) var_7);
    *var_15 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)6889)) ? (8019475502670898445ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (var_4)))))))) ? (min((((/* implicit */val<long long int>) var_10)), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) - (var_2))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) ((10427268571038653156ULL) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-117)))))) != (((/* implicit */val<int>) (val<signed char>)-117)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5142777567392236223LL;
bool var_4 = (bool)1;
short var_7 = (short)9510;
unsigned short var_8 = (unsigned short)22122;
unsigned char var_10 = (unsigned char)108;
int zero = 0;
int var_14 = -926127972;
long long int var_15 = 4996458189594494897LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 9510;
    value_mismatch |= var_15 != 108LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
