/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8056
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8056
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_2, val<unsigned char> var_4, val<short> var_8, val<unsigned short> var_9, val<unsigned char> var_10, val<long long int> var_11, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<unsigned int*> var_16, val<unsigned int*> var_17, val<int*> var_18) {
    *var_13 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) min((var_11), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<signed char>)87)))))))), (max((((/* implicit */val<unsigned long long int>) ((val<long long int>) var_11))), (var_1)))));
    if (((/* implicit */val<bool>) var_8))
    {
        *var_14 = ((/* implicit */val<unsigned long long int>) var_2);
        *var_15 = ((/* implicit */val<unsigned long long int>) var_11);
    }

    *var_16 = ((/* implicit */val<unsigned int>) -8153075222609180583LL);
    *var_17 = ((/* implicit */val<unsigned int>) var_4);
    *var_18 = ((/* implicit */val<int>) min(((~(((((/* implicit */val<bool>) var_8)) ? (4294967295U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))))))), (((/* implicit */val<unsigned int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4565333518075231276ULL;
unsigned char var_2 = (unsigned char)105;
unsigned char var_4 = (unsigned char)170;
short var_8 = (short)2573;
unsigned short var_9 = (unsigned short)51681;
unsigned char var_10 = (unsigned char)116;
long long int var_11 = 8260157794659517460LL;
int zero = 0;
unsigned char var_13 = (unsigned char)123;
unsigned long long int var_14 = 15817983725879718930ULL;
unsigned long long int var_15 = 15908775870988220359ULL;
unsigned int var_16 = 3785252590U;
unsigned int var_17 = 1757049182U;
int var_18 = -1747238189;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)20;
    value_mismatch |= var_14 != 105ULL;
    value_mismatch |= var_15 != 8260157794659517460ULL;
    value_mismatch |= var_16 != 693586009U;
    value_mismatch |= var_17 != 170U;
    value_mismatch |= var_18 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
