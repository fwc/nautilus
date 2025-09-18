/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1373
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1373
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
void test(val<bool> var_0, val<bool> var_1, val<short> var_2, val<int> var_3, val<unsigned short> var_4, val<unsigned int> var_8, val<unsigned int> var_10, val<long long int> var_11, val<int> zero, val<bool*> var_13, val<unsigned short*> var_14, val<bool*> var_15, val<short*> var_16, val<unsigned char*> var_17) {
    if (((/* implicit */val<bool>) var_4))
    {
        *var_13 = ((/* implicit */val<bool>) max((min((((/* implicit */val<long long int>) (val<bool>)1)), (139611588448485376LL))), (((/* implicit */val<long long int>) var_1))));
        *var_14 = ((/* implicit */val<unsigned short>) (+((~(((var_1) ? (16923527866954857975ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))))));
    }

    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) % (var_11)))) % (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) & (1523216206754693652ULL)))))) ? (max((((val<unsigned long long int>) 16923527866954857974ULL)), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) var_3)) : (var_10)))))) : (((((val<bool>) var_11)) ? (min((16923527866954857965ULL), (((/* implicit */val<unsigned long long int>) var_1)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1523216206754693651ULL))))))))));
    *var_16 = ((/* implicit */val<short>) 1523216206754693641ULL);
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) -5785275518797716365LL))))) <= (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_8)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) var_3))))) : (((/* implicit */val<int>) ((val<unsigned char>) 0U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)1;
short var_2 = (short)-4555;
int var_3 = 445043382;
unsigned short var_4 = (unsigned short)15093;
unsigned int var_8 = 4183745338U;
unsigned int var_10 = 1859213766U;
long long int var_11 = 8856969727383903167LL;
int zero = 0;
bool var_13 = (bool)1;
unsigned short var_14 = (unsigned short)30583;
bool var_15 = (bool)1;
short var_16 = (short)5279;
unsigned char var_17 = (unsigned char)35;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned short)16904;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)16905;
    value_mismatch |= var_17 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_8, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
