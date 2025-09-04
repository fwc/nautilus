/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4874
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4874
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
void test(val<unsigned int> var_4, val<bool> var_5, val<signed char> var_6, val<long long int> var_7, val<signed char> var_9, val<unsigned int> var_10, val<unsigned long long int> var_14, val<signed char> var_15, val<unsigned long long int> var_18, val<int> zero, val<bool*> var_19, val<int*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<bool>) var_7);
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((var_14) | (((/* implicit */val<unsigned long long int>) min((var_10), (((/* implicit */val<unsigned int>) var_6)))))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)124))) ^ (var_4)))) : (((val<long long int>) var_9)))))));
    *var_21 = ((/* implicit */val<unsigned int>) ((val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned int>) -2778695432719687264LL))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-1))) : (((var_5) ? (var_14) : (var_18))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1110067379U;
bool var_5 = (bool)1;
signed char var_6 = (signed char)-44;
long long int var_7 = -2261761312884120726LL;
signed char var_9 = (signed char)107;
unsigned int var_10 = 1195482750U;
unsigned long long int var_14 = 5821118507476791360ULL;
signed char var_15 = (signed char)-123;
unsigned long long int var_18 = 8046681436099217376ULL;
int zero = 0;
bool var_19 = (bool)0;
int var_20 = 1997867074;
unsigned int var_21 = 3488407000U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != 4294967295U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_9, var_10, var_14, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
