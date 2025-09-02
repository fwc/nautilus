/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3399
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3399
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
void test(val<unsigned long long int> var_1, val<bool> var_6, val<unsigned long long int> var_9, val<unsigned long long int> var_13, val<unsigned int> var_15, val<int> zero, val<unsigned long long int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) var_1));
    *var_21 = ((/* implicit */val<unsigned short>) max((min((((((/* implicit */val<bool>) var_13)) ? (var_9) : (((/* implicit */val<unsigned long long int>) var_15)))), (((/* implicit */val<unsigned long long int>) var_6)))), (((/* implicit */val<unsigned long long int>) (+(-8890185402481895281LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10165393329898913676ULL;
bool var_6 = (bool)1;
unsigned long long int var_9 = 15813014924734543151ULL;
unsigned long long int var_13 = 15399171014700222720ULL;
unsigned int var_15 = 1125124211U;
int zero = 0;
unsigned long long int var_20 = 9940405594276000830ULL;
unsigned short var_21 = (unsigned short)25477;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 10165393329898913676ULL;
    value_mismatch |= var_21 != (unsigned short)6287;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_13, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
