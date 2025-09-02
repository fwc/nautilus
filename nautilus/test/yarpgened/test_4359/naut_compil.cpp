/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4359
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
void test(val<signed char> var_1, val<unsigned short> var_2, val<unsigned int> var_5, val<unsigned short> var_6, val<unsigned long long int> var_11, val<unsigned char> var_12, val<int> zero, val<signed char*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) ((val<unsigned int>) max((var_6), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) 1795275365U))))))));
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_2))))), (var_5)))))))));
    *var_15 = ((/* implicit */val<unsigned char>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_12))))) ? (((((/* implicit */val<bool>) (val<unsigned char>)63)) ? (((/* implicit */val<unsigned long long int>) 2499691931U)) : (576460717943685120ULL))) : (var_11))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<int>) var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
unsigned short var_2 = (unsigned short)33512;
unsigned int var_5 = 2615896305U;
unsigned short var_6 = (unsigned short)59505;
unsigned long long int var_11 = 10295059574284668541ULL;
unsigned char var_12 = (unsigned char)206;
int zero = 0;
signed char var_13 = (signed char)-108;
unsigned char var_14 = (unsigned char)65;
unsigned char var_15 = (unsigned char)15;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)113;
    value_mismatch |= var_14 != (unsigned char)65;
    value_mismatch |= var_15 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
