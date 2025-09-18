/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6312
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6312
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
void test(val<long long int> var_1, val<short> var_2, val<signed char> var_4, val<unsigned long long int> var_6, val<long long int> var_7, val<unsigned long long int> var_8, val<long long int> var_10, val<long long int> var_12, val<unsigned char> var_13, val<unsigned int> var_14, val<unsigned char> var_16, val<signed char> var_17, val<bool> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    if (((/* implicit */val<bool>) ((min((2730545281996811294LL), (((/* implicit */val<long long int>) 201748454U)))) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))))))
    {
        *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) var_7)) * (max((max((var_8), (((/* implicit */val<unsigned long long int>) var_14)))), (((/* implicit */val<unsigned long long int>) ((var_1) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))))))))));
        *var_20 = max((max((min((((/* implicit */val<unsigned long long int>) var_10)), (var_8))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_16)) / (((/* implicit */val<int>) var_4))))))), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) max((var_2), (((/* implicit */val<short>) var_17))))) + (2147483647))) << (((((min((var_12), (var_10))) + (7995920422438212770LL))) - (30LL)))))));
    }

    *var_21 = ((((((var_6) - (((/* implicit */val<unsigned long long int>) var_7)))) << (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) / (var_12))))) >> (((((/* implicit */val<int>) var_16)) - (179))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1151662138477803136LL;
short var_2 = (short)-11558;
signed char var_4 = (signed char)84;
unsigned long long int var_6 = 395942500750580419ULL;
long long int var_7 = -1943650210829809148LL;
unsigned long long int var_8 = 14561517532368103082ULL;
long long int var_10 = 6739501757029484054LL;
long long int var_12 = -7995920422438212740LL;
unsigned char var_13 = (unsigned char)16;
unsigned int var_14 = 2093177695U;
unsigned char var_16 = (unsigned char)233;
signed char var_17 = (signed char)-103;
bool var_18 = (bool)1;
int zero = 0;
unsigned int var_19 = 1845634950U;
unsigned long long int var_20 = 13122578525659780228ULL;
unsigned long long int var_21 = 3892717199017343806ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3458121384U;
    value_mismatch |= var_20 != 6739501757029484054ULL;
    value_mismatch |= var_21 != 129ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_7, var_8, var_10, var_12, var_13, var_14, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
