/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2756
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2756
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
void test(val<signed char> var_2, val<unsigned long long int> var_3, val<bool> var_5, val<bool> var_6, val<unsigned short> var_7, val<signed char> var_8, val<int> zero, val<signed char*> var_10, val<unsigned long long int*> var_11, val<int*> var_12, val<signed char*> var_13) {
    *var_10 ^= ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) ((max((var_6), (var_6))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_6))))) : (((val<long long int>) var_2))))), (var_3)));
    *var_11 = ((/* implicit */val<unsigned long long int>) max((*var_11), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) ((val<signed char>) max((((/* implicit */val<unsigned long long int>) (val<signed char>)79)), (var_3))))), (((((/* implicit */val<bool>) ((val<unsigned long long int>) var_5))) ? (((/* implicit */val<int>) max((var_2), (var_8)))) : (((/* implicit */val<int>) ((val<signed char>) var_8))))))))));
    *var_12 |= (-(((/* implicit */val<int>) min((((/* implicit */val<signed char>) var_5)), (var_2)))));
    *var_13 = ((/* implicit */val<signed char>) (-((~(((var_6) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
unsigned long long int var_3 = 8953699837314043357ULL;
bool var_5 = (bool)0;
bool var_6 = (bool)0;
unsigned short var_7 = (unsigned short)25634;
signed char var_8 = (signed char)-49;
int zero = 0;
signed char var_10 = (signed char)41;
unsigned long long int var_11 = 11114568960721462ULL;
int var_12 = -790583153;
signed char var_13 = (signed char)-29;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-12;
    value_mismatch |= var_11 != 18446744073709551567ULL;
    value_mismatch |= var_12 != -790583153;
    value_mismatch |= var_13 != (signed char)35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
