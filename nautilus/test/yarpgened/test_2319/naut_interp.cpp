/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2319
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2319
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
void test(val<signed char> var_1, val<bool> var_3, val<unsigned char> var_4, val<unsigned int> var_5, val<unsigned int> var_8, val<signed char> var_9, val<unsigned int> var_11, val<unsigned long long int> var_13, val<signed char> var_14, val<signed char> var_15, val<signed char> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19, val<bool*> var_20, val<unsigned short*> var_21, val<unsigned int*> var_22, val<bool*> var_23, val<int*> var_24) {
    *var_17 = ((/* implicit */val<unsigned long long int>) (val<bool>)1);
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((val<unsigned int>) 2198889037824ULL)), (((/* implicit */val<unsigned int>) ((val<signed char>) ((((/* implicit */val<bool>) 1729947725U)) ? (((/* implicit */val<int>) (val<unsigned char>)108)) : (0)))))));
    *var_19 = ((/* implicit */val<signed char>) var_13);
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<short>) var_13))) ? (max((((/* implicit */val<unsigned long long int>) var_9)), (((((/* implicit */val<bool>) var_4)) ? (var_13) : (((/* implicit */val<unsigned long long int>) var_8)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15)))));
    if (((/* implicit */val<bool>) var_11))
    {
        *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<signed char>)-82)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_16)))), (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) ((val<signed char>) var_15)))));
        *var_22 = ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) 14)), (((val<unsigned int>) var_11))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (max((var_8), (((/* implicit */val<unsigned int>) var_3)))));
    }
    else
    {
        *var_23 = ((/* implicit */val<bool>) -14);
        *var_24 = ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) (val<unsigned char>)98)) ? (((/* implicit */val<int>) (val<signed char>)0)) : (((/* implicit */val<int>) var_14)))) : (((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<unsigned short>)39993)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)148;
unsigned int var_5 = 104026511U;
unsigned int var_8 = 1873651310U;
signed char var_9 = (signed char)3;
unsigned int var_11 = 1133157756U;
unsigned long long int var_13 = 747417337036479809ULL;
signed char var_14 = (signed char)96;
signed char var_15 = (signed char)-19;
signed char var_16 = (signed char)-118;
int zero = 0;
unsigned long long int var_17 = 8452537308217703276ULL;
unsigned long long int var_18 = 9895731154021736594ULL;
signed char var_19 = (signed char)-86;
bool var_20 = (bool)0;
unsigned short var_21 = (unsigned short)37443;
unsigned int var_22 = 406967656U;
bool var_23 = (bool)0;
int var_24 = -372521669;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1ULL;
    value_mismatch |= var_18 != 108ULL;
    value_mismatch |= var_19 != (signed char)65;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned short)0;
    value_mismatch |= var_22 != 4294967269U;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != -372521669;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_8, var_9, var_11, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
