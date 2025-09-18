/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3795
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3795
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_2, val<bool> var_3, val<short> var_4, val<long long int> var_7, val<unsigned int> var_8, val<unsigned int> var_10, val<signed char> var_11, val<unsigned short> var_12, val<unsigned int> var_13, val<int> zero, val<long long int*> var_16, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) var_4);
    *var_17 = ((/* implicit */val<short>) max((*var_17), (((/* implicit */val<short>) (((!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_1))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (var_13)))) ? (((var_7) ^ (((/* implicit */val<long long int>) var_13)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))) : (((var_3) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_3)) ^ (((/* implicit */val<int>) var_3))))) : (((var_2) << (((((/* implicit */val<int>) var_1)) - (51))))))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_12)) ? (var_13) : (var_8))))) ? (var_7) : (((/* implicit */val<long long int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)96;
unsigned long long int var_2 = 14929065757252996036ULL;
bool var_3 = (bool)1;
short var_4 = (short)3551;
long long int var_7 = 84006300811289561LL;
unsigned int var_8 = 1003234822U;
unsigned int var_10 = 208164658U;
signed char var_11 = (signed char)-5;
unsigned short var_12 = (unsigned short)17133;
unsigned int var_13 = 4134206995U;
int zero = 0;
long long int var_16 = -5880476157052597360LL;
short var_17 = (short)8514;
unsigned long long int var_18 = 8257082147638086573ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 3551LL;
    value_mismatch |= var_17 != (short)8514;
    value_mismatch |= var_18 != 84006300811289561ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_7, var_8, var_10, var_11, var_12, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
}
