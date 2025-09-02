/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4776
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4776
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
void test(val<long long int> var_3, val<unsigned char> var_4, val<unsigned char> var_6, val<long long int> var_9, val<unsigned char> var_10, val<short> var_11, val<unsigned long long int> var_12, val<int> zero, val<short*> var_13, val<signed char*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<short>) min((((/* implicit */val<int>) min((var_10), (((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))) <= (var_12))))))), (min((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_4)))), ((~(((/* implicit */val<int>) var_6))))))));
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) min((var_4), (var_4))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (((((/* implicit */val<bool>) ((val<signed char>) var_3))) ? (var_3) : (((((/* implicit */val<bool>) (val<unsigned short>)65525)) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))))));
    *var_15 |= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5416120420858729450LL;
unsigned char var_4 = (unsigned char)227;
unsigned char var_6 = (unsigned char)33;
long long int var_9 = -5580811394230568855LL;
unsigned char var_10 = (unsigned char)135;
short var_11 = (short)29719;
unsigned long long int var_12 = 5809998245247131928ULL;
int zero = 0;
short var_13 = (short)-150;
signed char var_14 = (signed char)90;
unsigned char var_15 = (unsigned char)161;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-34;
    value_mismatch |= var_14 != (signed char)-29;
    value_mismatch |= var_15 != (unsigned char)183;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
