/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2630
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2630
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
void test(val<bool> var_0, val<unsigned short> var_1, val<signed char> var_2, val<unsigned char> var_4, val<bool> var_5, val<signed char> var_11, val<signed char> var_12, val<int> zero, val<long long int*> var_18, val<signed char*> var_19, val<bool*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22, val<bool*> var_23, val<bool*> var_24) {
    *var_18 = ((/* implicit */val<long long int>) var_4);
    if (((/* implicit */val<bool>) var_2))
    {
        *var_19 = ((/* implicit */val<signed char>) var_4);
        *var_20 = var_5;
        *var_21 = ((/* implicit */val<unsigned short>) min((*var_21), (((/* implicit */val<unsigned short>) var_11))));
        *var_22 = ((/* implicit */val<unsigned short>) min((*var_22), (((/* implicit */val<unsigned short>) var_12))));
    }

    *var_23 &= var_0;
    *var_24 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)62004;
signed char var_2 = (signed char)83;
unsigned char var_4 = (unsigned char)51;
bool var_5 = (bool)0;
signed char var_11 = (signed char)16;
signed char var_12 = (signed char)3;
int zero = 0;
long long int var_18 = 1851065822925346013LL;
signed char var_19 = (signed char)-38;
bool var_20 = (bool)0;
unsigned short var_21 = (unsigned short)37428;
unsigned short var_22 = (unsigned short)35607;
bool var_23 = (bool)0;
bool var_24 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 51LL;
    value_mismatch |= var_19 != (signed char)51;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (unsigned short)16;
    value_mismatch |= var_22 != (unsigned short)3;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_11, var_12, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
