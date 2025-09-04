/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4893
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4893
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
void test(val<int> var_0, val<unsigned short> var_1, val<signed char> var_2, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned char> var_7, val<short> var_9, val<int> zero, val<int*> var_10, val<int*> var_11, val<signed char*> var_12, val<short*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_10 = ((/* implicit */val<int>) (val<short>)-24216);
    *var_11 += ((/* implicit */val<int>) (~((~(var_6)))));
    if (((/* implicit */val<bool>) var_4))
    {
        *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)4984)) ? (((/* implicit */val<int>) var_1)) : (((((/* implicit */val<int>) (val<short>)-17010)) | (((/* implicit */val<int>) var_2))))))) & (((var_5) << (((/* implicit */val<int>) var_7))))));
        *var_13 += ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)31081)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)17010))) : (var_6)))) ? (((/* implicit */val<int>) max((((/* implicit */val<short>) var_2)), ((val<short>)9003)))) : (((/* implicit */val<int>) var_9)))))));
        *var_14 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) ((val<unsigned short>) ((((((/* implicit */val<int>) (val<short>)-17010)) + (2147483647))) << (((var_0) - (743107599)))))))));
        *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) max((var_4), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_2)) : (var_0)))) ? (((((/* implicit */val<bool>) var_2)) ? (var_0) : (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-17022)) < (((/* implicit */val<int>) var_9)))))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 743107599;
unsigned short var_1 = (unsigned short)59447;
signed char var_2 = (signed char)-47;
unsigned long long int var_4 = 6429448782112676704ULL;
unsigned long long int var_5 = 6002689259515848717ULL;
unsigned long long int var_6 = 16925818738993304119ULL;
unsigned char var_7 = (unsigned char)31;
short var_9 = (short)-27621;
int zero = 0;
int var_10 = 166822706;
int var_11 = -26591907;
signed char var_12 = (signed char)-14;
short var_13 = (short)23973;
short var_14 = (short)-23971;
short var_15 = (short)-2338;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -24216;
    value_mismatch |= var_11 != 1556270996;
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (short)23973;
    value_mismatch |= var_14 != (short)17011;
    value_mismatch |= var_15 != (short)-2338;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
