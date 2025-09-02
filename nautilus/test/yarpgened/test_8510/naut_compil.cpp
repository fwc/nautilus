/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8510
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8510
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
void test(val<int> var_3, val<signed char> var_6, val<unsigned char> var_8, val<unsigned char> var_9, val<int> var_11, val<long long int> var_12, val<int> var_13, val<int> zero, val<unsigned int*> var_18, val<unsigned char*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((-445201143) + (2147483647))) << (((((var_13) + (1411946872))) - (15)))));
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((val<signed char>) (!(((/* implicit */val<bool>) -1249449731877366611LL)))))))))
    {
        *var_19 = ((/* implicit */val<unsigned char>) ((((var_12) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-10)))))))) ? (var_11) : (((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_9)) : (var_3))) << (((7553766639335101118ULL) - (7553766639335101098ULL)))))));
        *var_20 = ((/* implicit */val<unsigned long long int>) var_6);
    }

    *var_21 ^= ((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) ((10892977434374450497ULL) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)173))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1713047050;
signed char var_6 = (signed char)-5;
unsigned char var_8 = (unsigned char)14;
unsigned char var_9 = (unsigned char)67;
int var_11 = 570399269;
long long int var_12 = 141241398049900895LL;
int var_13 = -1411946857;
int zero = 0;
unsigned int var_18 = 2343822055U;
unsigned char var_19 = (unsigned char)25;
unsigned long long int var_20 = 4522531139630070546ULL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1702282504U;
    value_mismatch |= var_19 != (unsigned char)25;
    value_mismatch |= var_20 != 4522531139630070546ULL;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, var_9, var_11, var_12, var_13, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
