/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1897
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1897
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
void test(val<int> var_0, val<short> var_5, val<unsigned long long int> var_6, val<unsigned int> var_7, val<bool> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned int*> var_13, val<int*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned short>) (!(var_10)));
    if (((/* implicit */val<bool>) (-(var_0))))
    {
        *var_13 = var_7;
        *var_14 = 32767;
    }

    *var_15 += ((val<unsigned char>) (~(((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) % (var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2135738370;
short var_5 = (short)-18881;
unsigned long long int var_6 = 8629029069727829077ULL;
unsigned int var_7 = 1863638502U;
bool var_10 = (bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)3867;
unsigned int var_13 = 3104349887U;
int var_14 = 1853816052;
unsigned char var_15 = (unsigned char)189;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != 1863638502U;
    value_mismatch |= var_14 != 32767;
    value_mismatch |= var_15 != (unsigned char)39;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_7, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
