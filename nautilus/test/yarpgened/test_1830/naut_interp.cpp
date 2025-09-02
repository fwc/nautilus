/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1830
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1830
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
void test(val<int> var_2, val<unsigned char> var_5, val<unsigned char> var_6, val<bool> var_7, val<int> var_13, val<int> var_15, val<int> zero, val<short*> var_17, val<signed char*> var_18, val<unsigned int*> var_19, val<unsigned int*> var_20, val<bool*> var_21) {
    *var_17 |= ((/* implicit */val<short>) min((var_6), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_5)))))));
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((val<signed char>) (val<signed char>)1))))))
    {
        *var_18 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) max((-307197988), (((/* implicit */val<int>) (val<signed char>)-112))))))) ? (((/* implicit */val<int>) var_7)) : (var_2)));
        *var_19 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) 70368744177663LL));
    }

    *var_20 = ((/* implicit */val<unsigned int>) var_15);
    *var_21 |= ((/* implicit */val<bool>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1997044685;
unsigned char var_5 = (unsigned char)43;
unsigned char var_6 = (unsigned char)150;
bool var_7 = (bool)1;
int var_13 = 1102459077;
int var_15 = -524525512;
int zero = 0;
short var_17 = (short)-4472;
signed char var_18 = (signed char)-11;
unsigned int var_19 = 3668549586U;
unsigned int var_20 = 2970941972U;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-4472;
    value_mismatch |= var_18 != (signed char)-51;
    value_mismatch |= var_19 != 255U;
    value_mismatch |= var_20 != 3770441784U;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
