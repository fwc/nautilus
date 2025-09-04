/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5346
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5346
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
void test(val<long long int> var_2, val<long long int> var_3, val<int> var_8, val<long long int> var_16, val<int> zero, val<long long int*> var_20, val<unsigned char*> var_21) {
    *var_20 = min((((/* implicit */val<long long int>) ((val<signed char>) ((((/* implicit */val<bool>) var_3)) ? (3544651459014560712ULL) : (((/* implicit */val<unsigned long long int>) var_8)))))), ((-(min((((/* implicit */val<long long int>) (val<signed char>)-58)), (var_2))))));
    *var_21 = ((/* implicit */val<unsigned char>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 769050056711915513LL;
long long int var_3 = 8216712362292950084LL;
int var_8 = 885579509;
long long int var_16 = 4811267949252902850LL;
int zero = 0;
long long int var_20 = 4086540201304713412LL;
unsigned char var_21 = (unsigned char)11;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -56LL;
    value_mismatch |= var_21 != (unsigned char)194;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_16, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
