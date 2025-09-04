/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 17
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=17
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
void test(val<bool> var_1, val<unsigned int> var_3, val<signed char> var_4, val<bool> var_6, val<signed char> var_7, val<unsigned char> var_8, val<unsigned int> var_9, val<bool> var_12, val<int> zero, val<int*> var_13, val<int*> var_14, val<bool*> var_15, val<unsigned char*> var_16, val<unsigned char*> var_17, val<long long int*> var_18, val<long long int*> var_19) {
    *var_13 = ((/* implicit */val<int>) var_1);
    *var_14 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) var_6)), (var_8)))) ? (((var_6) ? (var_3) : (((/* implicit */val<unsigned int>) -2042858417)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -2042858417)) ? ((-(-2042858407))) : (min((2042858414), (((/* implicit */val<int>) (val<unsigned short>)9)))))))));
    if (((/* implicit */val<bool>) (+(var_9))))
    {
        *var_15 = ((/* implicit */val<bool>) var_3);
        *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) max((var_4), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 9223372036854775807LL)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_1))))) || (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (val<short>)-15)), (var_9))))))))))));
        *var_17 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_12))));
        *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) var_8))));
        *var_19 = ((/* implicit */val<long long int>) var_3);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_3 = 877976176U;
signed char var_4 = (signed char)32;
bool var_6 = (bool)0;
signed char var_7 = (signed char)90;
unsigned char var_8 = (unsigned char)87;
unsigned int var_9 = 1234214016U;
bool var_12 = (bool)1;
int zero = 0;
int var_13 = -167700252;
int var_14 = -162109712;
bool var_15 = (bool)1;
unsigned char var_16 = (unsigned char)57;
unsigned char var_17 = (unsigned char)2;
long long int var_18 = 2246784126861558838LL;
long long int var_19 = -6441252272587110436LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 90;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned char)32;
    value_mismatch |= var_17 != (unsigned char)254;
    value_mismatch |= var_18 != 2246784126861558838LL;
    value_mismatch |= var_19 != 877976176LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_6, var_7, var_8, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
