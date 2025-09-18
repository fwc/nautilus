/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2114
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2114
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<short> var_3, val<short> var_4, val<unsigned char> var_5, val<short> var_8, val<unsigned long long int> var_9, val<int> zero, val<short*> var_10, val<unsigned long long int*> var_11, val<short*> var_12, val<short*> var_13) {
    if (((/* implicit */val<bool>) max((4316953992561665455LL), (((/* implicit */val<long long int>) (val<short>)20277)))))
    {
        if (((/* implicit */val<bool>) ((val<unsigned long long int>) var_8)))
        {
            *var_10 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (var_9))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))) : (min((var_0), (var_0)))));
            *var_11 &= ((/* implicit */val<unsigned long long int>) var_3);
        }

        *var_12 = ((/* implicit */val<short>) var_5);
    }

    *var_13 &= max((var_1), (((/* implicit */val<short>) ((((val<unsigned long long int>) var_4)) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max(((val<unsigned short>)49582), (((/* implicit */val<unsigned short>) var_8))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5417720293276866748ULL;
short var_1 = (short)16902;
short var_3 = (short)-1917;
short var_4 = (short)14688;
unsigned char var_5 = (unsigned char)103;
short var_8 = (short)-19714;
unsigned long long int var_9 = 14759642155134806636ULL;
int zero = 0;
short var_10 = (short)23021;
unsigned long long int var_11 = 8574826905041036990ULL;
short var_12 = (short)16120;
short var_13 = (short)-27854;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)16902;
    value_mismatch |= var_11 != 8574826905041035394ULL;
    value_mismatch |= var_12 != (short)103;
    value_mismatch |= var_13 != (short)514;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
