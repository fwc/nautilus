/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2723
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2723
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
void test(val<unsigned long long int> var_1, val<signed char> var_2, val<bool> var_8, val<short> var_11, val<short> var_13, val<unsigned int> var_16, val<short> var_17, val<unsigned short> var_18, val<int> zero, val<unsigned short*> var_20, val<unsigned char*> var_21, val<unsigned char*> var_22, val<unsigned long long int*> var_23, val<unsigned long long int*> var_24) {
    if (((/* implicit */val<bool>) var_18))
    {
        *var_20 = ((/* implicit */val<unsigned short>) ((val<bool>) min((((/* implicit */val<unsigned long long int>) ((-1925225219054428884LL) / (-9223372036854775795LL)))), (((var_1) * (((/* implicit */val<unsigned long long int>) (-2147483647 - 1))))))));
        *var_21 |= ((/* implicit */val<unsigned char>) var_11);
        *var_22 = ((/* implicit */val<unsigned char>) (~(max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_16)))), (1323921056888176625ULL)))));
        *var_23 = ((/* implicit */val<unsigned long long int>) var_11);
    }

    *var_24 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<int>) var_13)) ^ (((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) var_17))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8615731045564793919ULL;
signed char var_2 = (signed char)-42;
bool var_8 = (bool)1;
short var_11 = (short)12701;
short var_13 = (short)25903;
unsigned int var_16 = 2365378029U;
short var_17 = (short)1189;
unsigned short var_18 = (unsigned short)21793;
int zero = 0;
unsigned short var_20 = (unsigned short)44456;
unsigned char var_21 = (unsigned char)146;
unsigned char var_22 = (unsigned char)34;
unsigned long long int var_23 = 4872278809204028323ULL;
unsigned long long int var_24 = 10581025656134474680ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != (unsigned char)159;
    value_mismatch |= var_22 != (unsigned char)14;
    value_mismatch |= var_23 != 12701ULL;
    value_mismatch |= var_24 != 25902ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_11, var_13, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
