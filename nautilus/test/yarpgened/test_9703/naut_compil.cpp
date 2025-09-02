/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9703
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9703
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
void test(val<int> var_3, val<short> var_4, val<short> var_6, val<long long int> var_8, val<unsigned char> var_10, val<long long int> var_11, val<int> zero, val<int*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<int>) max((*var_12), (((((((/* implicit */val<int>) ((val<unsigned char>) var_3))) >= (((/* implicit */val<int>) ((val<short>) var_11))))) ? ((~(((/* implicit */val<int>) var_4)))) : (((((/* implicit */val<bool>) max((var_11), (var_8)))) ? (((/* implicit */val<int>) (val<short>)10935)) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) <= (-7902131385820966051LL))))))))));
    *var_13 -= ((/* implicit */val<unsigned char>) ((val<unsigned short>) var_6));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 397021740;
short var_4 = (short)15635;
short var_6 = (short)-3118;
long long int var_8 = 6016313428450238148LL;
unsigned char var_10 = (unsigned char)119;
long long int var_11 = 5891558067058038916LL;
int zero = 0;
int var_12 = -803830810;
unsigned char var_13 = (unsigned char)239;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -15636;
    value_mismatch |= var_13 != (unsigned char)29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_8, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
