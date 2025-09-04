/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5978
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5978
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
void test(val<unsigned short> var_3, val<long long int> var_11, val<signed char> var_12, val<int> zero, val<unsigned char*> var_13, val<short*> var_14, val<long long int*> var_15, val<unsigned short*> var_16) {
    *var_13 = ((/* implicit */val<unsigned char>) max((var_11), (((/* implicit */val<long long int>) var_12))));
    *var_14 = ((/* implicit */val<short>) ((min((((((/* implicit */val<int>) (val<signed char>)123)) ^ (((/* implicit */val<int>) (val<unsigned short>)16061)))), (((/* implicit */val<int>) var_12)))) == (((/* implicit */val<int>) max((var_3), (((/* implicit */val<unsigned short>) var_12)))))));
    *var_15 ^= var_11;
    *var_16 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40439;
long long int var_11 = 4738493063757140167LL;
signed char var_12 = (signed char)-59;
int zero = 0;
unsigned char var_13 = (unsigned char)172;
short var_14 = (short)-12036;
long long int var_15 = -5696751207269993548LL;
unsigned short var_16 = (unsigned short)24898;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)199;
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != -1066349668427799693LL;
    value_mismatch |= var_16 != (unsigned short)40439;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
