/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6196
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6196
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
void test(val<unsigned short> var_3, val<unsigned char> var_7, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<unsigned short>) var_7);
    if (((-1037828700164619818LL) > (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<short>)-21276)))))))
    {
        *var_14 = ((/* implicit */val<bool>) var_3);
        *var_15 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) (val<bool>)1))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62841;
unsigned char var_7 = (unsigned char)201;
int zero = 0;
unsigned short var_13 = (unsigned short)35512;
bool var_14 = (bool)1;
unsigned char var_15 = (unsigned char)184;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)201;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)184;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, zero, &var_13, &var_14, &var_15);
  checksum();
}
