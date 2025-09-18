/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2111
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2111
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<long long int> var_3, val<unsigned int> var_5, val<signed char> var_6, val<bool> var_7, val<short> var_11, val<int> zero, val<int*> var_12, val<long long int*> var_13, val<unsigned short*> var_14, val<unsigned char*> var_15, val<short*> var_16) {
    if (var_7)
    {
        *var_12 &= ((/* implicit */val<int>) var_5);
        *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_0)))) != (((val<unsigned long long int>) var_7))))) <= ((-(((/* implicit */val<int>) var_11))))));
        *var_14 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) max((var_3), (((/* implicit */val<long long int>) ((val<short>) (val<unsigned short>)25960))))));
    }

    *var_15 += ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) var_0))))) + (((/* implicit */val<int>) var_7)))))));
    *var_16 = ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16368;
unsigned long long int var_1 = 12418211044200130849ULL;
long long int var_3 = -4324253314515453360LL;
unsigned int var_5 = 568660691U;
signed char var_6 = (signed char)-33;
bool var_7 = (bool)1;
short var_11 = (short)-20652;
int zero = 0;
int var_12 = 590844126;
long long int var_13 = 326569094461860921LL;
unsigned short var_14 = (unsigned short)40103;
unsigned char var_15 = (unsigned char)218;
short var_16 = (short)-20497;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 556077266;
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (unsigned short)25960;
    value_mismatch |= var_15 != (unsigned char)218;
    value_mismatch |= var_16 != (short)-22239;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
