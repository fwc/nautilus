/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1168
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1168
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
void test(val<int> var_0, val<bool> var_1, val<bool> var_3, val<unsigned long long int> var_7, val<int> zero, val<bool*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<bool>) var_0);
    *var_12 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 17906204751911162461ULL)) ? (((/* implicit */val<int>) var_1)) : (var_0)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_3)) << (((var_7) - (9324625452670609002ULL)))))) : (((-7472492942069946206LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)60376))))))) >> (((var_7) - (9324625452670608959ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1980152123;
bool var_1 = (bool)1;
bool var_3 = (bool)0;
unsigned long long int var_7 = 9324625452670609018ULL;
int zero = 0;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)228;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
