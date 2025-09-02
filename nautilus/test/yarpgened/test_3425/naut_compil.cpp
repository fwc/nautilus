/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3425
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3425
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_1, val<signed char> var_2, val<int> var_3, val<long long int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<int> var_7, val<short> var_8, val<int> var_9, val<int> zero, val<long long int*> var_10, val<bool*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_10 = ((((/* implicit */val<bool>) 253018259U)) ? (((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<unsigned long long int>) var_9))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)28021))) : (1147049671U)))) : ((-(var_4))))) : (((/* implicit */val<long long int>) (+((-(var_7)))))));
    if (((/* implicit */val<bool>) (~(max((((/* implicit */val<int>) var_8)), (((var_3) ^ (((/* implicit */val<int>) var_2)))))))))
    {
        *var_11 = ((/* implicit */val<bool>) min((var_5), (((/* implicit */val<unsigned long long int>) (!((!((val<bool>)0))))))));
        if ((!((val<bool>)1)))
        {
            *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((231847076U) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)250)))))) ? (((val<unsigned long long int>) (~(((/* implicit */val<int>) (val<short>)-13802))))) : (((/* implicit */val<unsigned long long int>) 1654470311249524559LL))));
            *var_13 = ((/* implicit */val<unsigned long long int>) max((*var_13), (((/* implicit */val<unsigned long long int>) 171121037))));
        }

    }

    *var_14 = ((/* implicit */val<unsigned long long int>) ((val<short>) ((max((((/* implicit */val<unsigned long long int>) var_9)), (var_5))) <= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4342963530734525687ULL;
unsigned int var_1 = 2331140247U;
signed char var_2 = (signed char)-53;
int var_3 = -1545193001;
long long int var_4 = 5989827660856191403LL;
unsigned long long int var_5 = 164454759891412072ULL;
unsigned long long int var_6 = 13898722983901227876ULL;
int var_7 = 704114036;
short var_8 = (short)16947;
int var_9 = 933256357;
int zero = 0;
long long int var_10 = 4827130920536366021LL;
bool var_11 = (bool)0;
long long int var_12 = 7963844099148580439LL;
unsigned long long int var_13 = 9480180547118564389ULL;
unsigned long long int var_14 = 9174546974993904465ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 28021LL;
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 7963844099148580439LL;
    value_mismatch |= var_13 != 9480180547118564389ULL;
    value_mismatch |= var_14 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
