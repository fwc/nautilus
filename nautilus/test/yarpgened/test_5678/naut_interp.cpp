/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5678
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5678
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
void test(val<signed char> var_1, val<short> var_3, val<unsigned short> var_5, val<unsigned char> var_9, val<int> zero, val<signed char*> var_20, val<int*> var_21, val<unsigned char*> var_22, val<unsigned char*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) min((-2147483629), (min((((/* implicit */val<int>) ((val<bool>) 2724834821U))), ((~(((/* implicit */val<int>) var_5)))))))))));
    *var_21 += ((/* implicit */val<int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) || (((/* implicit */val<bool>) (val<signed char>)36))));
    *var_22 = ((/* implicit */val<unsigned char>) var_1);
    *var_23 = ((/* implicit */val<unsigned char>) ((val<int>) max((((/* implicit */val<short>) var_9)), (var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
short var_3 = (short)13403;
unsigned short var_5 = (unsigned short)19589;
unsigned char var_9 = (unsigned char)163;
int zero = 0;
signed char var_20 = (signed char)-104;
int var_21 = -2029903862;
unsigned char var_22 = (unsigned char)166;
unsigned char var_23 = (unsigned char)12;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-104;
    value_mismatch |= var_21 != -2029903861;
    value_mismatch |= var_22 != (unsigned char)229;
    value_mismatch |= var_23 != (unsigned char)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_9, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
