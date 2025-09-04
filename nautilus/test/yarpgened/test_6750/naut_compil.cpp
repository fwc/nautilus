/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6750
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6750
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
void test(val<long long int> var_2, val<long long int> var_3, val<unsigned short> var_4, val<long long int> var_5, val<int> var_6, val<long long int> var_8, val<short> var_11, val<int> var_13, val<int> zero, val<short*> var_14, val<unsigned char*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<short>) max((*var_14), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<long long int>) var_6)) : (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (var_2)))))) ? ((~(((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) + (var_3))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))));
    *var_15 = ((/* implicit */val<unsigned char>) (+(((((/* implicit */val<bool>) var_5)) ? ((~(var_8))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<short>)15663), (((/* implicit */val<short>) (val<bool>)0))))))))));
    *var_16 = ((/* implicit */val<short>) ((var_3) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -204968282667992266LL;
long long int var_3 = 965203651798375067LL;
unsigned short var_4 = (unsigned short)14476;
long long int var_5 = -1178399512596153280LL;
int var_6 = 799706404;
long long int var_8 = -4185348833773452844LL;
short var_11 = (short)-24150;
int var_13 = 737399697;
int zero = 0;
short var_14 = (short)20102;
unsigned char var_15 = (unsigned char)62;
short var_16 = (short)26239;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)20102;
    value_mismatch |= var_15 != (unsigned char)43;
    value_mismatch |= var_16 != (short)-15510;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_8, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
