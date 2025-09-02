/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3861
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_5, val<unsigned long long int> var_8, val<bool> var_9, val<unsigned long long int> var_10, val<int> var_11, val<int> zero, val<bool*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((((/* implicit */val<bool>) min((min((var_10), (((/* implicit */val<unsigned long long int>) var_5)))), (min((var_4), (var_10)))))) && (var_9));
    *var_13 += var_9;
    *var_14 += ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((var_9) ? (max((2147483634), (((/* implicit */val<int>) (val<signed char>)-111)))) : (var_11)))) & (var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7718774650165271724ULL;
unsigned char var_5 = (unsigned char)153;
unsigned long long int var_8 = 6737478836564185465ULL;
bool var_9 = (bool)0;
unsigned long long int var_10 = 15994894658308387505ULL;
int var_11 = 580131134;
int zero = 0;
bool var_12 = (bool)0;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)148;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)204;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
