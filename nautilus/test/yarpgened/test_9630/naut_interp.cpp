/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9630
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9630
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
void test(val<signed char> var_1, val<bool> var_2, val<unsigned long long int> var_7, val<bool> var_11, val<unsigned long long int> var_12, val<unsigned int> var_14, val<int> zero, val<bool*> var_15, val<unsigned int*> var_16, val<short*> var_17, val<int*> var_18, val<short*> var_19) {
    *var_15 &= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((val<unsigned long long int>) var_11)) : (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0))) > (var_12)))), ((~(var_7)))))));
    *var_16 &= ((/* implicit */val<unsigned int>) var_11);
    *var_17 &= ((/* implicit */val<short>) max(((val<unsigned char>)213), (((/* implicit */val<unsigned char>) var_2))));
    *var_18 |= ((/* implicit */val<int>) ((val<unsigned long long int>) var_12));
    *var_19 += ((/* implicit */val<short>) ((val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min(((val<bool>)1), ((val<bool>)1))))) ^ (((((/* implicit */val<bool>) 8420478296458393489ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
bool var_2 = (bool)0;
unsigned long long int var_7 = 15136817704708247530ULL;
bool var_11 = (bool)0;
unsigned long long int var_12 = 1849223271742768475ULL;
unsigned int var_14 = 176146737U;
int zero = 0;
bool var_15 = (bool)0;
unsigned int var_16 = 694797109U;
short var_17 = (short)4295;
int var_18 = 707865934;
short var_19 = (short)-3288;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != (short)197;
    value_mismatch |= var_18 != -1094898337;
    value_mismatch |= var_19 != (short)-3288;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
