/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8525
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8525
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
void test(val<bool> var_1, val<unsigned long long int> var_4, val<long long int> var_9, val<unsigned char> var_12, val<unsigned short> var_14, val<int> zero, val<long long int*> var_18, val<unsigned short*> var_19, val<unsigned int*> var_20, val<signed char*> var_21) {
    *var_18 = var_9;
    if (((/* implicit */val<bool>) var_12))
    {
        *var_19 = ((/* implicit */val<unsigned short>) var_4);
        *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_14))))))))));
    }

    *var_21 = ((/* implicit */val<signed char>) (((+(min((((/* implicit */val<long long int>) 3301669337U)), ((-9223372036854775807LL - 1LL)))))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_4 = 494454421272212179ULL;
long long int var_9 = 5608273553176837740LL;
unsigned char var_12 = (unsigned char)240;
unsigned short var_14 = (unsigned short)40840;
int zero = 0;
long long int var_18 = -4135426880627423954LL;
unsigned short var_19 = (unsigned short)43978;
unsigned int var_20 = 1956830768U;
signed char var_21 = (signed char)-96;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 5608273553176837740LL;
    value_mismatch |= var_19 != (unsigned short)13011;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, var_12, var_14, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
