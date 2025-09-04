/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6415
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6415
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
void test(val<bool> var_15, val<short> var_18, val<unsigned int> var_19, val<int> zero, val<unsigned int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) (((!((!(((/* implicit */val<bool>) 18446744073709551615ULL)))))) && ((((!(((/* implicit */val<bool>) 18ULL)))) || (((var_15) && (((/* implicit */val<bool>) var_18))))))));
    *var_21 = ((/* implicit */val<int>) max((*var_21), (((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned char>)133))))) ? (min((((((/* implicit */val<bool>) (val<unsigned char>)123)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)123))) : (var_19))), (((/* implicit */val<unsigned int>) max(((val<unsigned short>)36302), (((/* implicit */val<unsigned short>) (val<unsigned char>)127))))))) : (((/* implicit */val<unsigned int>) (-(((var_15) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned char>)133))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_15 = (bool)1;
short var_18 = (short)-18227;
unsigned int var_19 = 3952819948U;
int zero = 0;
unsigned int var_20 = 1498934940U;
int var_21 = 521178520;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1U;
    value_mismatch |= var_21 != 521178520;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, var_18, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
