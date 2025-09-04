/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9908
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9908
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<unsigned char> var_4, val<signed char> var_7, val<unsigned long long int> var_8, val<unsigned char> var_9, val<unsigned char> var_10, val<signed char> var_11, val<signed char> var_12, val<unsigned char> var_13, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<signed char*> var_16, val<signed char*> var_17, val<unsigned char*> var_18, val<signed char*> var_19) {
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_12)) * (((/* implicit */val<int>) var_13))))) : (((val<unsigned long long int>) (val<unsigned char>)255))));
    *var_15 = ((/* implicit */val<signed char>) max(((-(var_1))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_4)))))));
    if (((/* implicit */val<bool>) max(((~(((/* implicit */val<int>) (val<unsigned char>)125)))), (((/* implicit */val<int>) (((~(4398046510976ULL))) < (max((0ULL), (((/* implicit */val<unsigned long long int>) var_9))))))))))
    {
        *var_16 = ((/* implicit */val<signed char>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (max((((/* implicit */val<unsigned long long int>) var_9)), (18446744073709551608ULL))))));
        *var_17 = ((/* implicit */val<signed char>) max((*var_17), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 2354783133874487853ULL)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<unsigned char>)18))))), (min((274877906944ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)53))))))) ? (((((/* implicit */val<int>) (val<unsigned char>)112)) >> (((((/* implicit */val<int>) (val<unsigned char>)130)) - (114))))) : ((-((~(((/* implicit */val<int>) var_4)))))))))));
    }

    *var_18 = ((val<unsigned char>) var_3);
    *var_19 = ((/* implicit */val<signed char>) max((var_8), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) (val<signed char>)121)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13657341428446249114ULL;
unsigned long long int var_3 = 3516635762318530110ULL;
unsigned char var_4 = (unsigned char)15;
signed char var_7 = (signed char)-70;
unsigned long long int var_8 = 13792202435099042949ULL;
unsigned char var_9 = (unsigned char)31;
unsigned char var_10 = (unsigned char)37;
signed char var_11 = (signed char)98;
signed char var_12 = (signed char)54;
unsigned char var_13 = (unsigned char)130;
int zero = 0;
signed char var_14 = (signed char)9;
signed char var_15 = (signed char)-35;
signed char var_16 = (signed char)-121;
signed char var_17 = (signed char)-102;
unsigned char var_18 = (unsigned char)193;
signed char var_19 = (signed char)55;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)108;
    value_mismatch |= var_15 != (signed char)-16;
    value_mismatch |= var_16 != (signed char)-121;
    value_mismatch |= var_17 != (signed char)-102;
    value_mismatch |= var_18 != (unsigned char)62;
    value_mismatch |= var_19 != (signed char)-123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
