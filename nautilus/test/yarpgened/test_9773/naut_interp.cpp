/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9773
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9773
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
void test(val<long long int> var_1, val<unsigned short> var_6, val<signed char> var_9, val<unsigned char> var_10, val<signed char> var_11, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((val<unsigned int>) 6909307120439888685ULL)) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)8))))))))) && (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_6)))))));
    *var_15 = ((val<unsigned char>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_11))))), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) 0)) : (var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8664687336526022774LL;
unsigned short var_6 = (unsigned short)15812;
signed char var_9 = (signed char)-77;
unsigned char var_10 = (unsigned char)186;
signed char var_11 = (signed char)-115;
int zero = 0;
unsigned char var_14 = (unsigned char)181;
unsigned char var_15 = (unsigned char)60;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_10, var_11, zero, &var_14, &var_15);
  checksum();
}
