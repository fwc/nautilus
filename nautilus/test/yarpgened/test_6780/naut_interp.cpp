/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6780
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6780
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
void test(val<signed char> var_4, val<unsigned long long int> var_7, val<int> var_9, val<bool> var_17, val<bool> var_19, val<int> zero, val<unsigned char*> var_20, val<int*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))) : (((val<long long int>) var_4))));
    *var_21 = ((/* implicit */val<int>) var_19);
    *var_22 = min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<short>) var_9))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<short>)-24987), (((/* implicit */val<short>) (val<bool>)1)))))) : ((-(5188697223906476193LL)))))), (min((((/* implicit */val<unsigned long long int>) 1960608403U)), (12188029109818415822ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)8;
unsigned long long int var_7 = 4232869176415669477ULL;
int var_9 = 2109738309;
bool var_17 = (bool)1;
bool var_19 = (bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)217;
int var_21 = -653521394;
unsigned long long int var_22 = 14125620389900848207ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_9, var_17, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
