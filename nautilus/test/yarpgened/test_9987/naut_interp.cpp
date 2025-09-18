/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9987
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9987
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
void test(val<signed char> var_1, val<bool> var_2, val<unsigned char> var_3, val<unsigned int> var_7, val<int> var_8, val<unsigned short> var_9, val<unsigned long long int> var_10, val<signed char> var_11, val<int> zero, val<unsigned long long int*> var_12, val<long long int*> var_13, val<bool*> var_14, val<unsigned char*> var_15) {
    *var_12 -= ((/* implicit */val<unsigned long long int>) (((~(((/* implicit */val<int>) var_2)))) + ((~((~(var_8)))))));
    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_11))))) + (((((/* implicit */val<bool>) var_9)) ? (var_7) : (((/* implicit */val<unsigned int>) var_8))))))), (((var_10) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) var_10)))))))))
    {
        *var_13 = ((/* implicit */val<long long int>) var_9);
        *var_14 = (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) 144389492U)), (8920045656958859965ULL)))));
    }

    *var_15 = ((/* implicit */val<unsigned char>) ((max((((val<unsigned int>) var_1)), (max((4150577830U), (144389492U))))) * (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)55;
bool var_2 = (bool)0;
unsigned char var_3 = (unsigned char)7;
unsigned int var_7 = 2653386771U;
int var_8 = -1689692603;
unsigned short var_9 = (unsigned short)30921;
unsigned long long int var_10 = 5030574427167014684ULL;
signed char var_11 = (signed char)-48;
int zero = 0;
unsigned long long int var_12 = 12370991279475950ULL;
long long int var_13 = -6485954013190892381LL;
bool var_14 = (bool)1;
unsigned char var_15 = (unsigned char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 12370992969168554ULL;
    value_mismatch |= var_13 != 30921LL;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (unsigned char)208;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
