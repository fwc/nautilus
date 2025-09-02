/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9914
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9914
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
void test(val<signed char> var_6, val<int> var_10, val<long long int> var_12, val<signed char> var_13, val<unsigned int> var_14, val<unsigned int> var_15, val<unsigned long long int> var_16, val<unsigned char> var_17, val<int> var_18, val<int> zero, val<long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22) {
    if (((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_17)) >= (((/* implicit */val<int>) var_6))))), ((+(var_15))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_16)) || ((!(((/* implicit */val<bool>) var_13))))))))))
    {
        *var_20 = ((/* implicit */val<long long int>) min((*var_20), ((~((~(((val<long long int>) var_12))))))));
        *var_21 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17))) - (var_14)))) ? (((val<long long int>) (val<bool>)1)) : (((/* implicit */val<long long int>) (-(var_10)))))) | (((/* implicit */val<long long int>) ((val<int>) ((val<unsigned long long int>) var_18))))));
    }

    *var_22 = ((/* implicit */val<unsigned long long int>) ((((val<unsigned int>) max((((/* implicit */val<unsigned char>) (val<signed char>)34)), ((val<unsigned char>)128)))) / (var_14)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)71;
int var_10 = -533790329;
long long int var_12 = 2408956990416257953LL;
signed char var_13 = (signed char)-90;
unsigned int var_14 = 2357173856U;
unsigned int var_15 = 1866937696U;
unsigned long long int var_16 = 10721762895298918206ULL;
unsigned char var_17 = (unsigned char)162;
int var_18 = -789588928;
int zero = 0;
long long int var_20 = 6126132032986758682LL;
unsigned long long int var_21 = 2416627614291649857ULL;
unsigned long long int var_22 = 16688798754315451344ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2408956990416257953LL;
    value_mismatch |= var_21 != 18446744072919962689ULL;
    value_mismatch |= var_22 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
