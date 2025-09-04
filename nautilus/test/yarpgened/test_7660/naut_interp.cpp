/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7660
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7660
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
void test(val<long long int> var_4, val<short> var_13, val<int> zero, val<bool*> var_19, val<int*> var_20, val<int*> var_21, val<unsigned char*> var_22, val<unsigned short*> var_23) {
    if (((/* implicit */val<bool>) (val<short>)24205))
    {
        *var_19 = ((/* implicit */val<bool>) var_4);
        *var_20 = -1090684545;
        *var_21 += ((/* implicit */val<int>) (val<unsigned char>)198);
        *var_22 = ((/* implicit */val<unsigned char>) min((*var_22), (((/* implicit */val<unsigned char>) var_4))));
    }

    *var_23 = ((/* implicit */val<unsigned short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4643804480253965508LL;
short var_13 = (short)-21616;
int zero = 0;
bool var_19 = (bool)1;
int var_20 = -1350228883;
int var_21 = 1718571461;
unsigned char var_22 = (unsigned char)234;
unsigned short var_23 = (unsigned short)6775;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != -1090684545;
    value_mismatch |= var_21 != 1718571659;
    value_mismatch |= var_22 != (unsigned char)196;
    value_mismatch |= var_23 != (unsigned short)43920;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
