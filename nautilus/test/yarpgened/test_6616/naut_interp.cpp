/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6616
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6616
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
void test(val<unsigned char> var_0, val<bool> var_1, val<long long int> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_14, val<bool> var_15, val<long long int> var_16, val<int> zero, val<unsigned char*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned short*> var_22) {
    *var_19 |= ((/* implicit */val<unsigned char>) ((val<short>) ((((val<int>) var_1)) >= (((val<int>) var_15)))));
    *var_20 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned int>) ((val<signed char>) var_0)))) && (var_1)));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<signed char>) ((val<unsigned long long int>) var_14)));
    *var_22 = ((/* implicit */val<unsigned short>) ((((((((/* implicit */val<unsigned long long int>) var_16)) + (var_4))) << (((((val<int>) var_3)) - (252727283))))) << (((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<short>) var_14))) == (((/* implicit */val<int>) ((val<short>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
bool var_1 = (bool)0;
long long int var_3 = 2360947796356386863LL;
unsigned long long int var_4 = 11587203493609298044ULL;
unsigned long long int var_14 = 10936379670608675521ULL;
bool var_15 = (bool)1;
long long int var_16 = -1360854519587109325LL;
int zero = 0;
unsigned char var_19 = (unsigned char)134;
unsigned long long int var_20 = 9964526902408591947ULL;
unsigned long long int var_21 = 17900111531869344075ULL;
unsigned short var_22 = (unsigned short)44741;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)134;
    value_mismatch |= var_20 != 9964526902408591947ULL;
    value_mismatch |= var_21 != 18446744073709551553ULL;
    value_mismatch |= var_22 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_14, var_15, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
