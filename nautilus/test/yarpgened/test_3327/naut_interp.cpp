/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3327
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3327
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
void test(val<long long int> var_0, val<short> var_2, val<short> var_4, val<unsigned short> var_5, val<long long int> var_6, val<int> var_8, val<int> zero, val<unsigned short*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) max((max((((/* implicit */val<long long int>) var_2)), (var_6))), (((/* implicit */val<long long int>) var_8)))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) (val<unsigned short>)32377)) ? (((/* implicit */val<int>) (val<unsigned short>)32377)) : (((/* implicit */val<int>) (val<unsigned short>)33177))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) -32768LL))))), (var_5))))) : (((((/* implicit */val<bool>) 35184355311616ULL)) ? ((-(var_0))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) > (-32768LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2299895490543048091LL;
short var_2 = (short)30223;
short var_4 = (short)21128;
unsigned short var_5 = (unsigned short)47846;
long long int var_6 = -3855574309731130245LL;
int var_8 = 728794208;
int zero = 0;
unsigned short var_10 = (unsigned short)19322;
unsigned long long int var_11 = 5002108447489608613ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)0;
    value_mismatch |= var_11 != 47846ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
