/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6550
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6550
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
void test(val<unsigned int> var_0, val<short> var_1, val<unsigned int> var_4, val<int> zero, val<unsigned char*> var_14, val<int*> var_15, val<signed char*> var_16, val<bool*> var_17, val<short*> var_18) {
    *var_14 ^= ((/* implicit */val<unsigned char>) var_1);
    if (((/* implicit */val<bool>) (val<short>)6924))
    {
        *var_15 = ((/* implicit */val<int>) var_0);
        *var_16 &= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 2353526756780976055LL)) ? (((/* implicit */val<long long int>) (-2147483647 - 1))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-2958))) + (-6563354980753388566LL)))));
        *var_17 = ((/* implicit */val<bool>) var_0);
    }

    *var_18 ^= ((val<short>) (+(var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 569891323U;
short var_1 = (short)-19056;
unsigned int var_4 = 1536976094U;
int zero = 0;
unsigned char var_14 = (unsigned char)225;
int var_15 = 79506348;
signed char var_16 = (signed char)15;
bool var_17 = (bool)0;
short var_18 = (short)-24951;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)113;
    value_mismatch |= var_15 != 569891323;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (short)-1449;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
