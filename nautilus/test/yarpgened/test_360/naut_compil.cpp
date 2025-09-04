/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 360
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=360
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
void test(val<unsigned int> var_1, val<unsigned int> var_11, val<unsigned char> var_14, val<int> zero, val<unsigned short*> var_16, val<unsigned char*> var_17, val<unsigned short*> var_18, val<unsigned char*> var_19) {
    if (((/* implicit */val<bool>) (-(var_1))))
    {
        *var_16 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_14))));
        *var_17 = ((/* implicit */val<unsigned char>) var_11);
        *var_18 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) (val<unsigned char>)74))));
    }

    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2008606334U;
unsigned int var_11 = 1972800909U;
unsigned char var_14 = (unsigned char)72;
int zero = 0;
unsigned short var_16 = (unsigned short)9184;
unsigned char var_17 = (unsigned char)193;
unsigned short var_18 = (unsigned short)40518;
unsigned char var_19 = (unsigned char)85;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)65463;
    value_mismatch |= var_17 != (unsigned char)141;
    value_mismatch |= var_18 != (unsigned short)74;
    value_mismatch |= var_19 != (unsigned char)85;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
