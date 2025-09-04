/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2181
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2181
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
void test(val<unsigned short> var_7, val<unsigned char> var_8, val<long long int> var_9, val<unsigned short> var_11, val<unsigned char> var_12, val<int> var_15, val<short> var_19, val<int> zero, val<int*> var_20, val<signed char*> var_21, val<short*> var_22, val<signed char*> var_23, val<bool*> var_24, val<unsigned long long int*> var_25) {
    *var_20 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(var_9))))));
    if (((/* implicit */val<bool>) var_19))
    {
        *var_21 |= ((/* implicit */val<signed char>) max((-1LL), (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_12)))))));
        *var_22 = ((/* implicit */val<short>) min((*var_22), (((/* implicit */val<short>) var_8))));
        *var_23 *= ((/* implicit */val<signed char>) ((val<long long int>) ((((/* implicit */val<bool>) 1LL)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((val<signed char>) (val<short>)5745))))));
        *var_24 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_7))));
    }

    *var_25 = ((/* implicit */val<unsigned long long int>) ((val<bool>) var_15));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)55499;
unsigned char var_8 = (unsigned char)12;
long long int var_9 = 3681048465715914290LL;
unsigned short var_11 = (unsigned short)32678;
unsigned char var_12 = (unsigned char)136;
int var_15 = 568256527;
short var_19 = (short)-4052;
int zero = 0;
int var_20 = -572988668;
signed char var_21 = (signed char)55;
short var_22 = (short)-4406;
signed char var_23 = (signed char)96;
bool var_24 = (bool)0;
unsigned long long int var_25 = 2015652058461899318ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (signed char)-65;
    value_mismatch |= var_22 != (short)-4406;
    value_mismatch |= var_23 != (signed char)64;
    value_mismatch |= var_24 != (bool)1;
    value_mismatch |= var_25 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_9, var_11, var_12, var_15, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
