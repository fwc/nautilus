/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=707
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<signed char> var_2, val<unsigned char> var_3, val<long long int> var_4, val<unsigned int> var_5, val<unsigned char> var_6, val<bool> var_7, val<bool> var_8, val<short> var_9, val<unsigned char> var_11, val<int> zero, val<unsigned int*> var_12, val<unsigned short*> var_13, val<unsigned short*> var_14, val<long long int*> var_15, val<unsigned short*> var_16) {
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_7) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)53))))))))) > (((val<unsigned int>) var_9))));
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) / (((var_8) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_3))))))) ? (((((/* implicit */val<bool>) ((5191968081300951097LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-56)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_9), (((/* implicit */val<short>) var_2)))))) : (min((((/* implicit */val<long long int>) var_0)), (var_4))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) || (((/* implicit */val<bool>) var_0))))))))));
    if (((((/* implicit */val<int>) var_0)) != (((/* implicit */val<int>) var_2))))
    {
        *var_14 = ((/* implicit */val<unsigned short>) min((*var_14), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_5) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) (val<signed char>)14))))) : (((/* implicit */val<int>) var_11))))) ? (1127160828213065142LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) && (((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_9)))))))))))));
        *var_15 += ((/* implicit */val<long long int>) (val<signed char>)-56);
        *var_16 = ((/* implicit */val<unsigned short>) var_4);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
unsigned short var_1 = (unsigned short)29389;
signed char var_2 = (signed char)48;
unsigned char var_3 = (unsigned char)108;
long long int var_4 = 3769717224448737395LL;
unsigned int var_5 = 52432001U;
unsigned char var_6 = (unsigned char)65;
bool var_7 = (bool)1;
bool var_8 = (bool)0;
short var_9 = (short)4352;
unsigned char var_11 = (unsigned char)69;
int zero = 0;
unsigned int var_12 = 3567356440U;
unsigned short var_13 = (unsigned short)43861;
unsigned short var_14 = (unsigned short)46394;
long long int var_15 = -9122301638323466687LL;
unsigned short var_16 = (unsigned short)38284;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != (unsigned short)4352;
    value_mismatch |= var_14 != (unsigned short)46394;
    value_mismatch |= var_15 != -9122301638323466743LL;
    value_mismatch |= var_16 != (unsigned short)16499;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
