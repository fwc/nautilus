/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3880
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3880
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
void test(val<short> var_0, val<bool> var_1, val<bool> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<unsigned short> var_7, val<unsigned long long int> var_9, val<int> var_10, val<unsigned short> var_11, val<int> var_12, val<unsigned int> var_13, val<int> zero, val<short*> var_14, val<long long int*> var_15, val<bool*> var_16, val<bool*> var_17, val<unsigned short*> var_18, val<unsigned char*> var_19) {
    *var_14 = ((/* implicit */val<short>) max((max((((/* implicit */val<unsigned int>) ((var_1) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_0))))), (((val<unsigned int>) (val<bool>)0)))), (((/* implicit */val<unsigned int>) max(((-(((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_2)) > (((/* implicit */val<int>) var_0))))))))));
    *var_15 = ((/* implicit */val<long long int>) var_9);
    *var_16 = ((/* implicit */val<bool>) ((var_2) ? (((val<unsigned int>) var_1)) : (((var_2) ? (max((((/* implicit */val<unsigned int>) (val<bool>)1)), (2537242702U))) : (var_13)))));
    if (((/* implicit */val<bool>) var_4))
    {
        *var_17 = ((/* implicit */val<bool>) ((val<long long int>) min((((((/* implicit */val<bool>) var_13)) ? (1157937350) : (((/* implicit */val<int>) var_1)))), ((((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)-110)) : (((/* implicit */val<int>) (val<short>)20156)))))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<signed char>)-110)) : (((/* implicit */val<int>) (val<short>)-20164))))) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1046777644587424691ULL)) ? (-6289222527271020781LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-87)))))))) : ((+(var_3))))))
        {
            *var_18 = var_7;
            *var_19 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_11))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14803;
bool var_1 = (bool)1;
bool var_2 = (bool)1;
unsigned long long int var_3 = 16115924931494588174ULL;
unsigned int var_4 = 106738215U;
unsigned short var_7 = (unsigned short)52641;
unsigned long long int var_9 = 4578509235570664908ULL;
int var_10 = -275129999;
unsigned short var_11 = (unsigned short)4806;
int var_12 = -221148819;
unsigned int var_13 = 1319250706U;
int zero = 0;
short var_14 = (short)-9175;
long long int var_15 = -5811427182231739125LL;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
unsigned short var_18 = (unsigned short)43634;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != 4578509235570664908LL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned short)52641;
    value_mismatch |= var_19 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
