/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1842
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1842
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
void test(val<bool> var_0, val<unsigned char> var_1, val<bool> var_2, val<int> var_4, val<unsigned char> var_5, val<signed char> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_11, val<int> var_12, val<int> var_13, val<unsigned char> var_14, val<int> zero, val<short*> var_15, val<short*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19, val<int*> var_20) {
    if (((/* implicit */val<bool>) var_14))
    {
        *var_15 = ((/* implicit */val<short>) ((-1654597087) != (((var_0) ? (((/* implicit */val<int>) var_2)) : (var_12)))));
        *var_16 *= ((/* implicit */val<short>) ((var_11) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) < (((/* implicit */val<int>) (val<unsigned short>)65518))))))));
        *var_17 = ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) ^ (var_13)))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1654597087)) ? (18446744073709551601ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) | (((/* implicit */val<int>) var_2))))) : (((((/* implicit */val<bool>) 1654597085)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (7067622410481482533ULL))))) : (((/* implicit */val<unsigned long long int>) var_13)));
        *var_18 = ((/* implicit */val<unsigned long long int>) max(((val<short>)-11042), (((/* implicit */val<short>) var_14))));
    }

    *var_19 = ((/* implicit */val<unsigned short>) ((((2364167432U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)70))))) > (((/* implicit */val<unsigned int>) var_13))));
    *var_20 &= ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) ? ((~(var_7))) : (((/* implicit */val<unsigned long long int>) ((((var_4) + (2147483647))) << (((((((/* implicit */val<bool>) var_5)) ? (var_13) : (((/* implicit */val<int>) var_6)))) - (1425260013))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_1 = (unsigned char)51;
bool var_2 = (bool)0;
int var_4 = -935910378;
unsigned char var_5 = (unsigned char)176;
signed char var_6 = (signed char)-100;
unsigned long long int var_7 = 1685494285573538562ULL;
unsigned long long int var_11 = 4346271653809078736ULL;
int var_12 = 183841577;
int var_13 = 1425260013;
unsigned char var_14 = (unsigned char)167;
int zero = 0;
short var_15 = (short)-25383;
short var_16 = (short)-633;
unsigned long long int var_17 = 6844448573991537832ULL;
unsigned long long int var_18 = 6978898684323274966ULL;
unsigned short var_19 = (unsigned short)45508;
int var_20 = 593979010;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (short)-15817;
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 167ULL;
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != 23078016;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
