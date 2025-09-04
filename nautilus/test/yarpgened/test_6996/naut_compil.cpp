/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6996
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6996
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<int> var_5, val<unsigned short> var_6, val<unsigned long long int> var_9, val<int> zero, val<signed char*> var_11, val<unsigned short*> var_12, val<int*> var_13, val<signed char*> var_14, val<bool*> var_15) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) | ((~(4428266555757289069ULL))))))
    {
        *var_11 = ((val<signed char>) -1304592457);
        *var_12 = ((/* implicit */val<unsigned short>) var_5);
    }

    *var_13 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)(-127 - 1)))));
    *var_14 |= ((/* implicit */val<signed char>) (((!(((val<bool>) -1115479586)))) || (((((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) 17136529301866470183ULL)))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (17136529301866470183ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))))));
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) ((val<unsigned short>) ((val<signed char>) min((((/* implicit */val<unsigned long long int>) -407119074)), (var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5984220275363645568ULL;
unsigned short var_1 = (unsigned short)34562;
int var_5 = 200400554;
unsigned short var_6 = (unsigned short)63294;
unsigned long long int var_9 = 2464318829425805208ULL;
int zero = 0;
signed char var_11 = (signed char)105;
unsigned short var_12 = (unsigned short)15386;
int var_13 = 1259033640;
signed char var_14 = (signed char)64;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-73;
    value_mismatch |= var_12 != (unsigned short)57002;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (signed char)65;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
