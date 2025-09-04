/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1871
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
void test(val<bool> var_0, val<int> var_6, val<int> var_15, val<unsigned char> var_16, val<int> zero, val<bool*> var_17, val<unsigned int*> var_18, val<bool*> var_19, val<bool*> var_20, val<bool*> var_21) {
    *var_17 = (val<bool>)0;
    *var_18 = ((/* implicit */val<unsigned int>) var_0);
    *var_19 = ((/* implicit */val<bool>) max((*var_19), (((/* implicit */val<bool>) (+(min((max((var_6), (var_15))), (((/* implicit */val<int>) var_16)))))))));
    *var_20 = ((/* implicit */val<bool>) var_16);
    *var_21 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_16)), ((((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) (val<bool>)1)))) : (693030251U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_6 = -1685625001;
int var_15 = -316786893;
unsigned char var_16 = (unsigned char)213;
int zero = 0;
bool var_17 = (bool)0;
unsigned int var_18 = 3175217324U;
bool var_19 = (bool)0;
bool var_20 = (bool)1;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
