/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3193
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
void test(val<long long int> var_0, val<unsigned long long int> var_4, val<short> var_7, val<unsigned short> var_13, val<bool> var_15, val<long long int> var_16, val<int> zero, val<unsigned long long int*> var_19, val<unsigned int*> var_20, val<unsigned int*> var_21) {
    *var_19 = min((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<unsigned char>)155)) : (((/* implicit */val<int>) var_13)))) >> (((((/* implicit */val<int>) (val<unsigned char>)101)) - (72)))))), (var_4));
    *var_20 = ((/* implicit */val<unsigned int>) (~(min(((-(var_16))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) ^ (-1223431437987737708LL)))))));
    *var_21 = ((/* implicit */val<unsigned int>) max((var_16), (((/* implicit */val<long long int>) max(((+(((/* implicit */val<int>) var_15)))), (((/* implicit */val<int>) var_15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5608185336172385890LL;
unsigned long long int var_4 = 13802884548104466330ULL;
short var_7 = (short)17824;
unsigned short var_13 = (unsigned short)42663;
bool var_15 = (bool)1;
long long int var_16 = 4856273460014408541LL;
int zero = 0;
unsigned long long int var_19 = 15597266339443622712ULL;
unsigned int var_20 = 1305244371U;
unsigned int var_21 = 4184623883U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != 1951458140U;
    value_mismatch |= var_21 != 1951458141U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_13, var_15, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
}
