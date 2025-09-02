/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3359
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
void test(val<long long int> var_0, val<int> var_2, val<long long int> var_3, val<short> var_4, val<long long int> var_5, val<int> var_6, val<signed char> var_8, val<signed char> var_11, val<short> var_12, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14, val<long long int*> var_15, val<signed char*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_13 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) var_3));
    if (((/* implicit */val<bool>) max((var_0), (min((((/* implicit */val<long long int>) (val<short>)-5060)), (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (var_3))))))))
    {
        if (((/* implicit */val<bool>) var_2))
        {
            *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) var_12))));
            *var_15 = ((/* implicit */val<long long int>) ((val<signed char>) max((((((/* implicit */val<bool>) 1716138767)) ? (((/* implicit */val<int>) (val<short>)-27752)) : (var_6))), ((+(((/* implicit */val<int>) var_4)))))));
        }

        *var_16 = ((val<signed char>) var_6);
        *var_17 = ((/* implicit */val<unsigned char>) var_11);
    }

    *var_18 |= ((/* implicit */val<unsigned char>) ((val<signed char>) var_5));
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned char>) min((((/* implicit */val<short>) var_8)), (var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4119231250002996971LL;
int var_2 = -1940237262;
long long int var_3 = 2981275096800883821LL;
short var_4 = (short)-20318;
long long int var_5 = 5649968228862088861LL;
int var_6 = 163053046;
signed char var_8 = (signed char)-80;
signed char var_11 = (signed char)82;
short var_12 = (short)-21036;
int zero = 0;
unsigned short var_13 = (unsigned short)50893;
long long int var_14 = -217341483136877455LL;
long long int var_15 = -5460322836739923235LL;
signed char var_16 = (signed char)80;
unsigned char var_17 = (unsigned char)124;
unsigned char var_18 = (unsigned char)76;
long long int var_19 = -2245907908717573112LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)62573;
    value_mismatch |= var_14 != -21036LL;
    value_mismatch |= var_15 != -94LL;
    value_mismatch |= var_16 != (signed char)-10;
    value_mismatch |= var_17 != (unsigned char)82;
    value_mismatch |= var_18 != (unsigned char)221;
    value_mismatch |= var_19 != 162LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
