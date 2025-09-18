/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8656
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8656
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_2, val<unsigned char> var_3, val<bool> var_5, val<bool> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12, val<short*> var_13) {
    *var_10 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)-1)) || ((val<bool>)1)))) : (((/* implicit */val<int>) (val<short>)-13442))))) ? (((((/* implicit */val<bool>) ((val<unsigned char>) (val<bool>)1))) ? (min((2722026452074446138ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-6)))) : ((((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (21ULL))))) : (((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) (val<unsigned short>)13616)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)64)))), (((((/* implicit */val<int>) (val<short>)16384)) - (((/* implicit */val<int>) (val<bool>)1)))))))));
    if (((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) var_2)))), (((/* implicit */val<int>) (val<unsigned char>)157)))))
    {
        *var_11 |= ((/* implicit */val<unsigned int>) (+(((((((/* implicit */val<int>) var_3)) != (((/* implicit */val<int>) var_3)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_1)))));
        *var_12 ^= ((/* implicit */val<unsigned int>) (!(var_8)));
        *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_5) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (10442722128572035709ULL)))) ? (((val<unsigned long long int>) var_3)) : (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_9)))))) ? ((+(43ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)30025)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4516397072468897930ULL;
unsigned char var_2 = (unsigned char)68;
unsigned char var_3 = (unsigned char)44;
bool var_5 = (bool)0;
bool var_8 = (bool)0;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
unsigned int var_10 = 3869988141U;
unsigned int var_11 = 3894695283U;
unsigned int var_12 = 2099434477U;
short var_13 = (short)28782;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3776789818U;
    value_mismatch |= var_11 != 3913250299U;
    value_mismatch |= var_12 != 2099434476U;
    value_mismatch |= var_13 != (short)43;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
