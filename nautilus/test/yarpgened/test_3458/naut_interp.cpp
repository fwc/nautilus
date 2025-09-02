/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3458
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3458
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
void test(val<long long int> var_1, val<unsigned int> var_2, val<unsigned char> var_3, val<short> var_9, val<short> var_11, val<long long int> var_14, val<int> zero, val<bool*> var_16, val<long long int*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19) {
    *var_16 = ((/* implicit */val<bool>) var_11);
    *var_17 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (-(-713302860)))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) - (var_1)))))) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) != (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-16636)) > (((/* implicit */val<int>) (val<signed char>)-64)))))))))));
    *var_18 = ((/* implicit */val<unsigned char>) var_14);
    *var_19 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) var_3)) - (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-2147483647 - 1)))))))) * (((/* implicit */val<int>) ((max((var_2), (((/* implicit */val<unsigned int>) (val<signed char>)-64)))) < (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)1)) << (((((/* implicit */val<int>) (val<unsigned short>)511)) - (502)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9181966142548740686LL;
unsigned int var_2 = 3019776888U;
unsigned char var_3 = (unsigned char)234;
short var_9 = (short)16007;
short var_11 = (short)23476;
long long int var_14 = 2249181456914458648LL;
int zero = 0;
bool var_16 = (bool)1;
long long int var_17 = -1371963767804537709LL;
unsigned char var_18 = (unsigned char)109;
unsigned char var_19 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != -1371963770824314597LL;
    value_mismatch |= var_18 != (unsigned char)24;
    value_mismatch |= var_19 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_9, var_11, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
