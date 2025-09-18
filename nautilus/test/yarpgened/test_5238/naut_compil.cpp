/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5238
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5238
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
void test(val<unsigned int> var_1, val<long long int> var_2, val<long long int> var_3, val<short> var_4, val<signed char> var_6, val<unsigned char> var_8, val<long long int> var_11, val<int> zero, val<short*> var_12, val<short*> var_13) {
    *var_12 -= ((/* implicit */val<short>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) == (((var_2) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))))) ? (var_3) : (((val<long long int>) min((var_11), (((/* implicit */val<long long int>) 1083270314)))))));
    *var_13 -= ((/* implicit */val<short>) max(((+(var_2))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? ((+(((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1855924754U;
long long int var_2 = 1664821984480809487LL;
long long int var_3 = 3264814586378941823LL;
short var_4 = (short)29593;
signed char var_6 = (signed char)70;
unsigned char var_8 = (unsigned char)216;
long long int var_11 = -8231844999112933336LL;
int zero = 0;
short var_12 = (short)16832;
short var_13 = (short)-107;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)408;
    value_mismatch |= var_13 != (short)-21114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_8, var_11, zero, &var_12, &var_13);
  checksum();
}
