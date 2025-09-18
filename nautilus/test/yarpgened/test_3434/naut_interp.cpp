/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3434
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3434
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
void test(val<unsigned int> var_2, val<unsigned char> var_4, val<unsigned short> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<unsigned short> var_11, val<unsigned short> var_16, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<bool>) max((min((((/* implicit */val<int>) ((((/* implicit */val<int>) var_16)) <= (((/* implicit */val<int>) var_11))))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<unsigned char>)242)) : (((/* implicit */val<int>) var_4)))))), (((/* implicit */val<int>) var_4))));
    *var_20 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) min(((val<unsigned short>)48992), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<unsigned short>)6888)) && (((/* implicit */val<bool>) 12ULL))))))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_8)) ? (min((((val<unsigned long long int>) (val<unsigned char>)255)), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_2))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((val<unsigned int>) 0U)) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 317576427U;
unsigned char var_4 = (unsigned char)183;
unsigned short var_7 = (unsigned short)35172;
unsigned int var_8 = 2744740455U;
unsigned char var_9 = (unsigned char)108;
unsigned short var_11 = (unsigned short)40319;
unsigned short var_16 = (unsigned short)61490;
int zero = 0;
bool var_19 = (bool)0;
unsigned short var_20 = (unsigned short)29410;
short var_21 = (short)-22939;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)65534;
    value_mismatch |= var_21 != (short)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_9, var_11, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
}
