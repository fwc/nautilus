/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9746
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9746
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<unsigned long long int> var_10, val<short> var_15, val<int> zero, val<signed char*> var_16, val<int*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) ((val<unsigned char>) var_15));
    if (((/* implicit */val<bool>) ((val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) == (var_3)))))
    {
        *var_17 = ((/* implicit */val<int>) (val<signed char>)-23);
        *var_18 = ((/* implicit */val<long long int>) max((var_10), (((/* implicit */val<unsigned long long int>) min((88720073U), (((/* implicit */val<unsigned int>) (val<short>)32761)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned long long int var_3 = 14353311635643714573ULL;
unsigned long long int var_10 = 717666127556558521ULL;
short var_15 = (short)13573;
int zero = 0;
signed char var_16 = (signed char)61;
int var_17 = -1015410659;
long long int var_18 = 877352260113815934LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)5;
    value_mismatch |= var_17 != -1015410659;
    value_mismatch |= var_18 != 877352260113815934LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
