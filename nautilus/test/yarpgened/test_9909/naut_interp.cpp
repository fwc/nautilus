/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9909
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9909
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
void test(val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<unsigned char> var_14, val<unsigned short> var_18, val<unsigned char> var_19, val<int> zero, val<short*> var_20, val<unsigned short*> var_21, val<unsigned char*> var_22) {
    if (((((/* implicit */val<bool>) 1968808892U)) && (((/* implicit */val<bool>) (val<short>)16458))))
    {
        *var_20 = ((/* implicit */val<short>) max((((/* implicit */val<long long int>) var_9)), (9029884091250796050LL)));
        *var_21 *= ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_14)), (var_8)))) ? (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-27404))) / (var_7))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_19)))))))));
    }

    *var_22 = ((/* implicit */val<unsigned char>) max((*var_22), (((/* implicit */val<unsigned char>) var_18))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4127009738U;
unsigned int var_8 = 3526094905U;
unsigned char var_9 = (unsigned char)198;
unsigned char var_14 = (unsigned char)48;
unsigned short var_18 = (unsigned short)39799;
unsigned char var_19 = (unsigned char)127;
int zero = 0;
short var_20 = (short)-17186;
unsigned short var_21 = (unsigned short)33429;
unsigned char var_22 = (unsigned char)184;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)26130;
    value_mismatch |= var_21 != (unsigned short)33429;
    value_mismatch |= var_22 != (unsigned char)184;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_9, var_14, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
