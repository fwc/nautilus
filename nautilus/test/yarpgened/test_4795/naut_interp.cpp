/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4795
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4795
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
void test(val<unsigned long long int> var_0, val<short> var_2, val<unsigned long long int> var_4, val<long long int> var_5, val<signed char> var_7, val<short> var_8, val<signed char> var_10, val<unsigned long long int> var_12, val<int> var_14, val<int> zero, val<unsigned long long int*> var_17, val<int*> var_18, val<bool*> var_19) {
    *var_17 = max((((var_0) / (var_12))), (((/* implicit */val<unsigned long long int>) min((((val<short>) var_0)), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_7)))))))));
    *var_18 = ((/* implicit */val<int>) max((min((var_8), (((/* implicit */val<short>) ((val<signed char>) var_10))))), (((/* implicit */val<short>) ((((/* implicit */val<int>) var_7)) > (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) var_4))))))))));
    *var_19 = ((/* implicit */val<bool>) (+(((((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<signed char>)-27), ((val<signed char>)127))))) / (((((/* implicit */val<bool>) var_12)) ? (var_5) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12634612185997830301ULL;
short var_2 = (short)-17450;
unsigned long long int var_4 = 14034762807188832299ULL;
long long int var_5 = -5968080107086302874LL;
signed char var_7 = (signed char)-17;
short var_8 = (short)-6282;
signed char var_10 = (signed char)-101;
unsigned long long int var_12 = 6335163810664735280ULL;
int var_14 = 1190664399;
int zero = 0;
unsigned long long int var_17 = 11017262324487625211ULL;
int var_18 = 1464338555;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709545629ULL;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_7, var_8, var_10, var_12, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
