/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6372
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6372
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
void test(val<unsigned char> var_0, val<unsigned int> var_3, val<signed char> var_7, val<unsigned long long int> var_10, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) var_10);
    *var_12 = max((((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<int>) (val<unsigned char>)218)) >= (((/* implicit */val<int>) var_7)))), ((!((val<bool>)0)))))), (max((min((((/* implicit */val<unsigned long long int>) var_3)), (var_10))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned int var_3 = 2676468485U;
signed char var_7 = (signed char)-20;
unsigned long long int var_10 = 13770985801188731229ULL;
int zero = 0;
signed char var_11 = (signed char)62;
unsigned long long int var_12 = 4205810800374198568ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)93;
    value_mismatch |= var_12 != 18446744073709551555ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
