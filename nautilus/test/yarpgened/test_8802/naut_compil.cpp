/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8802
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8802
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
void test(val<signed char> var_1, val<long long int> var_3, val<long long int> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned long long int*> var_11, val<signed char*> var_12, val<signed char*> var_13, val<unsigned short*> var_14) {
    if (((/* implicit */val<bool>) max((var_3), (var_8))))
    {
        *var_11 = ((/* implicit */val<unsigned long long int>) var_9);
        *var_12 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) (val<unsigned char>)96)), (689466363U)));
    }

    *var_13 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (val<unsigned short>)58316))));
    *var_14 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
long long int var_3 = -4805469246878422338LL;
long long int var_8 = -73194633790061263LL;
unsigned int var_9 = 1093593451U;
int zero = 0;
unsigned long long int var_11 = 9812832525887080433ULL;
signed char var_12 = (signed char)-56;
signed char var_13 = (signed char)19;
unsigned short var_14 = (unsigned short)59398;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1093593451ULL;
    value_mismatch |= var_12 != (signed char)96;
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
