/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2105
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2105
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
void test(val<unsigned int> var_1, val<bool> var_5, val<long long int> var_10, val<unsigned char> var_13, val<bool> var_15, val<unsigned int> var_16, val<unsigned short> var_17, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19, val<int*> var_20, val<unsigned long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) var_15);
    *var_19 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_17)) ? (((((/* implicit */val<bool>) var_10)) ? (var_1) : (var_16))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)116))) > (-7576156993437402041LL))))))) ^ (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (max((((/* implicit */val<unsigned int>) var_15)), (var_16)))))));
    *var_20 = ((/* implicit */val<int>) ((val<unsigned char>) var_13));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4172358613U;
bool var_5 = (bool)0;
long long int var_10 = -9143438464075981802LL;
unsigned char var_13 = (unsigned char)38;
bool var_15 = (bool)1;
unsigned int var_16 = 2737495003U;
unsigned short var_17 = (unsigned short)29282;
int zero = 0;
unsigned short var_18 = (unsigned short)12298;
unsigned short var_19 = (unsigned short)43829;
int var_20 = -2146844507;
unsigned long long int var_21 = 51784375189959812ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != (unsigned short)63502;
    value_mismatch |= var_20 != 38;
    value_mismatch |= var_21 != 4172358613ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_10, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
