/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5727
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5727
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
void test(val<signed char> var_1, val<unsigned char> var_2, val<int> var_3, val<signed char> var_5, val<long long int> var_6, val<short> var_8, val<bool> var_9, val<bool> var_10, val<unsigned char> var_11, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14, val<long long int*> var_15, val<unsigned char*> var_16) {
    *var_13 = ((/* implicit */val<unsigned long long int>) ((var_3) == (((((((/* implicit */val<int>) var_9)) / (((/* implicit */val<int>) var_2)))) << (((((/* implicit */val<int>) var_1)) - (101)))))));
    *var_14 = ((/* implicit */val<int>) min((*var_14), (((/* implicit */val<int>) var_10))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(var_6)))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_8)))))
    {
        *var_15 = ((/* implicit */val<long long int>) var_5);
        *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_12)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) * (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_2)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
unsigned char var_2 = (unsigned char)6;
int var_3 = 77250871;
signed char var_5 = (signed char)-124;
long long int var_6 = 2089720957180529914LL;
short var_8 = (short)-1280;
bool var_9 = (bool)1;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)214;
signed char var_12 = (signed char)83;
int zero = 0;
unsigned long long int var_13 = 7223353929552571380ULL;
int var_14 = -1574649164;
long long int var_15 = 860929251751272883LL;
unsigned char var_16 = (unsigned char)197;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0ULL;
    value_mismatch |= var_14 != -1574649164;
    value_mismatch |= var_15 != -124LL;
    value_mismatch |= var_16 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
