/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4894
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4894
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
void test(val<long long int> var_1, val<short> var_13, val<signed char> var_15, val<int> zero, val<short*> var_16, val<short*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_16 = ((/* implicit */val<short>) var_1);
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((val<short>) ((val<short>) ((val<int>) (val<signed char>)-1))))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) (val<signed char>)15)), ((val<unsigned char>)254))))))) : (((/* implicit */val<int>) max(((val<unsigned char>)190), ((val<unsigned char>)63))))));
    *var_19 -= ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_15)) / (((/* implicit */val<int>) var_13))))), (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4280736892809062877LL;
short var_13 = (short)3606;
signed char var_15 = (signed char)-126;
int zero = 0;
short var_16 = (short)12935;
short var_17 = (short)29712;
unsigned short var_18 = (unsigned short)45217;
unsigned long long int var_19 = 10303136132310386466ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)10717;
    value_mismatch |= var_17 != (short)-1;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 6022399239501323589ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
