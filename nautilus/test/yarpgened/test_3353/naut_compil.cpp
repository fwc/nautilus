/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3353
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3353
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
void test(val<unsigned long long int> var_0, val<int> var_2, val<bool> var_3, val<short> var_5, val<unsigned int> var_7, val<short> var_10, val<unsigned long long int> var_12, val<int> zero, val<int*> var_14, val<short*> var_15, val<long long int*> var_16, val<int*> var_17) {
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) == ((~(var_0)))));
    *var_15 = ((/* implicit */val<short>) ((((var_7) > (((/* implicit */val<unsigned int>) min((var_2), (((/* implicit */val<int>) var_3))))))) ? ((+(var_12))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)203)) ? (-8090559005979465198LL) : (((/* implicit */val<long long int>) -368187053)))))));
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) (-((((((-(((/* implicit */val<int>) var_5)))) + (2147483647))) >> (((var_7) - (1661363721U))))))))));
    *var_17 = ((/* implicit */val<int>) ((8854619312196886352ULL) != (((/* implicit */val<unsigned long long int>) (~(2676629036U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6047114116177532951ULL;
int var_2 = -1859827358;
bool var_3 = (bool)0;
short var_5 = (short)10636;
unsigned int var_7 = 1661363732U;
short var_10 = (short)-12991;
unsigned long long int var_12 = 6382621814063800614ULL;
int zero = 0;
int var_14 = 1763202627;
short var_15 = (short)-5825;
long long int var_16 = 3926643303918007172LL;
int var_17 = -1843185942;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != (short)-21998;
    value_mismatch |= var_16 != -1048570LL;
    value_mismatch |= var_17 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_10, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
