/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1455
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1455
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
void test(val<unsigned long long int> var_0, val<int> var_2, val<bool> var_3, val<int> var_4, val<int> var_5, val<unsigned int> var_6, val<unsigned long long int> var_7, val<short> var_8, val<unsigned long long int> var_9, val<unsigned short> var_11, val<int> var_13, val<int> zero, val<int*> var_14, val<unsigned long long int*> var_15, val<int*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((/* implicit */val<int>) var_11);
    *var_15 = ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned char>) var_3)), (((val<unsigned char>) var_8))))) ? (max((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)1))) ^ (var_0))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) var_4)) : (var_7))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9)))))));
    *var_16 = ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) > (((var_3) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-80))))))));
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<unsigned int>) var_13)) ^ (var_6)))))) > (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (var_2) : (var_5)))), (((val<unsigned long long int>) var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13342762189562878423ULL;
int var_2 = -1324443275;
bool var_3 = (bool)0;
int var_4 = -324411043;
int var_5 = -1503054296;
unsigned int var_6 = 2829278956U;
unsigned long long int var_7 = 5637178048674184467ULL;
short var_8 = (short)-29246;
unsigned long long int var_9 = 12216252013001874493ULL;
unsigned short var_11 = (unsigned short)44423;
int var_13 = -1467375305;
int zero = 0;
int var_14 = -804650372;
unsigned long long int var_15 = 14197396498213711216ULL;
int var_16 = 1602353541;
unsigned short var_17 = (unsigned short)28758;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 44423;
    value_mismatch |= var_15 != 18446744073385140573ULL;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
