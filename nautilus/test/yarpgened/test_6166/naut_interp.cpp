/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6166
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6166
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
void test(val<short> var_4, val<short> var_5, val<unsigned int> var_10, val<bool> var_11, val<int> zero, val<unsigned char*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-(var_10)))) ? (((((/* implicit */val<bool>) (val<signed char>)103)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<signed char>)103)))) : (((((/* implicit */val<int>) var_4)) * (((/* implicit */val<int>) (val<signed char>)-60))))))) * (((((val<long long int>) (val<short>)10348)) * (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<short>)10351)) * (((/* implicit */val<int>) var_11)))))))));
    *var_19 |= ((/* implicit */val<int>) ((val<unsigned short>) 7052849129609223704LL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6280;
short var_5 = (short)9753;
unsigned int var_10 = 2042950868U;
bool var_11 = (bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)217;
int var_19 = 1269425497;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != 1269432153;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_10, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
