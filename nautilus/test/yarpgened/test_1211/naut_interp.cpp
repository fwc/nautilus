/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1211
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
void test(val<unsigned char> var_3, val<long long int> var_5, val<int> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned char*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = var_3;
    *var_13 = ((/* implicit */val<unsigned long long int>) min(((+(((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) var_9)) : (var_5))))), (min((((/* implicit */val<long long int>) (val<bool>)1)), (-8LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)141;
long long int var_5 = -824207392642081428LL;
int var_8 = -109332701;
unsigned int var_9 = 1257503209U;
int zero = 0;
unsigned char var_12 = (unsigned char)41;
unsigned long long int var_13 = 7444526129979580186ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)141;
    value_mismatch |= var_13 != 18446744073709551608ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, var_9, zero, &var_12, &var_13);
  checksum();
}
