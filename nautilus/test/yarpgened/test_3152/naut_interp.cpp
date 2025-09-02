/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3152
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3152
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
void test(val<long long int> var_3, val<unsigned long long int> var_6, val<unsigned long long int> var_9, val<signed char> var_11, val<bool> var_16, val<bool> var_17, val<int> zero, val<int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<int>) min((min((((/* implicit */val<long long int>) ((var_17) || (((/* implicit */val<bool>) var_9))))), (((((/* implicit */val<bool>) 1411241955)) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))), (((/* implicit */val<long long int>) var_16))));
    *var_21 = ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3224802461886102336LL;
unsigned long long int var_6 = 11072934632189421584ULL;
unsigned long long int var_9 = 9980035135496861758ULL;
signed char var_11 = (signed char)112;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
int zero = 0;
int var_20 = -577804599;
unsigned short var_21 = (unsigned short)63050;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != (unsigned short)26640;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_9, var_11, var_16, var_17, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
