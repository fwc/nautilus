/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 373
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=373
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
void test(val<unsigned char> var_0, val<signed char> var_3, val<short> var_9, val<unsigned int> var_11, val<int> zero, val<signed char*> var_12, val<unsigned short*> var_13, val<unsigned long long int*> var_14, val<long long int*> var_15) {
    if (((/* implicit */val<bool>) (-((-((+(((/* implicit */val<int>) var_0)))))))))
    {
        *var_12 = ((/* implicit */val<signed char>) ((val<unsigned short>) 711144921U));
        *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned short>)0)))))))) < (((/* implicit */val<int>) ((val<bool>) -976714877848085186LL)))));
        *var_14 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) (~(((/* implicit */val<int>) ((val<unsigned short>) var_11))))));
    }

    *var_15 = ((/* implicit */val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
signed char var_3 = (signed char)-24;
short var_9 = (short)-8964;
unsigned int var_11 = 2722406699U;
int zero = 0;
signed char var_12 = (signed char)-96;
unsigned short var_13 = (unsigned short)25314;
unsigned long long int var_14 = 17843261502895932711ULL;
long long int var_15 = 4600868735239085650LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-39;
    value_mismatch |= var_13 != (unsigned short)1;
    value_mismatch |= var_14 != 24276ULL;
    value_mismatch |= var_15 != -24LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
