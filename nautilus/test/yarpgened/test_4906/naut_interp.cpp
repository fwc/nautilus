/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4906
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4906
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
void test(val<unsigned short> var_3, val<int> var_5, val<unsigned long long int> var_6, val<int> var_7, val<int> zero, val<unsigned int*> var_10, val<bool*> var_11) {
    *var_10 |= ((/* implicit */val<unsigned int>) var_3);
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) -2055452502)) || (((/* implicit */val<bool>) -1383461594))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) ((-2099927834) == (var_7)))) > (((/* implicit */val<int>) ((val<unsigned char>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47551;
int var_5 = -816766324;
unsigned long long int var_6 = 16717656777404070682ULL;
int var_7 = -752048686;
int zero = 0;
unsigned int var_10 = 841670774U;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 841677311U;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, zero, &var_10, &var_11);
  checksum();
}
