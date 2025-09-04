/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4023
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4023
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
void test(val<unsigned short> var_4, val<unsigned short> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    if (((/* implicit */val<bool>) (val<unsigned short>)46089))
    {
        *var_16 &= var_10;
        *var_17 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) var_7));
    }

    *var_18 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<unsigned short>)65535)) >> (((18446744073709551615ULL) - (18446744073709551587ULL)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)62027;
unsigned short var_7 = (unsigned short)9098;
unsigned long long int var_10 = 9918120345420857666ULL;
int zero = 0;
unsigned long long int var_16 = 8977396997280196974ULL;
unsigned short var_17 = (unsigned short)6748;
unsigned short var_18 = (unsigned short)8305;
unsigned long long int var_19 = 1784523515226855713ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 613647339697078594ULL;
    value_mismatch |= var_17 != (unsigned short)9098;
    value_mismatch |= var_18 != (unsigned short)8305;
    value_mismatch |= var_19 != 62027ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_10, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
