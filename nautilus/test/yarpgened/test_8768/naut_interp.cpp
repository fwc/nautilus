/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8768
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8768
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
void test(val<unsigned int> var_2, val<unsigned short> var_11, val<long long int> var_13, val<unsigned long long int> var_15, val<unsigned long long int> var_16, val<unsigned int> var_17, val<int> zero, val<bool*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21, val<long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) max((max((6306506583803083405ULL), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (val<short>)32759)), (var_2)))))), (((/* implicit */val<unsigned long long int>) (val<bool>)0)))))));
    *var_20 = ((/* implicit */val<long long int>) -2013215383);
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)255)), (max((max((((/* implicit */val<unsigned long long int>) var_17)), (var_15))), (((/* implicit */val<unsigned long long int>) var_13)))))))
    {
        *var_21 *= var_16;
        *var_22 ^= ((/* implicit */val<long long int>) max((var_11), (((/* implicit */val<unsigned short>) (val<unsigned char>)255))));
        *var_23 = 8578451890168794459ULL;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3604023232U;
unsigned short var_11 = (unsigned short)45285;
long long int var_13 = -6530989303428422905LL;
unsigned long long int var_15 = 9176148628982755372ULL;
unsigned long long int var_16 = 11880848680649550405ULL;
unsigned int var_17 = 146021276U;
int zero = 0;
bool var_19 = (bool)0;
long long int var_20 = -3939832305935440089LL;
unsigned long long int var_21 = 5126670602028979505ULL;
long long int var_22 = -8415352353963969452LL;
unsigned long long int var_23 = 11260141917970300741ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != -2013215383LL;
    value_mismatch |= var_21 != 5533387798482812981ULL;
    value_mismatch |= var_22 != -8415352353964014415LL;
    value_mismatch |= var_23 != 8578451890168794459ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_13, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
