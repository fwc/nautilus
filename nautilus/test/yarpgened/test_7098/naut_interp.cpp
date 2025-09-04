/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7098
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7098
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
void test(val<unsigned long long int> var_1, val<signed char> var_5, val<int> zero, val<unsigned char*> var_10, val<long long int*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned short>)50457)))));
    *var_11 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_5))));
    *var_12 = ((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) (val<unsigned char>)7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14329356695987869758ULL;
signed char var_5 = (signed char)-92;
int zero = 0;
unsigned char var_10 = (unsigned char)102;
long long int var_11 = -7099897233721828081LL;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)25;
    value_mismatch |= var_11 != 92LL;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
