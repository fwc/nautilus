/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6028
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6028
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
void test(val<unsigned char> var_2, val<short> var_4, val<long long int> var_8, val<int> var_9, val<unsigned long long int> var_10, val<long long int> var_12, val<bool> var_13, val<signed char> var_14, val<int> zero, val<int*> var_18, val<short*> var_19, val<long long int*> var_20, val<short*> var_21) {
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (4294967295U) : (((/* implicit */val<unsigned int>) min(((-2147483647 - 1)), (2147483647))))))) < (255LL)));
    *var_19 = ((/* implicit */val<short>) min(((((!(((/* implicit */val<bool>) 4977074178566920373ULL)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-25197))) : (var_10))), (((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<int>) var_14)) % (((/* implicit */val<int>) var_13)))))))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(var_10)))) ? (((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (4977074178566920373ULL))) >> (((var_9) + (1715612513))))) : (((/* implicit */val<unsigned long long int>) (((+(((/* implicit */val<int>) var_2)))) * (((/* implicit */val<int>) var_4)))))));
    *var_21 = ((/* implicit */val<short>) ((val<int>) ((((/* implicit */val<bool>) var_12)) ? ((-(5370905515213088822ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)208;
short var_4 = (short)-17388;
long long int var_8 = 541713588205199021LL;
int var_9 = -1715612469;
unsigned long long int var_10 = 6608484349805288802ULL;
long long int var_12 = -2758583731972208257LL;
bool var_13 = (bool)1;
signed char var_14 = (signed char)-27;
int zero = 0;
int var_18 = -1083086517;
short var_19 = (short)18768;
long long int var_20 = 8221589426516283026LL;
short var_21 = (short)-8983;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != (short)-26678;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_8, var_9, var_10, var_12, var_13, var_14, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
