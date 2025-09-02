/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7435
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7435
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
void test(val<unsigned short> var_0, val<long long int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_4, val<unsigned char> var_5, val<bool> var_6, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned int> var_9, val<long long int> var_10, val<bool> var_11, val<int> zero, val<bool*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<int*> var_21, val<bool*> var_22, val<signed char*> var_23) {
    *var_13 |= ((((/* implicit */val<bool>) (val<signed char>)52)) && (((/* implicit */val<bool>) ((val<unsigned int>) var_10))));
    if (((/* implicit */val<bool>) -4555833801439031369LL))
    {
        *var_14 = ((/* implicit */val<unsigned long long int>) (+(3272331210U)));
        *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((8658667933597586939LL), (((/* implicit */val<long long int>) 3272331210U))))) ? ((+(3272331182U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))), (min((max((var_3), (((/* implicit */val<unsigned long long int>) var_7)))), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)76)))))))));
        *var_16 = ((/* implicit */val<unsigned char>) var_0);
        *var_17 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)255)), (14425681412701702156ULL)));
    }

    *var_18 = ((/* implicit */val<unsigned int>) var_7);
    *var_19 = ((/* implicit */val<unsigned int>) max((*var_19), (max((((((/* implicit */val<bool>) -450165587)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)2279))) : (3272331203U))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) 3272331210U)) || (((/* implicit */val<bool>) var_9))))))))))));
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((val<unsigned short>) ((var_9) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))))))))))
    {
        if ((!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((val<bool>) var_6))), (min((((/* implicit */val<long long int>) var_4)), (var_2))))))))
        {
            *var_20 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_11) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5))))))))));
            *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) var_9)) : (var_10)));
            *var_22 = (!(((/* implicit */val<bool>) var_9)));
        }

        *var_23 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) (~((+(-1)))))) % (((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_8))))) | (((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (var_10) : (((/* implicit */val<long long int>) 536868864U))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37210;
long long int var_2 = 435234163285330643LL;
unsigned long long int var_3 = 11846272693191799126ULL;
unsigned short var_4 = (unsigned short)25341;
unsigned char var_5 = (unsigned char)109;
bool var_6 = (bool)0;
unsigned char var_7 = (unsigned char)102;
unsigned char var_8 = (unsigned char)1;
unsigned int var_9 = 2702937955U;
long long int var_10 = 3288024710819906373LL;
bool var_11 = (bool)0;
int zero = 0;
bool var_13 = (bool)1;
unsigned long long int var_14 = 3695421419629536393ULL;
bool var_15 = (bool)1;
unsigned char var_16 = (unsigned char)206;
unsigned int var_17 = 215910207U;
unsigned int var_18 = 1455272736U;
unsigned int var_19 = 4133973896U;
unsigned long long int var_20 = 6088809355314585097ULL;
int var_21 = 528779918;
bool var_22 = (bool)0;
signed char var_23 = (signed char)-9;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 3272331210ULL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned char)90;
    value_mismatch |= var_17 != 255U;
    value_mismatch |= var_18 != 102U;
    value_mismatch |= var_19 != 4133973896U;
    value_mismatch |= var_20 != 6088809355314585097ULL;
    value_mismatch |= var_21 != 528779918;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
