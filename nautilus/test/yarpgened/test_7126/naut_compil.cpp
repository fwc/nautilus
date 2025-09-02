/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7126
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7126
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
void test(val<unsigned short> var_0, val<short> var_1, val<short> var_2, val<signed char> var_3, val<unsigned char> var_4, val<signed char> var_5, val<unsigned char> var_8, val<unsigned long long int> var_9, val<unsigned char> var_10, val<signed char> var_11, val<bool> var_12, val<unsigned short> var_14, val<unsigned char> var_16, val<short> var_17, val<bool> var_18, val<int> zero, val<unsigned short*> var_20, val<int*> var_21, val<long long int*> var_22, val<unsigned long long int*> var_23, val<long long int*> var_24) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<signed char>)(-127 - 1))), ((val<unsigned short>)0))))) : (((val<long long int>) max((var_0), (((/* implicit */val<unsigned short>) var_4))))))))
    {
        *var_20 = ((/* implicit */val<unsigned short>) var_3);
        *var_21 = max((((/* implicit */val<int>) var_5)), (((((/* implicit */val<int>) var_1)) << (((((/* implicit */val<int>) var_14)) - (39938))))));
        *var_22 &= ((/* implicit */val<long long int>) ((2118719405) >> (((-4726558269775380312LL) + (4726558269775380322LL)))));
    }

    *var_23 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) | (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_16)) * (((/* implicit */val<int>) var_17))))) ? (((val<unsigned int>) var_11)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_2), (((/* implicit */val<short>) var_12))))))))));
    *var_24 = ((/* implicit */val<long long int>) (+(max((((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned char>) var_11))))), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47074;
short var_1 = (short)24438;
short var_2 = (short)-10501;
signed char var_3 = (signed char)46;
unsigned char var_4 = (unsigned char)47;
signed char var_5 = (signed char)-98;
unsigned char var_8 = (unsigned char)233;
unsigned long long int var_9 = 505446494181287495ULL;
unsigned char var_10 = (unsigned char)118;
signed char var_11 = (signed char)122;
bool var_12 = (bool)0;
unsigned short var_14 = (unsigned short)39954;
unsigned char var_16 = (unsigned char)19;
short var_17 = (short)10191;
bool var_18 = (bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)17182;
int var_21 = 883938106;
long long int var_22 = 7492814977619288897LL;
unsigned long long int var_23 = 9425363778527008425ULL;
long long int var_24 = -1634381127978077917LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)17182;
    value_mismatch |= var_21 != 883938106;
    value_mismatch |= var_22 != 7492814977619288897LL;
    value_mismatch |= var_23 != 9425363778527008676ULL;
    value_mismatch |= var_24 != 47LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_12, var_14, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
