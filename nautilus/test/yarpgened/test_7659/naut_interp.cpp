/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7659
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7659
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned char> var_2, val<long long int> var_7, val<unsigned char> var_8, val<int> var_9, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12, val<bool*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) 0LL);
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (min((((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_2)), (var_9)))), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) ^ (var_1))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))));
    *var_13 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) (val<signed char>)63)), (var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned int var_1 = 2578683402U;
unsigned char var_2 = (unsigned char)142;
long long int var_7 = -423573312558772605LL;
unsigned char var_8 = (unsigned char)173;
int var_9 = 1876996813;
int zero = 0;
unsigned long long int var_11 = 12350096663959964937ULL;
long long int var_12 = -5887292635819719692LL;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != 1876996813LL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
