/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 829
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=829
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
void test(val<unsigned char> var_1, val<unsigned short> var_4, val<long long int> var_9, val<long long int> var_10, val<unsigned int> var_11, val<short> var_13, val<signed char> var_14, val<int> zero, val<unsigned int*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_4))));
    *var_18 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned char>)124)), (((var_10) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)-32284)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_1))))) : (max((var_9), (((/* implicit */val<long long int>) (val<short>)-32284)))))) : (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_4))))), (var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
unsigned short var_4 = (unsigned short)32980;
long long int var_9 = -8062950775841246497LL;
long long int var_10 = 2427561695984076781LL;
unsigned int var_11 = 2915143515U;
short var_13 = (short)32074;
signed char var_14 = (signed char)-52;
int zero = 0;
unsigned int var_17 = 3420944683U;
unsigned short var_18 = (unsigned short)45917;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != (unsigned short)65375;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, var_10, var_11, var_13, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
