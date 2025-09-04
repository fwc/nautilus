/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 552
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=552
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
void test(val<int> var_2, val<signed char> var_5, val<unsigned char> var_9, val<long long int> var_11, val<int> zero, val<long long int*> var_19, val<short*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) var_9);
    *var_20 = ((/* implicit */val<short>) ((val<bool>) max(((-(((/* implicit */val<int>) var_9)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3620974298U))))))));
    *var_21 = ((/* implicit */val<int>) ((min((((7205097817022023576LL) << (((((((/* implicit */val<int>) var_5)) + (49))) - (32))))), (((/* implicit */val<long long int>) (val<unsigned short>)40008)))) < (((var_11) & (((/* implicit */val<long long int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1190117382;
signed char var_5 = (signed char)-16;
unsigned char var_9 = (unsigned char)216;
long long int var_11 = 6196331169815460322LL;
int zero = 0;
long long int var_19 = -3663214221851238536LL;
short var_20 = (short)31640;
int var_21 = 1373681391;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 216LL;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_11, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
