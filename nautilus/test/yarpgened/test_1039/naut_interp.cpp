/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1039
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1039
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
void test(val<unsigned short> var_0, val<signed char> var_1, val<int> var_3, val<bool> var_4, val<unsigned long long int> var_11, val<signed char> var_14, val<long long int> var_16, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21, val<signed char*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) 4212077618U));
    *var_21 = ((/* implicit */val<long long int>) ((max((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (var_11))), (((/* implicit */val<unsigned long long int>) var_4)))) - (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) var_1)), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) + (var_16))))))));
    *var_22 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) var_3)) > (((9150621985622032806LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)16383)))))))), (365504000U)));
    *var_23 = ((/* implicit */val<unsigned int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38496;
signed char var_1 = (signed char)-8;
int var_3 = 931159450;
bool var_4 = (bool)1;
unsigned long long int var_11 = 9659137782412050484ULL;
signed char var_14 = (signed char)-113;
long long int var_16 = -4530116600420984620LL;
int zero = 0;
unsigned long long int var_20 = 3696804513231371419ULL;
long long int var_21 = 2685582264755753799LL;
signed char var_22 = (signed char)-98;
unsigned int var_23 = 748962779U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 13362ULL;
    value_mismatch |= var_21 != 4530116600421023115LL;
    value_mismatch |= var_22 != (signed char)0;
    value_mismatch |= var_23 != 416192724U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_11, var_14, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
