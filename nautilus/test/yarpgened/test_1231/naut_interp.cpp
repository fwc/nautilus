/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1231
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1231
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
void test(val<signed char> var_0, val<signed char> var_1, val<bool> var_2, val<unsigned char> var_3, val<unsigned int> var_5, val<int> var_6, val<unsigned char> var_7, val<int> var_8, val<int> zero, val<unsigned char*> var_10, val<bool*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_10 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) var_6)), (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_7)))))));
    if (((/* implicit */val<bool>) min(((((val<bool>)0) ? (11803387603899718831ULL) : (11803387603899718831ULL))), (((/* implicit */val<unsigned long long int>) ((var_6) * (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))))))))
    {
        *var_11 += ((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) max(((~(((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) var_3))))), ((((!(((/* implicit */val<bool>) var_6)))) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<signed char>)0))))) : (((((/* implicit */val<bool>) var_8)) ? (11803387603899718831ULL) : (((/* implicit */val<unsigned long long int>) var_5))))))));
        *var_12 = ((/* implicit */val<signed char>) max((((/* implicit */val<int>) (val<bool>)1)), (((((/* implicit */val<int>) (val<bool>)1)) - (((/* implicit */val<int>) (val<bool>)1))))));
    }

    *var_13 = ((/* implicit */val<unsigned long long int>) min(((val<unsigned short>)15), (((/* implicit */val<unsigned short>) (val<bool>)0))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) ((val<bool>) 9454326472755138411ULL))), (var_7)))) : (max((((((/* implicit */val<int>) var_2)) + (((/* implicit */val<int>) var_2)))), (var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
signed char var_1 = (signed char)-15;
bool var_2 = (bool)0;
unsigned char var_3 = (unsigned char)189;
unsigned int var_5 = 3373033848U;
int var_6 = 1364318844;
unsigned char var_7 = (unsigned char)143;
int var_8 = 1198431083;
int zero = 0;
unsigned char var_10 = (unsigned char)154;
bool var_11 = (bool)1;
signed char var_12 = (signed char)-3;
unsigned long long int var_13 = 4255324230301645838ULL;
unsigned long long int var_14 = 2910226322239184117ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)124;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != 0ULL;
    value_mismatch |= var_14 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
