/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9365
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9365
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
void test(val<short> var_0, val<long long int> var_2, val<signed char> var_4, val<short> var_7, val<unsigned long long int> var_8, val<int> var_11, val<int> zero, val<short*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16) {
    if (((val<bool>) var_7))
    {
        *var_14 |= ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(var_11)))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (var_8)))) ? (((val<long long int>) var_0)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((val<bool>) (val<unsigned char>)128)), ((!(((/* implicit */val<bool>) (val<signed char>)16))))))))));
        *var_15 = ((/* implicit */val<unsigned long long int>) (+(var_11)));
    }

    *var_16 = ((/* implicit */val<unsigned char>) max((*var_16), (((/* implicit */val<unsigned char>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11848;
long long int var_2 = 1195983969811256865LL;
signed char var_4 = (signed char)-74;
short var_7 = (short)-28607;
unsigned long long int var_8 = 8353040994575602084ULL;
int var_11 = 74335617;
int zero = 0;
short var_14 = (short)831;
unsigned long long int var_15 = 17640753647688969570ULL;
unsigned char var_16 = (unsigned char)33;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-11329;
    value_mismatch |= var_15 != 74335617ULL;
    value_mismatch |= var_16 != (unsigned char)65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, var_8, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
