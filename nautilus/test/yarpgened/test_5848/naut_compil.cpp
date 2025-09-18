/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5848
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5848
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<int> var_5, val<signed char> var_6, val<unsigned long long int> var_8, val<int> var_10, val<unsigned int> var_12, val<unsigned long long int> var_13, val<unsigned int> var_14, val<unsigned long long int> var_15, val<int> zero, val<int*> var_17, val<unsigned char*> var_18, val<unsigned long long int*> var_19, val<unsigned int*> var_20, val<unsigned long long int*> var_21, val<unsigned int*> var_22) {
    *var_17 = ((/* implicit */val<int>) max((*var_17), (((/* implicit */val<int>) ((val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) var_15)) ? (2192231170U) : (0U))))))));
    *var_18 = ((/* implicit */val<unsigned char>) (-(var_2)));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_6)) >> (((var_10) - (812169385)))))) ? (((((/* implicit */val<unsigned long long int>) var_12)) ^ (((((/* implicit */val<bool>) 133942790U)) ? (var_3) : (var_15))))) : (var_8))))
    {
        *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) var_10)) != (((val<unsigned long long int>) var_5))));
        *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(var_2))))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4)))))));
        *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) var_14))));
    }

    *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) max((var_12), (((/* implicit */val<unsigned int>) -863826833))))))) >= (((val<unsigned int>) ((var_3) & (((/* implicit */val<unsigned long long int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3520901108U;
unsigned int var_2 = 2830994324U;
unsigned long long int var_3 = 10098382052408339433ULL;
unsigned int var_4 = 2186051260U;
int var_5 = -512001926;
signed char var_6 = (signed char)31;
unsigned long long int var_8 = 5624083890608804721ULL;
int var_10 = 812169409;
unsigned int var_12 = 3562571668U;
unsigned long long int var_13 = 5385791520229648988ULL;
unsigned int var_14 = 4129231645U;
unsigned long long int var_15 = 809155523414980691ULL;
int zero = 0;
int var_17 = -550930782;
unsigned char var_18 = (unsigned char)186;
unsigned long long int var_19 = 24607997123410720ULL;
unsigned int var_20 = 1958542359U;
unsigned long long int var_21 = 9335580387498106479ULL;
unsigned int var_22 = 640302725U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -550930782;
    value_mismatch |= var_18 != (unsigned char)108;
    value_mismatch |= var_19 != 1ULL;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != 1ULL;
    value_mismatch |= var_22 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_10, var_12, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
