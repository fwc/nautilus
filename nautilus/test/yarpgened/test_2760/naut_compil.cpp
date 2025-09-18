/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2760
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2760
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
void test(val<signed char> var_0, val<unsigned long long int> var_4, val<unsigned long long int> var_8, val<unsigned long long int> var_10, val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21) {
    *var_18 = ((((/* implicit */val<bool>) (~(min((((/* implicit */val<unsigned long long int>) (val<signed char>)54)), (var_8)))))) ? (var_4) : (var_12));
    *var_19 = ((/* implicit */val<signed char>) var_10);
    *var_20 |= ((/* implicit */val<unsigned long long int>) (val<signed char>)-2);
    *var_21 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned long long int var_4 = 6988646015748832308ULL;
unsigned long long int var_8 = 3245847599866528837ULL;
unsigned long long int var_10 = 2479769265820373884ULL;
unsigned long long int var_12 = 7274227088024479389ULL;
int zero = 0;
unsigned long long int var_18 = 16973366938669418223ULL;
signed char var_19 = (signed char)-108;
unsigned long long int var_20 = 11382021138024512812ULL;
signed char var_21 = (signed char)70;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 6988646015748832308ULL;
    value_mismatch |= var_19 != (signed char)124;
    value_mismatch |= var_20 != 18446744073709551614ULL;
    value_mismatch |= var_21 != (signed char)118;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_10, var_12, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
