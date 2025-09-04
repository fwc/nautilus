/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5382
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5382
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<int> var_3, val<bool> var_4, val<signed char> var_6, val<unsigned char> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) min((var_6), (((/* implicit */val<signed char>) var_4))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_0)) : (var_3))))))) + (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_3)), (var_1)))) >= (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) - (var_9))))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (!(((val<bool>) var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63049;
long long int var_1 = -6637239632963729148LL;
int var_3 = -1315856715;
bool var_4 = (bool)1;
signed char var_6 = (signed char)61;
unsigned char var_8 = (unsigned char)169;
unsigned long long int var_9 = 8739622541811900720ULL;
int zero = 0;
unsigned long long int var_13 = 7310807498804672825ULL;
unsigned long long int var_14 = 9906788126015756292ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 7310807498804672823ULL;
    value_mismatch |= var_14 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_8, var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
