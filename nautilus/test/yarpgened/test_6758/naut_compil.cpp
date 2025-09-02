/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6758
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6758
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
void test(val<int> var_2, val<bool> var_5, val<int> var_6, val<unsigned char> var_11, val<bool> var_15, val<short> var_16, val<int> var_17, val<int> var_18, val<int> zero, val<short*> var_19, val<short*> var_20, val<unsigned int*> var_21) {
    if (((/* implicit */val<bool>) ((val<long long int>) (~(((val<int>) var_16))))))
    {
        *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<unsigned char>) var_15))))))));
        *var_20 = ((/* implicit */val<short>) ((((val<unsigned long long int>) (!(var_5)))) & (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_17)) ? (var_6) : (var_18)))) | (((val<unsigned long long int>) var_11))))));
    }

    *var_21 = ((/* implicit */val<unsigned int>) max((*var_21), (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (val<bool>)1)), (((val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1816740272;
bool var_5 = (bool)1;
int var_6 = 55412879;
unsigned char var_11 = (unsigned char)74;
bool var_15 = (bool)0;
short var_16 = (short)-2137;
int var_17 = -583299932;
int var_18 = 1934120944;
int zero = 0;
short var_19 = (short)-6757;
short var_20 = (short)10195;
unsigned int var_21 = 649013362U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != 2478227024U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_11, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
