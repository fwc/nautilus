/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 151
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=151
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
void test(val<signed char> var_1, val<long long int> var_2, val<signed char> var_3, val<unsigned short> var_7, val<unsigned int> var_9, val<int> zero, val<signed char*> var_10, val<short*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) min((*var_10), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<int>) ((((/* implicit */val<bool>) 1966080)) ? (-1053654396) : (((/* implicit */val<int>) var_3)))))) ? (min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)-73))))), (((((/* implicit */val<bool>) var_7)) ? (var_2) : (3106674959938243421LL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (((~(((/* implicit */val<int>) (val<short>)-32754)))) == ((~(0))))))))))));
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<int>) ((val<short>) var_9))) == (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
long long int var_2 = 216406353155921666LL;
signed char var_3 = (signed char)77;
unsigned short var_7 = (unsigned short)57318;
unsigned int var_9 = 2140780465U;
int zero = 0;
signed char var_10 = (signed char)6;
short var_11 = (short)-843;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-83;
    value_mismatch |= var_11 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
