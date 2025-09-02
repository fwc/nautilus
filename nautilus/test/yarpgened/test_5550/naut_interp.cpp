/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5550
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5550
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
void test(val<unsigned int> var_3, val<short> var_6, val<bool> var_8, val<bool> var_9, val<unsigned long long int> var_10, val<bool> var_11, val<unsigned int> var_12, val<unsigned int> var_14, val<unsigned long long int> var_17, val<bool> var_18, val<int> zero, val<unsigned char*> var_19, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) var_3);
    *var_20 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) min((var_9), ((val<bool>)0)))), (max((var_14), (var_12)))))) : (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_11)), (var_10)))) ? (max((var_17), (((/* implicit */val<unsigned long long int>) var_6)))) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) var_18)), (var_3))))))));
    *var_21 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) var_8)), (var_17)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3017759487U;
short var_6 = (short)28403;
bool var_8 = (bool)0;
bool var_9 = (bool)1;
unsigned long long int var_10 = 7798149416088752213ULL;
bool var_11 = (bool)1;
unsigned int var_12 = 1632713768U;
unsigned int var_14 = 1335876095U;
unsigned long long int var_17 = 8009523518918241912ULL;
bool var_18 = (bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
bool var_20 = (bool)0;
unsigned int var_21 = 1921613313U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)255;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 1161965176U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, var_9, var_10, var_11, var_12, var_14, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
