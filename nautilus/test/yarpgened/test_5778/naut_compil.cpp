/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5778
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5778
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
void test(val<long long int> var_0, val<unsigned short> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_4, val<short> var_5, val<long long int> var_10, val<unsigned char> var_11, val<int> var_12, val<unsigned int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    if (((/* implicit */val<bool>) var_5))
    {
        *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) var_10))));
        *var_15 += ((/* implicit */val<unsigned long long int>) var_10);
        *var_16 = ((/* implicit */val<bool>) var_13);
        *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) >= (var_12))))))) : (var_3)));
    }

    *var_18 ^= ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) / (((((/* implicit */val<bool>) var_0)) ? (var_4) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7779327691486603588LL;
unsigned short var_2 = (unsigned short)21028;
unsigned long long int var_3 = 4688931324560643204ULL;
unsigned long long int var_4 = 12532367396406068754ULL;
short var_5 = (short)11834;
long long int var_10 = -8599184207299779228LL;
unsigned char var_11 = (unsigned char)32;
int var_12 = -552888748;
unsigned int var_13 = 2223752134U;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
unsigned long long int var_15 = 9343803888038418588ULL;
bool var_16 = (bool)0;
unsigned short var_17 = (unsigned short)34190;
unsigned long long int var_18 = 11951407342921912404ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)184;
    value_mismatch |= var_15 != 744619680738639360ULL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned short)65535;
    value_mismatch |= var_18 != 11951407342921912404ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
