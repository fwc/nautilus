/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4555
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4555
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<unsigned long long int> var_3, val<signed char> var_5, val<signed char> var_6, val<signed char> var_7, val<unsigned int> var_9, val<bool> var_11, val<int> zero, val<unsigned short*> var_13, val<unsigned long long int*> var_14, val<short*> var_15, val<signed char*> var_16) {
    *var_13 = ((/* implicit */val<unsigned short>) max((var_1), (((/* implicit */val<unsigned int>) ((((-323739839383125502LL) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<int>) ((val<bool>) 4294967279U))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) >= (var_9)))))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)255))) < (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)219))) : (var_1))))))) : (((((var_1) >> (((4294967284U) - (4294967256U))))) & (((/* implicit */val<unsigned int>) 988996284))))));
    *var_15 = ((/* implicit */val<short>) var_3);
    *var_16 += ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) != (((((/* implicit */val<bool>) ((val<unsigned char>) 988996295))) ? (((var_11) ? (15401969433750124455ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)17))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) var_1))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned int var_1 = 3194437511U;
unsigned long long int var_3 = 11021646284021433187ULL;
signed char var_5 = (signed char)-105;
signed char var_6 = (signed char)-41;
signed char var_7 = (signed char)101;
unsigned int var_9 = 3554187942U;
bool var_11 = (bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)20004;
unsigned long long int var_14 = 14418434100252707976ULL;
short var_15 = (short)-28840;
signed char var_16 = (signed char)-10;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)16263;
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != (short)867;
    value_mismatch |= var_16 != (signed char)-9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_7, var_9, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
