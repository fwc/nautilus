/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6365
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6365
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
void test(val<bool> var_3, val<unsigned char> var_4, val<signed char> var_6, val<unsigned char> var_8, val<int> zero, val<bool*> var_16, val<signed char*> var_17, val<short*> var_18) {
    *var_16 = ((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_6)) % (((/* implicit */val<int>) (val<signed char>)-27)))) * (((/* implicit */val<int>) ((val<unsigned short>) (-(562949953421311LL)))))));
    *var_17 += ((/* implicit */val<signed char>) var_3);
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) != (max((-562949953421312LL), (-562949953421312LL)))))) / ((+(((((/* implicit */val<int>) var_4)) << (((((/* implicit */val<int>) var_4)) - (194)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)217;
signed char var_6 = (signed char)-105;
unsigned char var_8 = (unsigned char)154;
int zero = 0;
bool var_16 = (bool)0;
signed char var_17 = (signed char)-46;
short var_18 = (short)-11224;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (signed char)-46;
    value_mismatch |= var_18 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_8, zero, &var_16, &var_17, &var_18);
  checksum();
}
