/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2505
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2505
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
void test(val<long long int> var_0, val<int> var_2, val<unsigned char> var_5, val<bool> var_10, val<bool> var_11, val<long long int> var_12, val<int> var_13, val<int> zero, val<bool*> var_16, val<bool*> var_17, val<unsigned char*> var_18, val<unsigned short*> var_19) {
    *var_16 ^= ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_5))))) ? ((+(var_12))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_11)), ((val<unsigned char>)252)))))))));
    *var_17 = ((/* implicit */val<bool>) (~(var_13)));
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned short>)12343)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned short>)11141))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (var_2) : (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 16841213970500044484ULL))))) : (((/* implicit */val<int>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4194657942404541081LL;
int var_2 = 817854548;
unsigned char var_5 = (unsigned char)159;
bool var_10 = (bool)0;
bool var_11 = (bool)1;
long long int var_12 = -3059133057427304133LL;
int var_13 = 1551488843;
int zero = 0;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
unsigned char var_18 = (unsigned char)90;
unsigned short var_19 = (unsigned short)40825;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != (unsigned short)30804;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_10, var_11, var_12, var_13, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
