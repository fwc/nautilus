/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2706
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2706
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
void test(val<unsigned long long int> var_0, val<short> var_10, val<short> var_15, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) var_0);
    *var_17 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_10))));
    *var_18 = ((/* implicit */val<unsigned int>) min(((-(((((/* implicit */val<int>) var_15)) + (((/* implicit */val<int>) (val<signed char>)-100)))))), ((-(((/* implicit */val<int>) max(((val<short>)-19556), (((/* implicit */val<short>) (val<unsigned char>)3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5998221455552139831ULL;
short var_10 = (short)1104;
short var_15 = (short)5690;
int zero = 0;
unsigned short var_16 = (unsigned short)45307;
unsigned int var_17 = 3863765940U;
unsigned int var_18 = 21663960U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)53815;
    value_mismatch |= var_17 != 1104U;
    value_mismatch |= var_18 != 4294961706U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
