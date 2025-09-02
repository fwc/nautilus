/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7456
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7456
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
void test(val<long long int> var_1, val<unsigned long long int> var_3, val<unsigned char> var_5, val<long long int> var_6, val<unsigned char> var_8, val<signed char> var_10, val<unsigned long long int> var_12, val<signed char> var_13, val<short> var_14, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<unsigned char*> var_20, val<int*> var_21) {
    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_5))))), (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned char>)64))))) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_13)), (var_8))))))))))
    {
        *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<int>) var_10)) | (((/* implicit */val<int>) var_5))))))) || (((/* implicit */val<bool>) (~(((var_3) ^ (((/* implicit */val<unsigned long long int>) var_6)))))))));
        *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), ((((~(((((/* implicit */val<bool>) (val<short>)14834)) ? (4322071043758231889ULL) : (14124673029951319705ULL))))) | (((val<unsigned long long int>) (~(((/* implicit */val<int>) var_14)))))))));
        *var_18 = ((/* implicit */val<long long int>) min((*var_18), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)32252)) != (((/* implicit */val<int>) (val<unsigned char>)127))))) <= ((~(((/* implicit */val<int>) var_13))))))))))));
        *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) var_13)))) ^ ((~(min((var_6), (((/* implicit */val<long long int>) var_8))))))))));
    }

    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) var_6)) <= (var_12)));
    *var_21 = ((/* implicit */val<int>) min((*var_21), (((/* implicit */val<int>) min((var_1), (((/* implicit */val<long long int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3283707001805133882LL;
unsigned long long int var_3 = 15772310087097288843ULL;
unsigned char var_5 = (unsigned char)211;
long long int var_6 = 299899790922159182LL;
unsigned char var_8 = (unsigned char)53;
signed char var_10 = (signed char)92;
unsigned long long int var_12 = 4060828446418597291ULL;
signed char var_13 = (signed char)55;
short var_14 = (short)27460;
int zero = 0;
short var_16 = (short)16412;
unsigned long long int var_17 = 11033991310183191028ULL;
long long int var_18 = -4054293324823841934LL;
long long int var_19 = 1200914628363603655LL;
unsigned char var_20 = (unsigned char)1;
int var_21 = -854405484;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)1;
    value_mismatch |= var_17 != 11033991310183191028ULL;
    value_mismatch |= var_18 != -4054293324823841934LL;
    value_mismatch |= var_19 != -3LL;
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != -854405484;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_8, var_10, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
