/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9116
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9116
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
void test(val<short> var_2, val<int> var_3, val<long long int> var_5, val<unsigned int> var_8, val<unsigned char> var_11, val<int> zero, val<signed char*> var_12, val<unsigned int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) (((!(((/* implicit */val<bool>) var_2)))) && (((/* implicit */val<bool>) var_3)))))));
    if (((/* implicit */val<bool>) var_5))
    {
        *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) max(((val<bool>)0), (((val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))))))));
        *var_14 = ((/* implicit */val<short>) ((val<unsigned short>) (val<short>)-28874));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21473;
int var_3 = 1148268714;
long long int var_5 = 1980719823704603956LL;
unsigned int var_8 = 1651618304U;
unsigned char var_11 = (unsigned char)158;
int zero = 0;
signed char var_12 = (signed char)-12;
unsigned int var_13 = 3550506730U;
short var_14 = (short)-20299;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-1;
    value_mismatch |= var_13 != 3550506730U;
    value_mismatch |= var_14 != (short)-28874;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_8, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
