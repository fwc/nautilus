/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2269
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2269
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<bool> var_2, val<int> var_3, val<unsigned char> var_4, val<unsigned int> var_5, val<bool> var_6, val<signed char> var_8, val<signed char> var_9, val<bool> var_10, val<unsigned short> var_11, val<long long int> var_12, val<int> zero, val<unsigned int*> var_13, val<unsigned int*> var_14, val<signed char*> var_15, val<unsigned int*> var_16, val<int*> var_17, val<long long int*> var_18) {
    if (var_2)
    {
        *var_13 += ((/* implicit */val<unsigned int>) var_4);
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_11), (((/* implicit */val<unsigned short>) (val<unsigned char>)81))))) ? (((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) var_9)))) : ((-(((/* implicit */val<int>) (val<unsigned char>)255))))))) ? (((((/* implicit */val<bool>) ((var_0) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))) : (min((-2LL), (((/* implicit */val<long long int>) var_10)))))) : (((/* implicit */val<long long int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) - (247595109U))) / (((/* implicit */val<unsigned int>) var_3))))))))
        {
            *var_14 = ((/* implicit */val<unsigned int>) var_10);
            *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) ((((/* implicit */val<int>) var_6)) & (((/* implicit */val<int>) var_2)))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_5)))) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((-7LL) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)5))))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))));
            *var_16 = ((/* implicit */val<unsigned int>) var_3);
        }

    }

    *var_17 = ((/* implicit */val<int>) min((*var_17), (((max((((/* implicit */val<int>) var_2)), (((((/* implicit */val<int>) var_11)) / (((/* implicit */val<int>) var_8)))))) / (max((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<short>)4777)))), ((+(((/* implicit */val<int>) var_4))))))))));
    *var_18 ^= (~(((((/* implicit */val<bool>) var_8)) ? (-1LL) : (((((/* implicit */val<bool>) 8126003893967388684LL)) ? (((/* implicit */val<long long int>) var_1)) : (2255809357202248925LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9635248844727391752ULL;
int var_1 = -526684175;
bool var_2 = (bool)0;
int var_3 = -1843333794;
unsigned char var_4 = (unsigned char)21;
unsigned int var_5 = 3228523207U;
bool var_6 = (bool)0;
signed char var_8 = (signed char)-97;
signed char var_9 = (signed char)-20;
bool var_10 = (bool)1;
unsigned short var_11 = (unsigned short)35351;
long long int var_12 = -7602260058921900377LL;
int zero = 0;
unsigned int var_13 = 1714793547U;
unsigned int var_14 = 1185002945U;
signed char var_15 = (signed char)-102;
unsigned int var_16 = 1285735256U;
int var_17 = 830337111;
long long int var_18 = -4899284758990786916LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1714793547U;
    value_mismatch |= var_14 != 1185002945U;
    value_mismatch |= var_15 != (signed char)-102;
    value_mismatch |= var_16 != 1285735256U;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != -4899284758990786916LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
