/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7702
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7702
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
void test(val<unsigned char> var_0, val<unsigned int> var_2, val<unsigned char> var_3, val<int> var_5, val<short> var_8, val<unsigned long long int> var_10, val<bool> var_12, val<unsigned short> var_13, val<unsigned char> var_16, val<bool> var_18, val<int> zero, val<unsigned char*> var_19, val<bool*> var_20, val<unsigned char*> var_21, val<unsigned char*> var_22, val<bool*> var_23) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) -2038685032)) ? (5445733602055948990ULL) : (((/* implicit */val<unsigned long long int>) (-9223372036854775807LL - 1LL))))))
    {
        *var_19 = var_16;
        *var_20 = ((min((((var_18) ? (5445733602055949005ULL) : (((/* implicit */val<unsigned long long int>) var_2)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_13))))))) > ((+(((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (13001010471653602629ULL))))));
        *var_21 = ((/* implicit */val<unsigned char>) var_5);
    }

    *var_22 = var_3;
    *var_23 = ((/* implicit */val<bool>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned int var_2 = 1454619170U;
unsigned char var_3 = (unsigned char)124;
int var_5 = 972321879;
short var_8 = (short)25476;
unsigned long long int var_10 = 4065448943525283165ULL;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)47147;
unsigned char var_16 = (unsigned char)32;
bool var_18 = (bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
bool var_20 = (bool)1;
unsigned char var_21 = (unsigned char)155;
unsigned char var_22 = (unsigned char)75;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)32;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned char)87;
    value_mismatch |= var_22 != (unsigned char)124;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_8, var_10, var_12, var_13, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
