/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2055
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2055
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
void test(val<unsigned short> var_0, val<bool> var_1, val<short> var_2, val<unsigned int> var_3, val<short> var_5, val<unsigned long long int> var_10, val<unsigned long long int> var_15, val<int> zero, val<bool*> var_17, val<unsigned long long int*> var_18, val<short*> var_19) {
    *var_17 &= ((/* implicit */val<bool>) min((((val<long long int>) min((((/* implicit */val<unsigned int>) var_1)), (2809826273U)))), (((/* implicit */val<long long int>) var_2))));
    if (((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<bool>)1))))) > (var_3)))
    {
        *var_18 += max((min((((((/* implicit */val<bool>) var_10)) ? (var_15) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) + (11511638059893297694ULL))))), (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((val<unsigned short>) var_2)))))));
        *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) var_0))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24346;
bool var_1 = (bool)1;
short var_2 = (short)20751;
unsigned int var_3 = 3337985487U;
short var_5 = (short)19552;
unsigned long long int var_10 = 2835608182776221301ULL;
unsigned long long int var_15 = 10794234543059169343ULL;
int zero = 0;
bool var_17 = (bool)0;
unsigned long long int var_18 = 16333498483588599796ULL;
short var_19 = (short)11391;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 16333498483588579045ULL;
    value_mismatch |= var_19 != (short)11391;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_10, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
