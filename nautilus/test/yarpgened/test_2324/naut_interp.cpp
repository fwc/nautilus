/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2324
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2324
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<unsigned char> var_3, val<unsigned int> var_4, val<short> var_5, val<bool> var_8, val<unsigned char> var_9, val<short> var_10, val<unsigned char> var_11, val<bool> var_13, val<short> var_14, val<int> var_17, val<bool> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned int*> var_20, val<unsigned short*> var_21, val<short*> var_22, val<unsigned long long int*> var_23) {
    *var_19 = ((/* implicit */val<unsigned short>) max((var_3), (var_11)));
    *var_20 = ((((((/* implicit */val<bool>) min((-5755577963274395455LL), (((/* implicit */val<long long int>) (val<unsigned char>)128))))) ? (min((var_4), (((/* implicit */val<unsigned int>) var_14)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) < (((/* implicit */val<int>) var_9)))))))) - (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((var_17) != (((/* implicit */val<int>) var_18)))))))));
    if (((/* implicit */val<bool>) var_14))
    {
        *var_21 = ((/* implicit */val<unsigned short>) ((val<long long int>) var_0));
        *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned char>) var_13)), (((val<unsigned char>) var_4))))) ? (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<unsigned char>)109))))) : (var_1)));
    }

    *var_23 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) != ((-(((val<unsigned long long int>) var_10))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4446;
long long int var_1 = 2303361923937494430LL;
unsigned char var_3 = (unsigned char)125;
unsigned int var_4 = 3644764006U;
short var_5 = (short)-27045;
bool var_8 = (bool)0;
unsigned char var_9 = (unsigned char)189;
short var_10 = (short)-8485;
unsigned char var_11 = (unsigned char)148;
bool var_13 = (bool)1;
short var_14 = (short)5653;
int var_17 = 975125220;
bool var_18 = (bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)54431;
unsigned int var_20 = 1229708509U;
unsigned short var_21 = (unsigned short)64759;
short var_22 = (short)-23898;
unsigned long long int var_23 = 1820154928045588252ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)148;
    value_mismatch |= var_20 != 5654U;
    value_mismatch |= var_21 != (unsigned short)4446;
    value_mismatch |= var_22 != (short)-109;
    value_mismatch |= var_23 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_13, var_14, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
