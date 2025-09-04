/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2704
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2704
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
void test(val<int> var_10, val<unsigned char> var_11, val<unsigned short> var_12, val<int> var_14, val<signed char> var_17, val<short> var_18, val<int> zero, val<long long int*> var_19, val<short*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_11)), (((((/* implicit */val<int>) var_17)) + ((~(((/* implicit */val<int>) (val<unsigned short>)55701))))))));
    if (((/* implicit */val<bool>) ((min((((/* implicit */val<long long int>) var_18)), (-1565074385816806036LL))) + (((/* implicit */val<long long int>) var_14)))))
    {
        *var_20 = ((/* implicit */val<short>) max((*var_20), (((/* implicit */val<short>) var_10))));
        *var_21 = var_12;
        *var_22 = ((/* implicit */val<unsigned short>) ((1565074385816806034LL) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)8191)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -359568482;
unsigned char var_11 = (unsigned char)220;
unsigned short var_12 = (unsigned short)13926;
int var_14 = -1480304730;
signed char var_17 = (signed char)-86;
short var_18 = (short)28458;
int zero = 0;
long long int var_19 = -6827727349194364563LL;
short var_20 = (short)-16257;
unsigned short var_21 = (unsigned short)13081;
unsigned short var_22 = (unsigned short)45883;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 220LL;
    value_mismatch |= var_20 != (short)27550;
    value_mismatch |= var_21 != (unsigned short)13926;
    value_mismatch |= var_22 != (unsigned short)32767;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, var_12, var_14, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
