/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7627
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7627
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
void test(val<int> var_2, val<unsigned int> var_5, val<long long int> var_10, val<bool> var_11, val<unsigned short> var_15, val<int> zero, val<bool*> var_19, val<signed char*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<bool>) max((*var_19), (((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) var_11)))))));
    *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) ((min((((/* implicit */val<long long int>) (~(var_5)))), (min((((/* implicit */val<long long int>) var_2)), (var_10))))) ^ (((/* implicit */val<long long int>) max((((/* implicit */val<int>) min((((/* implicit */val<short>) var_11)), ((val<short>)18107)))), ((~(((/* implicit */val<int>) (val<bool>)1))))))))))));
    *var_21 = ((/* implicit */val<long long int>) max((*var_21), (((val<long long int>) min((((/* implicit */val<long long int>) var_15)), (((var_10) + (8952518922109169683LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 451081321;
unsigned int var_5 = 2141926616U;
long long int var_10 = -8767883981589449944LL;
bool var_11 = (bool)0;
unsigned short var_15 = (unsigned short)61105;
int zero = 0;
bool var_19 = (bool)1;
signed char var_20 = (signed char)116;
long long int var_21 = 6160384661277510062LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (signed char)40;
    value_mismatch |= var_21 != 6160384661277510062LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_10, var_11, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
