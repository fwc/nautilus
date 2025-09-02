/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3219
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3219
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
void test(val<unsigned short> var_6, val<short> var_7, val<signed char> var_9, val<short> var_12, val<int> zero, val<unsigned short*> var_13, val<short*> var_14, val<unsigned short*> var_15, val<short*> var_16, val<short*> var_17) {
    *var_13 = ((/* implicit */val<unsigned short>) min(((~(((/* implicit */val<int>) (val<unsigned short>)17827)))), (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)17827)) ^ (((/* implicit */val<int>) var_12))))) ? (((/* implicit */val<int>) var_12)) : (((((/* implicit */val<int>) var_6)) ^ (((/* implicit */val<int>) (val<short>)-23136))))))));
    *var_14 = ((/* implicit */val<short>) max((*var_14), (((/* implicit */val<short>) (+(((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_7))))) ? ((+(((/* implicit */val<int>) var_7)))) : ((+(((/* implicit */val<int>) var_9)))))))))));
    *var_15 *= ((/* implicit */val<unsigned short>) var_7);
    *var_16 = ((val<short>) var_9);
    *var_17 = ((/* implicit */val<short>) (val<unsigned short>)65535);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)31122;
short var_7 = (short)-32641;
signed char var_9 = (signed char)86;
short var_12 = (short)-13839;
int zero = 0;
unsigned short var_13 = (unsigned short)14366;
short var_14 = (short)-19474;
unsigned short var_15 = (unsigned short)18279;
short var_16 = (short)24565;
short var_17 = (short)20159;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)47708;
    value_mismatch |= var_14 != (short)-19474;
    value_mismatch |= var_15 != (unsigned short)60441;
    value_mismatch |= var_16 != (short)86;
    value_mismatch |= var_17 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
