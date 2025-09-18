/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1314
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1314
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<int> var_7, val<bool> var_8, val<long long int> var_11, val<signed char> var_14, val<unsigned int> var_15, val<unsigned int> var_17, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<unsigned short*> var_21) {
    *var_19 = var_11;
    if (((/* implicit */val<bool>) ((var_2) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))
    {
        *var_20 &= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) max(((val<unsigned short>)24), (((/* implicit */val<unsigned short>) (val<signed char>)-1))))) != (((/* implicit */val<int>) ((var_15) <= (((/* implicit */val<unsigned int>) var_7)))))));
        *var_21 = ((/* implicit */val<unsigned short>) ((var_17) > (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_8)), (((((/* implicit */val<int>) var_14)) & (((/* implicit */val<int>) (val<unsigned short>)17982)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8875;
unsigned long long int var_2 = 16644855525465174475ULL;
int var_7 = -1166363518;
bool var_8 = (bool)1;
long long int var_11 = 4047555088583266543LL;
signed char var_14 = (signed char)-40;
unsigned int var_15 = 4207708669U;
unsigned int var_17 = 4219441299U;
int zero = 0;
long long int var_19 = -6863264239574148119LL;
signed char var_20 = (signed char)-105;
unsigned short var_21 = (unsigned short)3850;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4047555088583266543LL;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_8, var_11, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
