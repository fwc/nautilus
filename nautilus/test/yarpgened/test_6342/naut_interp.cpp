/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6342
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6342
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
void test(val<signed char> var_0, val<long long int> var_1, val<signed char> var_2, val<unsigned char> var_3, val<int> var_4, val<unsigned long long int> var_7, val<unsigned char> var_8, val<unsigned short> var_9, val<signed char> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned char*> var_13, val<unsigned char*> var_14, val<bool*> var_15, val<unsigned char*> var_16) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) ((val<bool>) var_0))) : (((((/* implicit */val<bool>) ((val<int>) var_9))) ? (((/* implicit */val<int>) (val<signed char>)-73)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) == (((((/* implicit */val<bool>) (val<short>)-13176)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)100))) : (var_7)))))), (var_2)));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned char>) (val<signed char>)49)), (var_8)))), (-8338117004284871692LL)))) ? (((/* implicit */val<int>) (val<unsigned char>)38)) : (((/* implicit */val<int>) ((val<bool>) var_10))))))
    {
        *var_14 ^= ((/* implicit */val<unsigned char>) (-(max((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned char>) (val<signed char>)81)), ((val<unsigned char>)38)))), (((val<unsigned long long int>) -4884345609331246634LL))))));
        *var_15 = ((/* implicit */val<bool>) ((val<unsigned char>) ((((/* implicit */val<int>) ((val<unsigned char>) (val<signed char>)-50))) < (((/* implicit */val<int>) (val<signed char>)-73)))));
        *var_16 -= ((/* implicit */val<unsigned char>) max((7055094458792508057LL), (max((((((/* implicit */val<bool>) 13939482186032490739ULL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) : (8338117004284871691LL))), (var_1)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
long long int var_1 = -4096486767025461690LL;
signed char var_2 = (signed char)-60;
unsigned char var_3 = (unsigned char)36;
int var_4 = -2092367248;
unsigned long long int var_7 = 15827266763212855918ULL;
unsigned char var_8 = (unsigned char)158;
unsigned short var_9 = (unsigned short)34261;
signed char var_10 = (signed char)7;
int zero = 0;
unsigned short var_12 = (unsigned short)39593;
unsigned char var_13 = (unsigned char)127;
unsigned char var_14 = (unsigned char)166;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)254;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != (unsigned char)140;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned char)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
