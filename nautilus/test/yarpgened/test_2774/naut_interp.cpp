/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2774
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2774
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
void test(val<long long int> var_1, val<unsigned char> var_2, val<long long int> var_3, val<unsigned char> var_7, val<int> zero, val<signed char*> var_12, val<int*> var_13, val<unsigned short*> var_14, val<long long int*> var_15) {
    *var_12 = ((/* implicit */val<signed char>) max(((val<unsigned short>)19946), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) / (((/* implicit */val<int>) (val<unsigned short>)15671))))))))));
    *var_13 += ((((/* implicit */val<bool>) ((var_1) >> (((((/* implicit */val<int>) var_7)) - (88)))))) ? (((/* implicit */val<int>) ((19U) != (2751707430U)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)37282)))))))));
    *var_14 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) -1377269344)) || (((/* implicit */val<bool>) (val<unsigned short>)45590))));
    *var_15 = ((val<long long int>) ((val<short>) var_3));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5418437887353568246LL;
unsigned char var_2 = (unsigned char)111;
long long int var_3 = 8590343509729495023LL;
unsigned char var_7 = (unsigned char)121;
int zero = 0;
signed char var_12 = (signed char)-9;
int var_13 = 1173190558;
unsigned short var_14 = (unsigned short)7246;
long long int var_15 = -5035407216212415954LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-22;
    value_mismatch |= var_13 != 1173190559;
    value_mismatch |= var_14 != (unsigned short)7247;
    value_mismatch |= var_15 != 18415LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
