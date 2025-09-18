/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3107
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3107
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
void test(val<signed char> var_0, val<int> var_1, val<unsigned int> var_2, val<signed char> var_3, val<unsigned char> var_4, val<unsigned long long int> var_7, val<unsigned char> var_8, val<unsigned long long int> var_9, val<int> zero, val<int*> var_11, val<signed char*> var_12, val<short*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    if (((((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) ^ (((/* implicit */val<int>) (val<unsigned char>)15))))) > (((8589934592ULL) * (8589934592ULL))))) || (((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) <= (((/* implicit */val<int>) var_4))))))))))
    {
        *var_11 = ((/* implicit */val<int>) max((var_9), (((/* implicit */val<unsigned long long int>) var_2))));
        if (((/* implicit */val<bool>) max((((val<signed char>) ((((/* implicit */val<unsigned long long int>) var_1)) / (1903977936307667880ULL)))), (var_0))))
        {
            *var_12 = ((/* implicit */val<signed char>) var_9);
            *var_13 = ((/* implicit */val<short>) max((var_8), (((/* implicit */val<unsigned char>) (val<signed char>)-122))));
            *var_14 = ((/* implicit */val<unsigned char>) (val<bool>)1);
        }

    }

    *var_15 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) var_3)), (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (var_9) : (6407970010712730105ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
int var_1 = 1710975062;
unsigned int var_2 = 312939476U;
signed char var_3 = (signed char)-54;
unsigned char var_4 = (unsigned char)9;
unsigned long long int var_7 = 8520991861034974765ULL;
unsigned char var_8 = (unsigned char)197;
unsigned long long int var_9 = 4354172130532984250ULL;
int zero = 0;
int var_11 = 1263047750;
signed char var_12 = (signed char)0;
short var_13 = (short)-2191;
unsigned char var_14 = (unsigned char)152;
unsigned char var_15 = (unsigned char)226;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -1152186950;
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (short)-2191;
    value_mismatch |= var_14 != (unsigned char)152;
    value_mismatch |= var_15 != (unsigned char)202;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
