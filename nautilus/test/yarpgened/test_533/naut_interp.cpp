/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 533
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=533
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<signed char> var_8, val<unsigned long long int> var_10, val<signed char> var_14, val<short> var_16, val<int> zero, val<unsigned short*> var_17, val<unsigned int*> var_18, val<int*> var_19, val<bool*> var_20) {
    if (((/* implicit */val<bool>) var_8))
    {
        *var_17 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) var_1)), (min((((((/* implicit */val<bool>) (val<short>)2040)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (2042723598776406194ULL))), (((/* implicit */val<unsigned long long int>) -2147483641))))));
        *var_18 = ((/* implicit */val<unsigned int>) var_14);
        *var_19 += ((/* implicit */val<int>) var_1);
    }

    *var_20 = ((/* implicit */val<bool>) min((*var_20), (((/* implicit */val<bool>) max((var_10), (((/* implicit */val<unsigned long long int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55914;
unsigned char var_2 = (unsigned char)202;
signed char var_8 = (signed char)-60;
unsigned long long int var_10 = 16223506611415928284ULL;
signed char var_14 = (signed char)115;
short var_16 = (short)5313;
int zero = 0;
unsigned short var_17 = (unsigned short)6347;
unsigned int var_18 = 441337853U;
int var_19 = -894537511;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)5313;
    value_mismatch |= var_18 != 115U;
    value_mismatch |= var_19 != -894481597;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_10, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
