/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2807
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2807
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
void test(val<unsigned int> var_0, val<int> var_2, val<unsigned char> var_3, val<bool> var_4, val<long long int> var_5, val<unsigned char> var_7, val<long long int> var_8, val<unsigned int> var_9, val<unsigned long long int> var_12, val<long long int> var_17, val<int> zero, val<int*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(min((var_5), (var_8)))))) ? (var_8) : (max((((var_5) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))), (((/* implicit */val<long long int>) var_2))))));
    *var_19 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) max((var_3), (((/* implicit */val<unsigned char>) var_4))))) ? (((var_4) ? (var_8) : (var_17))) : (((/* implicit */val<long long int>) var_0)))) >> (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_9) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))))) : (((((/* implicit */val<bool>) var_5)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2151281849U;
int var_2 = 1326381894;
unsigned char var_3 = (unsigned char)176;
bool var_4 = (bool)1;
long long int var_5 = 5395777612600727591LL;
unsigned char var_7 = (unsigned char)132;
long long int var_8 = 7377314079503839958LL;
unsigned int var_9 = 1239394302U;
unsigned long long int var_12 = 11188631202229062127ULL;
long long int var_17 = 9166797920347154913LL;
int zero = 0;
int var_18 = 487661390;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1856998698;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_12, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
